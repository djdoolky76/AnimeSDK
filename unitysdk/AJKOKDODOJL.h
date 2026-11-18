#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define AJKOKDODOJL_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x17CD8240)
#define AJKOKDODOJL_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x17CD8080)
#define AJKOKDODOJL_HPANCJKEGFF_OFFSET UNITYSDK_OFFSET(0x17CD7DF0)
#define AJKOKDODOJL_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x17CD82E0)
#define AJKOKDODOJL_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x17CD7250)
#define AJKOKDODOJL_MDLFGLCGIDP_OFFSET UNITYSDK_OFFSET(0x17CD8010)
#define AJKOKDODOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD7240)

inline static constexpr unsigned int AJKOKDODOJL_TypeDefinitionIndex = 53644;

class AJKOKDODOJL : public ::JBLJJCPIAAO
{
public:
	// static const ::System::String* CNKBNALLBLP; // 0x0

	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + AJKOKDODOJL__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJKOKDODOJL_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AJKOKDODOJL_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void MDLFGLCGIDP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJKOKDODOJL_MDLFGLCGIDP_OFFSET))();
	}

	static ::System::Boolean HPANCJKEGFF(::System::Int32 GJFIAJGHAHF, ::System::Int32 DEGAGCBKPCJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AJKOKDODOJL_HPANCJKEGFF_OFFSET))(GJFIAJGHAHF, DEGAGCBKPCJ);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJKOKDODOJL_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + AJKOKDODOJL_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}
};
