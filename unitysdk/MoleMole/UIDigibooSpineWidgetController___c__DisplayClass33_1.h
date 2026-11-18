#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect_EffectAction; }

#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x170661C0)
#define MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___C__DISPLAYCLASS33_1__REFRESHSTATEMACHINEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x170661D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooSpineWidgetController___c__DisplayClass33_1_TypeDefinitionIndex = 87512;

	template <typename T>
	class UIDigibooSpineWidgetController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MoleMole::ConfigDigibooEffect_EffectAction* item; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStateMachineEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOSPINEWIDGETCONTROLLER___C__DISPLAYCLASS33_1__REFRESHSTATEMACHINEEFFECT_B__0_OFFSET))(this);
		}
	};
}
