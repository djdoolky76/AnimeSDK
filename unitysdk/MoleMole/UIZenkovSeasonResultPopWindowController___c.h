#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class GIPMMANEDDK;
namespace MoleMole { class UIZenkovResultNumWidgetController; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F6E3B0)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6E3F0)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__PLAYRESULTANIMATION_B__54_0_OFFSET UNITYSDK_OFFSET(0x18F6E440)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__PLAYRESULTANIMATION_B__54_1_OFFSET UNITYSDK_OFFSET(0x18F6E460)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__REFRESHTAGS_B__53_0_OFFSET UNITYSDK_OFFSET(0x18F6E400)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__REFRESHTAGS_B__53_1_OFFSET UNITYSDK_OFFSET(0x18F6E420)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex = 49157;

	class UIZenkovSeasonResultPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GIPMMANEDDK*, ::System::Int32>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::GIPMMANEDDK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C810);
		}
		static ::System::Func_3<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32, ::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>>** StaticGet___9__54_0()
		{
			return (::System::Func_3<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32, ::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C818);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C820);
		}
		static ::System::Func_2<::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>, ::System::Boolean>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C828);
		}
		static ::System::Func_2<::GIPMMANEDDK*, ::System::Int32>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::GIPMMANEDDK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovSeasonResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshTags_b__53_0(::GIPMMANEDDK* t)
		{
			return ((::System::Int32(*)(::PVOID, ::GIPMMANEDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__REFRESHTAGS_B__53_0_OFFSET))(this, t);
		}

		::System::Int32 _RefreshTags_b__53_1(::GIPMMANEDDK* t)
		{
			return ((::System::Int32(*)(::PVOID, ::GIPMMANEDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__REFRESHTAGS_B__53_1_OFFSET))(this, t);
		}

		::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32> _PlayResultAnimation_b__54_0(::MoleMole::UIZenkovResultNumWidgetController* w, ::System::Int32 i)
		{
			return ((::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>(*)(::PVOID, ::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__PLAYRESULTANIMATION_B__54_0_OFFSET))(this, w, i);
		}

		::System::Boolean _PlayResultAnimation_b__54_1(::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__PLAYRESULTANIMATION_B__54_1_OFFSET))(this, pair);
		}
	};
}
