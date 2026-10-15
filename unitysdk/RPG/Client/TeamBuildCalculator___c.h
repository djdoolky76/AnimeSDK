#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCICCEMLIO;
class MDNBBCOBGPH;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1C9FA0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C9FE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET UNITYSDK_OFFSET(0xE1CA010)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET UNITYSDK_OFFSET(0xE1C9FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator___c_TypeDefinitionIndex = 68088;

	class TeamBuildCalculator___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF5A0);
		}

		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF5A8);
		}

		static ::System::Func_2<::LLCICCEMLIO*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::LLCICCEMLIO*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C_CTOR_OFFSET))(this);
		}

		::System::Void __FillWithMainAvatars_b__20_0(::MDNBBCOBGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDNBBCOBGPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C___FILLWITHMAINAVATARS_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTeamBuildSynopsis_b__25_1(::LLCICCEMLIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLCICCEMLIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___C__GETTEAMBUILDSYNOPSIS_B__25_1_OFFSET))(this, a1);
		}

	};
}
