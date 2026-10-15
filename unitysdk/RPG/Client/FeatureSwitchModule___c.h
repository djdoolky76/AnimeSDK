#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJLNKAFNAD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FEATURESWITCHMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFE7290)
#define RPG_CLIENT_FEATURESWITCHMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFE72D0)
#define RPG_CLIENT_FEATURESWITCHMODULE___C___CHECKSHIELDEDOUTFITSCHANGED_B__24_0_OFFSET UNITYSDK_OFFSET(0xCFE72E0)

namespace RPG::Client
{
	class FeatureSwitchModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A910);
		}

		static ::System::Func_2<::HBJLNKAFNAD*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::HBJLNKAFNAD*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __CheckShieldedOutfitsChanged_b__24_0(::HBJLNKAFNAD* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HBJLNKAFNAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C___CHECKSHIELDEDOUTFITSCHANGED_B__24_0_OFFSET))(this, a1);
		}

	};
}
