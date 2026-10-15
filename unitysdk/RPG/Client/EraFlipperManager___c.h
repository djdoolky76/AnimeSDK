#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE1A670)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE1A6B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C___ENTERERAREGION_B__29_2_OFFSET UNITYSDK_OFFSET(0xCE1A6C0)

namespace RPG::Client
{
	class EraFlipperManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4FFC0);
		}

		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4FFC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __EnterEraRegion_b__29_2(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C___ENTERERAREGION_B__29_2_OFFSET))(this, a1);
		}

	};
}
