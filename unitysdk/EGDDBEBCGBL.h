#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EECCIPNJPGE;
class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define EGDDBEBCGBL_AFAMCPEJKAA_OFFSET UNITYSDK_OFFSET(0x17108C70)
#define EGDDBEBCGBL_CLFCJAMGJLA_OFFSET UNITYSDK_OFFSET(0x17108B30)
#define EGDDBEBCGBL_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17108620)
#define EGDDBEBCGBL_FENOAAMDHPA_OFFSET UNITYSDK_OFFSET(0x17108A50)
#define EGDDBEBCGBL_IHHDDMLNFLO_OFFSET UNITYSDK_OFFSET(0x17108DA0)
#define EGDDBEBCGBL_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x17108B50)
#define EGDDBEBCGBL_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x171086D0)
#define EGDDBEBCGBL_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x17108BE0)
#define EGDDBEBCGBL_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x17108750)
#define EGDDBEBCGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x17108A00)

inline static constexpr unsigned int EGDDBEBCGBL_TypeDefinitionIndex = 64800;

class EGDDBEBCGBL : public ::PBJOCICFNGK
{
public:
	::EECCIPNJPGE* GOICOOANBFP; // 0x50
	::LJHFMILANJA_1<::System::Boolean>* INNJDEMEDAL; // 0x58
	::JIOLFCAGOFH_1<::System::Int32>* PNAOEHMOCPB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_PILPKINFMBA_OFFSET))(this);
	}

	::System::Boolean FENOAAMDHPA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_FENOAAMDHPA_OFFSET))(this);
	}

	::UnityEngine::RectTransform* CLFCJAMGJLA()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_CLFCJAMGJLA_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Void AFAMCPEJKAA(::JIOLFCAGOFH_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Int32>*))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_AFAMCPEJKAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IHHDDMLNFLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDBEBCGBL_IHHDDMLNFLO_OFFSET))(this);
	}
};
