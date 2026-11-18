#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"

class FGCOIBFFCHB;
class HGAJKHIMKJP;
class IOOIHHOJOPI;
class JMIAOIAIIOG;
class LGINJIKKBJA;
class POOFKGJJLAH;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PLEIAGMBLBA_AHJCJALAFMM_OFFSET UNITYSDK_OFFSET(0x150D6BB0)
#define PLEIAGMBLBA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x150D5C10)
#define PLEIAGMBLBA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x150D6410)
#define PLEIAGMBLBA_HPKNOPLHEJC_OFFSET UNITYSDK_OFFSET(0x150D6930)
#define PLEIAGMBLBA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x150D6AA0)
#define PLEIAGMBLBA_KEIOAMJPJBA_OFFSET UNITYSDK_OFFSET(0x150D6B30)
#define PLEIAGMBLBA_LOJIOBPNAMB_OFFSET UNITYSDK_OFFSET(0x150D6540)
#define PLEIAGMBLBA_ONSELECT_OFFSET UNITYSDK_OFFSET(0x150D63C0)
#define PLEIAGMBLBA__CTOR_OFFSET UNITYSDK_OFFSET(0x150D64F0)

inline static constexpr unsigned int PLEIAGMBLBA_TypeDefinitionIndex = 90027;

class PLEIAGMBLBA : public ::PBJOCICFNGK
{
public:
	::LGINJIKKBJA* PMGINAMIFCA; // 0x50
	::UnityEngine::GameObject* KPCGKLLHDAB; // 0x58
	::UnityEngine::GameObject* NHFEKNNCAJI; // 0x60
	::FGCOIBFFCHB* AOOLNBKIHAG; // 0x68
	::HGAJKHIMKJP* IPMMCGDMODG; // 0x70
	::POOFKGJJLAH* OPOLMJLMHCD; // 0x78
	::JMIAOIAIIOG* HIAGKFPPFAK; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* GFAFMKBICMC; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* HIAIKHDFCLN; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIAGMBLBA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void OnSelect(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_ONSELECT_OFFSET))(this, LIEJIGMGGOL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void LOJIOBPNAMB(::HGAJKHIMKJP* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_LOJIOBPNAMB_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void HPKNOPLHEJC(::System::Boolean HAPCJJHJGPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_HPKNOPLHEJC_OFFSET))(this, HAPCJJHJGPJ);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void KEIOAMJPJBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_KEIOAMJPJBA_OFFSET))(this);
	}

	::System::Void AHJCJALAFMM(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + PLEIAGMBLBA_AHJCJALAFMM_OFFSET))(this, NFFNEFLKPDG);
	}
};
