#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1704D600)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1704D640)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillDisplayWindow___c_TypeDefinitionIndex = 83269;

	class HimekoNovaSpecialSkillDisplayWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.HimekoNovaSpecialSkill", "<>c")->GetStaticField(0x22180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
