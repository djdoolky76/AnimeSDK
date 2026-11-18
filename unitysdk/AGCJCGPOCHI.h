#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOBGMFDLJPC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AOIAGDMKKGJ.h"
#include "unitysdk/System/ValueTuple_3.h"

class CKMBDPOPDFC;
namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define AGCJCGPOCHI_AJIEEPKLMIF_OFFSET UNITYSDK_OFFSET(0x16FE4AE0)
#define AGCJCGPOCHI_CGNPIGHBMDN_OFFSET UNITYSDK_OFFSET(0x16FE4AC0)
#define AGCJCGPOCHI_EALJGJHIOKH_OFFSET UNITYSDK_OFFSET(0x16FE4E10)
#define AGCJCGPOCHI_EHAPIOLODLM_OFFSET UNITYSDK_OFFSET(0x16FE4FA0)
#define AGCJCGPOCHI_FBOLIPGODKE_OFFSET UNITYSDK_OFFSET(0x16FE4E00)
#define AGCJCGPOCHI_GPFPJFCGHOA_OFFSET UNITYSDK_OFFSET(0x16FE4AF0)
#define AGCJCGPOCHI_IIHFCPPBCIJ_OFFSET UNITYSDK_OFFSET(0x16FE54B0)
#define AGCJCGPOCHI_NKLOHFLOLGJ_OFFSET UNITYSDK_OFFSET(0x16FE54C0)
#define AGCJCGPOCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE4AA0)

inline static constexpr unsigned int AGCJCGPOCHI_TypeDefinitionIndex = 42004;

class AGCJCGPOCHI : public ::System::Object
{
public:
	::LOBGMFDLJPC NDEBPJFBHHK; // 0x10
	::MoleMole::UIPerformPageController* HDNKMBCIOHD; // 0x28
	::System::Action* HLOIGPMHDGK; // 0x30

	::System::Void _ctor(::LOBGMFDLJPC ABEALKBGPJL, ::System::Action* OCIKNBPALGG)
	{
		return ((::System::Void(*)(::PVOID, ::LOBGMFDLJPC, ::System::Action*))((::PBYTE)hIl2Cpp + AGCJCGPOCHI__CTOR_OFFSET))(this, ABEALKBGPJL, OCIKNBPALGG);
	}

	::AOIAGDMKKGJ CGNPIGHBMDN()
	{
		return ((::AOIAGDMKKGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_CGNPIGHBMDN_OFFSET))(this);
	}

	::System::Void AJIEEPKLMIF(::AGCJCGPOCHI* BOBIKBDKFCK)
	{
		return ((::System::Void(*)(::PVOID, ::AGCJCGPOCHI*))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_AJIEEPKLMIF_OFFSET))(this, BOBIKBDKFCK);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*> GPFPJFCGHOA(::AGCJCGPOCHI* PKNCAJLHOIK, ::CKMBDPOPDFC* BMPDEJIGCDM)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*>(*)(::PVOID, ::AGCJCGPOCHI*, ::CKMBDPOPDFC*))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_GPFPJFCGHOA_OFFSET))(this, PKNCAJLHOIK, BMPDEJIGCDM);
	}

	::System::Void FBOLIPGODKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_FBOLIPGODKE_OFFSET))(this);
	}

	::System::Void EALJGJHIOKH(::AGCJCGPOCHI* GJIAIJFJACB, ::CKMBDPOPDFC* HLGCGMCGCBI)
	{
		return ((::System::Void(*)(::PVOID, ::AGCJCGPOCHI*, ::CKMBDPOPDFC*))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_EALJGJHIOKH_OFFSET))(this, GJIAIJFJACB, HLGCGMCGCBI);
	}

	static ::System::Boolean EHAPIOLODLM(::MoleMole::UIPerformPageController*& LCEDDIHNGKM)
	{
		return ((::System::Boolean(*)(::MoleMole::UIPerformPageController*&))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_EHAPIOLODLM_OFFSET))(LCEDDIHNGKM);
	}

	::System::Boolean IIHFCPPBCIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_IIHFCPPBCIJ_OFFSET))(this);
	}

	::System::Boolean NKLOHFLOLGJ(::System::Double FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + AGCJCGPOCHI_NKLOHFLOLGJ_OFFSET))(this, FNIOPKPHDEH, PMNLNNGEIFM);
	}
};
