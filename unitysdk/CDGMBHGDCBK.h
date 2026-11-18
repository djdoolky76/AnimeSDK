#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IMJFKNLKDEF;
class IOOIHHOJOPI;
namespace UnityEngine { class RectTransform; }

#define CDGMBHGDCBK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16862E70)
#define CDGMBHGDCBK_IDHIPCGBJFM_OFFSET UNITYSDK_OFFSET(0x16863110)
#define CDGMBHGDCBK_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x16862FF0)
#define CDGMBHGDCBK_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x16862F20)
#define CDGMBHGDCBK_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x16863080)
#define CDGMBHGDCBK_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x16862F60)
#define CDGMBHGDCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16862FA0)

inline static constexpr unsigned int CDGMBHGDCBK_TypeDefinitionIndex = 41993;

class CDGMBHGDCBK : public ::PBJOCICFNGK
{
public:
	::IMJFKNLKDEF* GOICOOANBFP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_NPKBDILPMHJ_OFFSET))(this);
	}

	::UnityEngine::RectTransform* IDHIPCGBJFM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMBHGDCBK_IDHIPCGBJFM_OFFSET))(this);
	}
};
