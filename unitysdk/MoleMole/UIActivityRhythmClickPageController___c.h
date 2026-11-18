#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A31D580)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CLEARALLEFFECTS_B__97_0_OFFSET UNITYSDK_OFFSET(0x1A31D5E0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31D5C0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__HIDEBOTTOMTIPS_B__63_0_OFFSET UNITYSDK_OFFSET(0x1A31D5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c_TypeDefinitionIndex = 87906;

	class UIActivityRhythmClickPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__63_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityRhythmClickPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EC70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityRhythmClickPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EC78);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityRhythmClickPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HideBottomTips_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__HIDEBOTTOMTIPS_B__63_0_OFFSET))(this);
		}

		::System::Boolean _ClearAllEffects_b__97_0(::System::Int32 effectKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__CLEARALLEFFECTS_B__97_0_OFFSET))(this, effectKey);
		}
	};
}
