#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define PJLCEKELEOG_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1D62C7C0)
#define PJLCEKELEOG_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x1D62C560)
#define PJLCEKELEOG_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x1D62C720)
#define PJLCEKELEOG_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1D62BCA0)
#define PJLCEKELEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62BC90)

inline static constexpr unsigned int PJLCEKELEOG_TypeDefinitionIndex = 51976;

class PJLCEKELEOG : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + PJLCEKELEOG__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLCEKELEOG_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + PJLCEKELEOG_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + PJLCEKELEOG_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLCEKELEOG_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
