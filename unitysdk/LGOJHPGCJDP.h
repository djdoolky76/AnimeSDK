#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLENAABEIH.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define LGOJHPGCJDP_BDEFFGLDLLE_OFFSET UNITYSDK_OFFSET(0x1565E7F0)
#define LGOJHPGCJDP_DEAEFFDGMCN_OFFSET UNITYSDK_OFFSET(0x1565EA00)
#define LGOJHPGCJDP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1565E310)
#define LGOJHPGCJDP_GILKNDBOPIK_OFFSET UNITYSDK_OFFSET(0x1565E690)
#define LGOJHPGCJDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1565E640)

inline static constexpr unsigned int LGOJHPGCJDP_TypeDefinitionIndex = 38637;

class LGOJHPGCJDP : public ::PBJOCICFNGK
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LHIOBNFIDPH; // 0x50
	::UnityEngine::RectTransform* PAGCJAINFPF; // 0x58
	::UnityEngine::RectTransform* BPINPFOLDJP; // 0x60
	::UnityEngine::UI::Extension::UITimeWidget* EHMHCHMFPKM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOJHPGCJDP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LGOJHPGCJDP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void GILKNDBOPIK(::System::Int32 CKELOFDFEEM, ::System::Boolean AMBEJKOJMEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LGOJHPGCJDP_GILKNDBOPIK_OFFSET))(this, CKELOFDFEEM, AMBEJKOJMEC);
	}

	::System::Void BDEFFGLDLLE(::System::Int64 FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LGOJHPGCJDP_BDEFFGLDLLE_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void DEAEFFDGMCN(::ODLENAABEIH JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::ODLENAABEIH))((::PBYTE)hIl2Cpp + LGOJHPGCJDP_DEAEFFDGMCN_OFFSET))(this, JKBLDFBGBPK);
	}
};
