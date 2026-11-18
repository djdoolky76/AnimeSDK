#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define BNIKPIGKBNE_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16A01E90)
#define BNIKPIGKBNE_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x16A01C20)
#define BNIKPIGKBNE_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x16A01DF0)
#define BNIKPIGKBNE_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16A016D0)
#define BNIKPIGKBNE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A016C0)

inline static constexpr unsigned int BNIKPIGKBNE_TypeDefinitionIndex = 41974;

class BNIKPIGKBNE : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + BNIKPIGKBNE__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIKPIGKBNE_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + BNIKPIGKBNE_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + BNIKPIGKBNE_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIKPIGKBNE_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
