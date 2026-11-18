#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

class DBOCJAMHMHD;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define IFPFKBKAMEL_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0xEA1F510)
#define IFPFKBKAMEL_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0xEA1EF00)
#define IFPFKBKAMEL_HCJFIGIGIOG_OFFSET UNITYSDK_OFFSET(0xEA1F440)
#define IFPFKBKAMEL_ICDOFGCELAI_OFFSET UNITYSDK_OFFSET(0xEA1F010)
#define IFPFKBKAMEL_IDEPJKGBFOP_OFFSET UNITYSDK_OFFSET(0xEA1F3A0)
#define IFPFKBKAMEL_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0xEA1EC20)
#define IFPFKBKAMEL__CTOR_OFFSET UNITYSDK_OFFSET(0xEA1EC10)

inline static constexpr unsigned int IFPFKBKAMEL_TypeDefinitionIndex = 91207;

class IFPFKBKAMEL : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + IFPFKBKAMEL__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICDOFGCELAI(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Action* POCANNAFFOA, ::System::Action* KCNFHMFDOHI, ::DBOCJAMHMHD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_ICDOFGCELAI_OFFSET))(this, IPNBLPHMHDM, POCANNAFFOA, KCNFHMFDOHI, AAOCANGHBDG);
	}

	::System::Boolean IDEPJKGBFOP(::System::UInt32& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_IDEPJKGBFOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HCJFIGIGIOG(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Action* KMGKAIDEIBA, ::System::Action* FDHMCIFPNCK, ::DBOCJAMHMHD* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_HCJFIGIGIOG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
