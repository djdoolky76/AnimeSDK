#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class LHKMKCIPOLD;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define EGCLGNBOMBD_BNGEOAODMIA_OFFSET UNITYSDK_OFFSET(0x135478C0)
#define EGCLGNBOMBD_DJALKGHNHMK_OFFSET UNITYSDK_OFFSET(0x135474F0)
#define EGCLGNBOMBD_DLBPOKPFFEK_OFFSET UNITYSDK_OFFSET(0x135478D0)
#define EGCLGNBOMBD_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x135478A0)
#define EGCLGNBOMBD_EHGBJFMJBGM_OFFSET UNITYSDK_OFFSET(0x135478B0)
#define EGCLGNBOMBD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13547420)
#define EGCLGNBOMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x135474E0)

inline static constexpr unsigned int EGCLGNBOMBD_TypeDefinitionIndex = 46272;

class EGCLGNBOMBD : public ::JJEJBPGJPJN
{
public:
	::IHECGHKOIPM_1<::System::Boolean>* _OFNLHHFIFIO_k__BackingField; // 0x88
	::LJHFMILANJA_1<::LHKMKCIPOLD*>* _BIMNCEELBCF_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCLGNBOMBD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean DJALKGHNHMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_DJALKGHNHMK_OFFSET))(this);
	}

	::IHECGHKOIPM_1<::System::Boolean>* DOCGMAIMGNJ()
	{
		return ((::IHECGHKOIPM_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_DOCGMAIMGNJ_OFFSET))(this);
	}

	::LJHFMILANJA_1<::LHKMKCIPOLD*>* EHGBJFMJBGM()
	{
		return ((::LJHFMILANJA_1<::LHKMKCIPOLD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_EHGBJFMJBGM_OFFSET))(this);
	}

	::System::Void BNGEOAODMIA(::IHECGHKOIPM_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHECGHKOIPM_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_BNGEOAODMIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DLBPOKPFFEK(::LJHFMILANJA_1<::LHKMKCIPOLD*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::LHKMKCIPOLD*>*))((::PBYTE)hIl2Cpp + EGCLGNBOMBD_DLBPOKPFFEK_OFFSET))(this, EGEGIMGMJHN);
	}
};
