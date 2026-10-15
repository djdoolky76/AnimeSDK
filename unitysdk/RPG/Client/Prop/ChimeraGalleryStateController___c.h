#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraGalleryStateController_ActConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC79930)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC79970)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C___INIT_B__10_0_OFFSET UNITYSDK_OFFSET(0xDC79980)

namespace RPG::Client::Prop
{
	class ChimeraGalleryStateController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x50140);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x50148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__10_0(::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C___INIT_B__10_0_OFFSET))(this, a1);
		}

	};
}
