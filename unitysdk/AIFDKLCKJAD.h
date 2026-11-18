#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace System { class Object; }

#define AIFDKLCKJAD_BJEAIPDJNGP_OFFSET UNITYSDK_OFFSET(0x17CCFC60)
#define AIFDKLCKJAD_CKOHHFPMFMN_OFFSET UNITYSDK_OFFSET(0x17CCFBA0)
#define AIFDKLCKJAD_GJHMJMHPMPN_OFFSET UNITYSDK_OFFSET(0x17CCFB80)
#define AIFDKLCKJAD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x17CCFBB0)
#define AIFDKLCKJAD_JMOEEJENBOP_OFFSET UNITYSDK_OFFSET(0x17CCFC70)
#define AIFDKLCKJAD_LPAICBPHOBP_OFFSET UNITYSDK_OFFSET(0x17CCFC50)
#define AIFDKLCKJAD_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x17CCF0E0)
#define AIFDKLCKJAD_PKNPDIHDEIH_OFFSET UNITYSDK_OFFSET(0x17CCFB90)
#define AIFDKLCKJAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCED70)

inline static constexpr unsigned int AIFDKLCKJAD_TypeDefinitionIndex = 68811;

class AIFDKLCKJAD : public ::HOAAKHNGJJI
{
public:
	::System::Object* _MPNNDIFAJNH_k__BackingField; // 0x20
	::System::Object* _DAHMNBCICCG_k__BackingField; // 0x28
	::System::Object* _BELAHIMCDMJ_k__BackingField; // 0x30

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Object* GDDIMKGELFA, ::System::Object* IMDKKBNNGHM, ::System::Object* NIADPCIFIML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + AIFDKLCKJAD__CTOR_OFFSET))(this, NNMFMPBGFFB, GDDIMKGELFA, IMDKKBNNGHM, NIADPCIFIML);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}

	::System::Object* GJHMJMHPMPN()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_GJHMJMHPMPN_OFFSET))(this);
	}

	::System::Object* PKNPDIHDEIH()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_PKNPDIHDEIH_OFFSET))(this);
	}

	::System::Void CKOHHFPMFMN(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_CKOHHFPMFMN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void LPAICBPHOBP(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_LPAICBPHOBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Object* BJEAIPDJNGP()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_BJEAIPDJNGP_OFFSET))(this);
	}

	::System::Void JMOEEJENBOP(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIFDKLCKJAD_JMOEEJENBOP_OFFSET))(this, EGEGIMGMJHN);
	}
};
