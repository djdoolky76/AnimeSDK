#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD326800)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD326840)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__LOADALL_B__27_0_OFFSET UNITYSDK_OFFSET(0xD326850)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	class HimekoNovaSpecialSkillData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.HimekoNovaSpecialSkill", "<>c")->GetStaticField(0x143A0);
		}

		static ::System::Comparison_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>**)UnitySDK::FromName("RPG.Client.HimekoNovaSpecialSkill", "<>c")->GetStaticField(0x143A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadAll_b__27_0(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData* a1, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__LOADALL_B__27_0_OFFSET))(this, a1, a2);
		}

	};
}
