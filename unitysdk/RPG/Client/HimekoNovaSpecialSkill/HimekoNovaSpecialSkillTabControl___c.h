#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1704E200)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1704E240)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillTabControl___c_TypeDefinitionIndex = 83271;

	class HimekoNovaSpecialSkillTabControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.HimekoNovaSpecialSkill", "<>c")->GetStaticField(0x222E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
