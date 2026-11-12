#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJLNKAFNAD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FEATURESWITCHMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD968900)
#define RPG_CLIENT_FEATURESWITCHMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD968940)
#define RPG_CLIENT_FEATURESWITCHMODULE___C___CHECKSHIELDEDOUTFITSCHANGED_B__24_0_OFFSET UNITYSDK_OFFSET(0xD968950)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule___c_TypeDefinitionIndex = 65613;

	class FeatureSwitchModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66490);
		}

		static ::System::Func_2<::HBJLNKAFNAD*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::HBJLNKAFNAD*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66498);
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
