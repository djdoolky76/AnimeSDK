#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIMainCitySidebarItemContext; }
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class ABGINBDKGEK_1;
template <typename T> class DBMAHDDGMHM_1;

#define EEFMFOINMPI_DEEBGGIAHNO_OFFSET UNITYSDK_OFFSET(0x1353BDE0)
#define EEFMFOINMPI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1353B1F0)
#define EEFMFOINMPI_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x1353C090)
#define EEFMFOINMPI_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x1353C0E0)
#define EEFMFOINMPI_KNDCJCAFKDH_OFFSET UNITYSDK_OFFSET(0x1353C170)
#define EEFMFOINMPI_LCCIFMMAOOF_OFFSET UNITYSDK_OFFSET(0x1353BD20)
#define EEFMFOINMPI_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1353B7D0)
#define EEFMFOINMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1353BC80)

inline static constexpr unsigned int EEFMFOINMPI_TypeDefinitionIndex = 88947;

class EEFMFOINMPI : public ::PBJOCICFNGK
{
public:
	::ABGINBDKGEK_1<::MoleMole::UIMainCitySidebarItemContext*>* CDMBEOFBKCL; // 0x50
	::DBMAHDDGMHM_1<::MoleMole::UIMainCitySidebarItemGatherContext*>* DAAAEJDBNFI; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UIMainCitySidebarItemContext*>* AECHNIIOHLI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + EEFMFOINMPI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void OnSelect(::MoleMole::UIMainCitySidebarItemContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemContext*))((::PBYTE)hIl2Cpp + EEFMFOINMPI_ONSELECT_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean LCCIFMMAOOF(::MoleMole::MonoGamepadModule* MLOGBJPPCKD, ::System::Int32& FOLKIBNJNHM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEFMFOINMPI_LCCIFMMAOOF_OFFSET))(this, MLOGBJPPCKD, FOLKIBNJNHM);
	}

	::MoleMole::UIMainCitySidebarItemGatherContext* GFBJLHMNBAD()
	{
		return ((::MoleMole::UIMainCitySidebarItemGatherContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_GFBJLHMNBAD_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIMainCitySidebarItemGatherContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + EEFMFOINMPI_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 DEEBGGIAHNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI_DEEBGGIAHNO_OFFSET))(this);
	}

	::System::Void KNDCJCAFKDH(::MoleMole::MonoGamepadModule* MLOGBJPPCKD, ::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* LNEEMAGIHLB, ::OKKIMONLGJD IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + EEFMFOINMPI_KNDCJCAFKDH_OFFSET))(this, MLOGBJPPCKD, ABHBKFJKINO, LNEEMAGIHLB, IGAAKDOIPNN);
	}
};
