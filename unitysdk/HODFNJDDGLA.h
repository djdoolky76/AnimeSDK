#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

class DBOCJAMHMHD;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define HODFNJDDGLA_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x140C7190)
#define HODFNJDDGLA_HCJFIGIGIOG_OFFSET UNITYSDK_OFFSET(0x140C7230)
#define HODFNJDDGLA_ICDOFGCELAI_OFFSET UNITYSDK_OFFSET(0x140C70C0)
#define HODFNJDDGLA_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x140C6F10)
#define HODFNJDDGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x140C6F00)

inline static constexpr unsigned int HODFNJDDGLA_TypeDefinitionIndex = 45352;

class HODFNJDDGLA : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HODFNJDDGLA__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HODFNJDDGLA_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void ICDOFGCELAI(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Action* POCANNAFFOA, ::System::Action* KCNFHMFDOHI, ::DBOCJAMHMHD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + HODFNJDDGLA_ICDOFGCELAI_OFFSET))(this, IPNBLPHMHDM, POCANNAFFOA, KCNFHMFDOHI, AAOCANGHBDG);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HODFNJDDGLA_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HCJFIGIGIOG(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Action* KMGKAIDEIBA, ::System::Action* FDHMCIFPNCK, ::DBOCJAMHMHD* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + HODFNJDDGLA_HCJFIGIGIOG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
