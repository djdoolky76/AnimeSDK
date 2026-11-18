#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDOKLFPHOFJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AHFJDPDDGFC_COBFKPLOBDK_OFFSET UNITYSDK_OFFSET(0x12656060)
#define AHFJDPDDGFC_FCCINGJHEJK_OFFSET UNITYSDK_OFFSET(0x12656070)
#define AHFJDPDDGFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12655DC0)
#define AHFJDPDDGFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12656270)
#define AHFJDPDDGFC_JODBIJKJMGC_OFFSET UNITYSDK_OFFSET(0x12656050)
#define AHFJDPDDGFC_KLKFLOFEHHN_OFFSET UNITYSDK_OFFSET(0x12656080)
#define AHFJDPDDGFC_NAOBEMDEHNM_OFFSET UNITYSDK_OFFSET(0x12656040)
#define AHFJDPDDGFC_PMDEJKEJJCH_OFFSET UNITYSDK_OFFSET(0x12656030)
#define AHFJDPDDGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x12656090)

inline static constexpr unsigned int AHFJDPDDGFC_TypeDefinitionIndex = 90824;

class AHFJDPDDGFC : public ::GDOKLFPHOFJ
{
public:
	::KCMIFNGABDC_1<::System::Single>* EMPCCKMHONN; // 0x28
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x30
	::KCMIFNGABDC_1<::System::Single>* LPHLPFCPMHH; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICFDMNGFAMH; // 0x40
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ADABBEEDEHP; // 0x48
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::UnityEngine::Vector3>* PMDEJKEJJCH()
	{
		return ((::KCMIFNGABDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_PMDEJKEJJCH_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NAOBEMDEHNM()
	{
		return ((::KCMIFNGABDC_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_NAOBEMDEHNM_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Int32>* JODBIJKJMGC()
	{
		return ((::KCMIFNGABDC_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_JODBIJKJMGC_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Single>* COBFKPLOBDK()
	{
		return ((::KCMIFNGABDC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_COBFKPLOBDK_OFFSET))(this);
	}

	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FCCINGJHEJK()
	{
		return ((::AAMKEDEDHPD_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_FCCINGJHEJK_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Single>* KLKFLOFEHHN()
	{
		return ((::KCMIFNGABDC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_KLKFLOFEHHN_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJDPDDGFC_GDEOPIBNOIN_OFFSET))(this);
	}
};
