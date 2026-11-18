#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

class DBOCJAMHMHD;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define IGLOKEAKOFK_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x15C0DFD0)
#define IGLOKEAKOFK_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x15C0DAF0)
#define IGLOKEAKOFK_HCJFIGIGIOG_OFFSET UNITYSDK_OFFSET(0x15C0E110)
#define IGLOKEAKOFK_ICDOFGCELAI_OFFSET UNITYSDK_OFFSET(0x15C0CB80)
#define IGLOKEAKOFK_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0x15C0E070)
#define IGLOKEAKOFK_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x15C0CE20)
#define IGLOKEAKOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0CB70)

inline static constexpr unsigned int IGLOKEAKOFK_TypeDefinitionIndex = 70805;

class IGLOKEAKOFK : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + IGLOKEAKOFK__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void ICDOFGCELAI(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Action* POCANNAFFOA, ::System::Action* KCNFHMFDOHI, ::DBOCJAMHMHD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_ICDOFGCELAI_OFFSET))(this, IPNBLPHMHDM, POCANNAFFOA, KCNFHMFDOHI, AAOCANGHBDG);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HCJFIGIGIOG(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Action* KMGKAIDEIBA, ::System::Action* FDHMCIFPNCK, ::DBOCJAMHMHD* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_HCJFIGIGIOG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
