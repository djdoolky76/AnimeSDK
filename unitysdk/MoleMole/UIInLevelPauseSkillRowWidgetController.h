#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class BPDOBLDMEGB;
class BPHGNMNLLHF;
class DKKGMHGFHGN;
class GBENMHBBJHC;
class OHAILKANOOK;
class PEBJBODDHCN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleSkillAttributeRowChildWindowController; }
namespace MoleMole { class UIRoleSkillInfoRowChildWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x183CB170)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_BDOCPKHJIDN_OFFSET UNITYSDK_OFFSET(0x183CA9B0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_CDHEBBDODMG_OFFSET UNITYSDK_OFFSET(0x183CABE0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_COINELCPOFB_OFFSET UNITYSDK_OFFSET(0x183CB720)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETAVATARAWAKENINFO_OFFSET UNITYSDK_OFFSET(0x183C97A0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GLCKMPDLOIE_OFFSET UNITYSDK_OFFSET(0x183CA100)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183C9690)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183C9720)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183C95C0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183C9620)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x183CB4F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x183C9980)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183CA630)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183CA770)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183CA800)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183CA890)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183CA920)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController_TypeDefinitionIndex = 91610;

	class UIInLevelPauseSkillRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GBENMHBBJHC* _view; // 0x2C8
		::System::Collections::Generic::List_1<::BPDOBLDMEGB*>* OJJEJDJJPIB; // 0x2D0
		::OHAILKANOOK* KKKKJMILKFG; // 0x2D8
		::PEBJBODDHCN* KOFBODKADGG; // 0x2E0
		::System::Collections::Generic::List_1<::DKKGMHGFHGN*>* PEIOKDGALLN; // 0x2E8
		::System::Boolean BBBDDOGMIJO; // 0x2F0
		::System::Byte _padding0[0x3];
		::System::Int32 PKMFBJMJCOO; // 0x2F4
		::System::Boolean CNPFIPLHPPF; // 0x2F8
		::System::Byte _padding1[0x7];
		::BPHGNMNLLHF* JNNLPBBEIEM; // 0x300
		::Share::EAvatarSkillType BBDHPBAPPPI; // 0x308
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillInfoRowChildWindowController*>* OFCIACFDLBC; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillAttributeRowChildWindowController*>* HCDCBHGGJMK; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void GetAvatarAwakenInfo(::System::Int32& awakenDescCount, ::System::String*& awakenTitle, ::System::String*& awakenDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GETAVATARAWAKENINFO_OFFSET))(this, awakenDescCount, awakenTitle, awakenDesc);
		}

		::System::Void RefreshInfo(::Share::EAvatarSkillType type, ::System::Int32 avatarID, ::BPHGNMNLLHF* avatarItem)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType, ::System::Int32, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, type, avatarID, avatarItem);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BDOCPKHJIDN(::System::Boolean JBJFINAFFKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_BDOCPKHJIDN_OFFSET))(this, JBJFINAFFKO);
		}

		::System::Void GLCKMPDLOIE(::Share::EAvatarSkillType OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_GLCKMPDLOIE_OFFSET))(this, OBNIAHNMHPF);
		}

		::System::Void CDHEBBDODMG(::System::Boolean JBJFINAFFKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_CDHEBBDODMG_OFFSET))(this, JBJFINAFFKO);
		}

		::System::Void ABDLEONNPAJ(::System::Boolean JBJFINAFFKO, ::BPHGNMNLLHF* JNNLPBBEIEM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_ABDLEONNPAJ_OFFSET))(this, JBJFINAFFKO, JNNLPBBEIEM);
		}

		::System::Void COINELCPOFB(::System::Boolean GNGFPMIILFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_COINELCPOFB_OFFSET))(this, GNGFPMIILFF);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER_PHOADBJGFBE_OFFSET))(this);
		}
	};
}
