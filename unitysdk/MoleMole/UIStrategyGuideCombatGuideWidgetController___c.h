#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
class EFPLNPDOHJA;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C8C10)
#define MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C8C50)
#define MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__INITSKILLDESCLIST_B__13_0_OFFSET UNITYSDK_OFFSET(0x167C8C60)
#define MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__REFRESHVIDEO_B__16_0_OFFSET UNITYSDK_OFFSET(0x167C8CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideCombatGuideWidgetController___c_TypeDefinitionIndex = 83946;

	class UIStrategyGuideCombatGuideWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideCombatGuideWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42380);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideCombatGuideWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42388);
		}
		static ::System::Comparison_1<::EFPLNPDOHJA*>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::EFPLNPDOHJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideCombatGuideWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSkillDescList_b__13_0(::EFPLNPDOHJA* a, ::EFPLNPDOHJA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EFPLNPDOHJA*, ::EFPLNPDOHJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__INITSKILLDESCLIST_B__13_0_OFFSET))(this, a, b);
		}

		::System::Void _RefreshVideo_b__16_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDECOMBATGUIDEWIDGETCONTROLLER___C__REFRESHVIDEO_B__16_0_OFFSET))(this, vp);
		}
	};
}
