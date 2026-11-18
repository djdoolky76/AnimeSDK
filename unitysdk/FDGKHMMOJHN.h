#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/UnityEngine/Resolution.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define FDGKHMMOJHN_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x140EA9E0)
#define FDGKHMMOJHN_DCDLIIHBHCD_OFFSET UNITYSDK_OFFSET(0x140EA850)
#define FDGKHMMOJHN_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x140EA4E0)
#define FDGKHMMOJHN_EJJPJIBPNPC_OFFSET UNITYSDK_OFFSET(0x140EA950)
#define FDGKHMMOJHN_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x140E9AC0)
#define FDGKHMMOJHN_HONAOOEJOBI_OFFSET UNITYSDK_OFFSET(0x140E85E0)
#define FDGKHMMOJHN_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x140EA8B0)
#define FDGKHMMOJHN_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x140EAA80)
#define FDGKHMMOJHN_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x140E9D00)
#define FDGKHMMOJHN_MEJANHODBCK_OFFSET UNITYSDK_OFFSET(0x140EA310)
#define FDGKHMMOJHN_ONLOCALIZATIONCHANGE_OFFSET UNITYSDK_OFFSET(0x140EA800)
#define FDGKHMMOJHN_PKGAAKKOIMF_OFFSET UNITYSDK_OFFSET(0x140E8790)
#define FDGKHMMOJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x140E9CF0)

inline static constexpr unsigned int FDGKHMMOJHN_TypeDefinitionIndex = 41779;

class FDGKHMMOJHN : public ::JBLJJCPIAAO
{
public:
	::System::Boolean FIEOHJOJKIH; // 0x28

	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + FDGKHMMOJHN__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void HONAOOEJOBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_HONAOOEJOBI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OnLocalizationChange(::MoleMole::LanguageType CBMOOALPNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_ONLOCALIZATIONCHANGE_OFFSET))(this, CBMOOALPNHB);
	}

	::System::Void PKGAAKKOIMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_PKGAAKKOIMF_OFFSET))(this);
	}

	::UnityEngine::Resolution MEJANHODBCK()
	{
		return ((::UnityEngine::Resolution(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_MEJANHODBCK_OFFSET))(this);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EJJPJIBPNPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_EJJPJIBPNPC_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Int32 DCDLIIHBHCD(::System::Single JCKJGIKBHDF)
	{
		return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + FDGKHMMOJHN_DCDLIIHBHCD_OFFSET))(JCKJGIKBHDF);
	}
};
