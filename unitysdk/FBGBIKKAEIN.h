#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFHGMKOGNG.h"
#include "unitysdk/JGELKBLKFHE.h"

class FNNGEBGDHMO;
class IHJNDNLJNPN;
class NDFPHHKNGGL;
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define FBGBIKKAEIN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x116A05A0)
#define FBGBIKKAEIN_CNJNGHJCDKA_OFFSET UNITYSDK_OFFSET(0x116A0A40)
#define FBGBIKKAEIN_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x116A0A50)
#define FBGBIKKAEIN_HCFNNFNHICO_OFFSET UNITYSDK_OFFSET(0x116A0630)
#define FBGBIKKAEIN_IFNFPGGKKMC_OFFSET UNITYSDK_OFFSET(0x116A0DE0)
#define FBGBIKKAEIN_JAOOLMEPJCB_OFFSET UNITYSDK_OFFSET(0x116A0260)
#define FBGBIKKAEIN_KFIKCODKOOD_OFFSET UNITYSDK_OFFSET(0x116A0AE0)
#define FBGBIKKAEIN_KIMFNFCIDAE_OFFSET UNITYSDK_OFFSET(0x116A0170)
#define FBGBIKKAEIN_LJHHLNMADKO_OFFSET UNITYSDK_OFFSET(0x116A0D80)
#define FBGBIKKAEIN_OFNEKMOBBJP_OFFSET UNITYSDK_OFFSET(0x116A0D70)
#define FBGBIKKAEIN_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x116A00A0)
#define FBGBIKKAEIN_ONSTART_OFFSET UNITYSDK_OFFSET(0x116A0040)
#define FBGBIKKAEIN_PAHHKDMIECC_OFFSET UNITYSDK_OFFSET(0x116A01E0)
#define FBGBIKKAEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x116A0100)

inline static constexpr unsigned int FBGBIKKAEIN_TypeDefinitionIndex = 69408;

class FBGBIKKAEIN : public ::JGELKBLKFHE
{
public:
	// static const ::System::Single KACBLCHOPLI; // 0x0
	::NDFPHHKNGGL* EKCLDALGPBM; // 0x18
	::UnityEngine::RectTransform* _LDJLIFFIDGB_k__BackingField; // 0x20
	::FNNGEBGDHMO* NLLFJNLIBKH; // 0x28
	::IHJNDNLJNPN* DDKGCOHLOBN; // 0x30
	::NDFPHHKNGGL* JDGMKPADBAA; // 0x38
	::System::Single FAPNOGDPONK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Boolean KIMFNFCIDAE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_KIMFNFCIDAE_OFFSET))(this);
	}

	::System::Void PAHHKDMIECC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_PAHHKDMIECC_OFFSET))(this);
	}

	::System::Boolean JAOOLMEPJCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_JAOOLMEPJCB_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void HCFNNFNHICO(::CAFHGMKOGNG& DMJBFBDLKIN, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::CAFHGMKOGNG&, ::System::Action*))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_HCFNNFNHICO_OFFSET))(this, DMJBFBDLKIN, EJGDHCIBCJH);
	}

	::UnityEngine::RectTransform* CNJNGHJCDKA()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_CNJNGHJCDKA_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void KFIKCODKOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_KFIKCODKOOD_OFFSET))(this);
	}

	::System::Void OFNEKMOBBJP(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_OFNEKMOBBJP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LJHHLNMADKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_LJHHLNMADKO_OFFSET))(this);
	}

	::System::Void IFNFPGGKKMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGBIKKAEIN_IFNFPGGKKMC_OFFSET))(this);
	}
};
