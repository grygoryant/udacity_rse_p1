#include <gazebo/gazebo.hh>

namespace gazebo
{
    class DymmyPlugin : public WorldPlugin
    {
    public:
        DymmyPlugin() : WorldPlugin()
        {
            printf("Hello World!\n");
        }

        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {

        }
    };

    GZ_REGISTER_WORLD_PLUGIN(DymmyPlugin)
}