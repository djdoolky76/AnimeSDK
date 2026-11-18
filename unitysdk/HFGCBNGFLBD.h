#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

class DBOCJAMHMHD;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define HFGCBNGFLBD_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x140A3920)
#define HFGCBNGFLBD_HCJFIGIGIOG_OFFSET UNITYSDK_OFFSET(0x140A3850)
#define HFGCBNGFLBD_ICDOFGCELAI_OFFSET UNITYSDK_OFFSET(0x140A3240)
#define HFGCBNGFLBD_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x140A3620)
#define HFGCBNGFLBD__CTOR_OFFSET UNITYSDK_OFFSET(0x140A3230)

inline static constexpr unsigned int HFGCBNGFLBD_TypeDefinitionIndex = 40780;

class HFGCBNGFLBD : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HFGCBNGFLBD__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void ICDOFGCELAI(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Action* POCANNAFFOA, ::System::Action* KCNFHMFDOHI, ::DBOCJAMHMHD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_ICDOFGCELAI_OFFSET))(this, IPNBLPHMHDM, POCANNAFFOA, KCNFHMFDOHI, AAOCANGHBDG);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void HCJFIGIGIOG(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Action* KMGKAIDEIBA, ::System::Action* FDHMCIFPNCK, ::DBOCJAMHMHD* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_HCJFIGIGIOG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
