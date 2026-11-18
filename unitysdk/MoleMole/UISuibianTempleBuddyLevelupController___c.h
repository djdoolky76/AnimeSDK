#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace MoleMole { class UISuibianTempleDeployTipsPopWindowController_AttrItem; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185A54A0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185A54E0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__29_2_OFFSET UNITYSDK_OFFSET(0x185A54F0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__32_0_OFFSET UNITYSDK_OFFSET(0x185A5630)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex = 42710;

	class UISuibianTempleBuddyLevelupController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__29_2()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x39140);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x39148);
		}
		static ::System::Comparison_1<::FOLOGHLENFB*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBuddyLevelupController___c_TypeDefinitionIndex)->GetStaticField(0x39150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnClickBtn2_b__29_2(::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* l, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem* r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*, ::MoleMole::UISuibianTempleDeployTipsPopWindowController_AttrItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__ONCLICKBTN2_B__29_2_OFFSET))(this, l, r);
		}

		::System::Int32 _SetConsume_b__32_0(::FOLOGHLENFB* lhs, ::FOLOGHLENFB* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::FOLOGHLENFB*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__SETCONSUME_B__32_0_OFFSET))(this, lhs, rhs);
		}
	};
}
