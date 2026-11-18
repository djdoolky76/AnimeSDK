#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196C8F50)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196C8F90)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x196C8FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex = 40508;

	class UIHollowVideoPlayDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFD0);
		}
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, vp);
		}
	};
}
