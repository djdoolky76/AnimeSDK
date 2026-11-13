#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C600320)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C600360)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillAvatarControl___c_TypeDefinitionIndex = 83266;

	class HimekoNovaSpecialSkillAvatarControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.HimekoNovaSpecialSkill", "<>c")->GetStaticField(0x204A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
