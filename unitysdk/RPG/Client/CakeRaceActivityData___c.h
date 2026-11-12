#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CAKERACEACTIVITYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD26AEE0)
#define RPG_CLIENT_CAKERACEACTIVITYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD26AF20)
#define RPG_CLIENT_CAKERACEACTIVITYDATA___C___GOTOENTRANCEPAGE_B__5_1_OFFSET UNITYSDK_OFFSET(0xD26AF30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceActivityData___c_TypeDefinitionIndex = 62997;

	class CakeRaceActivityData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C950);
		}

		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C_CTOR_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C___GOTOENTRANCEPAGE_B__5_1_OFFSET))(this);
		}

	};
}
