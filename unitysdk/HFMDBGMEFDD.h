#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCNGDMKEFIB;
class EDBMNBCCFLD;
class FGCOIBFFCHB;
class FPCFGAPAMEF;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HFMDBGMEFDD_FAAFMPDBCAM_OFFSET UNITYSDK_OFFSET(0x16F30330)
#define HFMDBGMEFDD_GBJGIJONEFG_1_OFFSET UNITYSDK_OFFSET(0x16F30040)
#define HFMDBGMEFDD_GBJGIJONEFG_OFFSET UNITYSDK_OFFSET(0x16F2FFA0)
#define HFMDBGMEFDD_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x16F30340)
#define HFMDBGMEFDD_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x16F30110)
#define HFMDBGMEFDD_NBEICDBDCKD_OFFSET UNITYSDK_OFFSET(0x16F30100)
#define HFMDBGMEFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2FDF0)

inline static constexpr unsigned int HFMDBGMEFDD_TypeDefinitionIndex = 41961;

class HFMDBGMEFDD : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x10
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x18
	::LGINJIKKBJA* CGOBDCLIIDH; // 0x20
	::UnityEngine::RectTransform* BLBHEMCBCOL; // 0x28
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x30
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x40
	::FGCOIBFFCHB* JNMJIIICELM; // 0x48
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x50
	::DCNGDMKEFIB* _AEANKPFAPHM_k__BackingField; // 0x58
	::UnityEngine::GameObject* ILCHICALAHE; // 0x60
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x68
	::LGINJIKKBJA* ONOINJOLLPK; // 0x70

	::System::Void _ctor(::DCNGDMKEFIB* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD__CTOR_OFFSET))(this, IOKOLJDCKPN);
	}

	::System::Void GBJGIJONEFG(::FPCFGAPAMEF* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::FPCFGAPAMEF*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_GBJGIJONEFG_OFFSET))(this, IOKOLJDCKPN);
	}

	::System::Void NBEICDBDCKD(::DCNGDMKEFIB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_NBEICDBDCKD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GBJGIJONEFG_1(::EDBMNBCCFLD* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::EDBMNBCCFLD*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_GBJGIJONEFG_1_OFFSET))(this, IOKOLJDCKPN);
	}

	static ::HFMDBGMEFDD* JPPEEOLOGGP(::EDBMNBCCFLD* IOKOLJDCKPN)
	{
		return ((::HFMDBGMEFDD*(*)(::EDBMNBCCFLD*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_JPPEEOLOGGP_OFFSET))(IOKOLJDCKPN);
	}

	::DCNGDMKEFIB* FAAFMPDBCAM()
	{
		return ((::DCNGDMKEFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_FAAFMPDBCAM_OFFSET))(this);
	}

	static ::HFMDBGMEFDD* JPPEEOLOGGP_1(::FPCFGAPAMEF* IOKOLJDCKPN)
	{
		return ((::HFMDBGMEFDD*(*)(::FPCFGAPAMEF*))((::PBYTE)hIl2Cpp + HFMDBGMEFDD_JPPEEOLOGGP_1_OFFSET))(IOKOLJDCKPN);
	}
};
