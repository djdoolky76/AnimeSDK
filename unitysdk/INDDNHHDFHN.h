#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class BBFJCECOAGP;
class FGNEAMDEOLM;
class HPCFFMJGBJL;
namespace System { class String; }

#define INDDNHHDFHN_AAECPAJBGLM_OFFSET UNITYSDK_OFFSET(0x153C4A00)
#define INDDNHHDFHN_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x153C46D0)
#define INDDNHHDFHN_FPBKMHGCGJK_OFFSET UNITYSDK_OFFSET(0x153C4760)
#define INDDNHHDFHN_GLFNFKAONKN_OFFSET UNITYSDK_OFFSET(0x153C46C0)
#define INDDNHHDFHN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x153C4AA0)
#define INDDNHHDFHN_KDPJNLOINEA_OFFSET UNITYSDK_OFFSET(0x153C4A10)
#define INDDNHHDFHN_KEPKIIIAGPC_OFFSET UNITYSDK_OFFSET(0x153C43C0)
#define INDDNHHDFHN_MFIHJCOFKPP_OFFSET UNITYSDK_OFFSET(0x153C43B0)
#define INDDNHHDFHN_NNPNFBCMIIB_OFFSET UNITYSDK_OFFSET(0x153C45A0)
#define INDDNHHDFHN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x153C4330)
#define INDDNHHDFHN__CTOR_OFFSET UNITYSDK_OFFSET(0x153C4210)

inline static constexpr unsigned int INDDNHHDFHN_TypeDefinitionIndex = 67376;

class INDDNHHDFHN
{
public:
	::HPCFFMJGBJL* _AGCCPGHLDBD_k__BackingField; // 0x28
	::BBFJCECOAGP* _OIGAKIPFNKH_k__BackingField; // 0x30
	::MoleMole::LanguageVoiceType _DPPIDFOJCPI_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDDNHHDFHN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INDDNHHDFHN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::HPCFFMJGBJL* MFIHJCOFKPP()
	{
		return ((::HPCFFMJGBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + INDDNHHDFHN_MFIHJCOFKPP_OFFSET))(this);
	}

	static ::FGNEAMDEOLM* KEPKIIIAGPC(::System::String* OIIHCACKLHD)
	{
		return ((::FGNEAMDEOLM*(*)(::System::String*))((::PBYTE)hIl2Cpp + INDDNHHDFHN_KEPKIIIAGPC_OFFSET))(OIIHCACKLHD);
	}

	::FGNEAMDEOLM* NNPNFBCMIIB(::System::String* KPIAFDELPJL)
	{
		return ((::FGNEAMDEOLM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INDDNHHDFHN_NNPNFBCMIIB_OFFSET))(this, KPIAFDELPJL);
	}

	::MoleMole::LanguageVoiceType GLFNFKAONKN()
	{
		return ((::MoleMole::LanguageVoiceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INDDNHHDFHN_GLFNFKAONKN_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::System::String* LJIMDJELPEO, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + INDDNHHDFHN_FCFOEJGPDNO_OFFSET))(this, LJIMDJELPEO, FNIOPKPHDEH);
	}

	::BBFJCECOAGP* AAECPAJBGLM()
	{
		return ((::BBFJCECOAGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + INDDNHHDFHN_AAECPAJBGLM_OFFSET))(this);
	}

	::System::Single KDPJNLOINEA(::System::String* KPIAFDELPJL, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + INDDNHHDFHN_KDPJNLOINEA_OFFSET))(this, KPIAFDELPJL, FNIOPKPHDEH);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INDDNHHDFHN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::FGNEAMDEOLM* FPBKMHGCGJK(::System::String* LJIMDJELPEO)
	{
		return ((::FGNEAMDEOLM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INDDNHHDFHN_FPBKMHGCGJK_OFFSET))(this, LJIMDJELPEO);
	}
};
