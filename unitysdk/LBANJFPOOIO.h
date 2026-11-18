#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

class DBOCJAMHMHD;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define LBANJFPOOIO_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1517C5C0)
#define LBANJFPOOIO_HCJFIGIGIOG_OFFSET UNITYSDK_OFFSET(0x1517C4F0)
#define LBANJFPOOIO_ICDOFGCELAI_OFFSET UNITYSDK_OFFSET(0x1517BF90)
#define LBANJFPOOIO_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1517C300)
#define LBANJFPOOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1517BF80)

inline static constexpr unsigned int LBANJFPOOIO_TypeDefinitionIndex = 77422;

class LBANJFPOOIO : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + LBANJFPOOIO__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void ICDOFGCELAI(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Action* POCANNAFFOA, ::System::Action* KCNFHMFDOHI, ::DBOCJAMHMHD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + LBANJFPOOIO_ICDOFGCELAI_OFFSET))(this, IPNBLPHMHDM, POCANNAFFOA, KCNFHMFDOHI, AAOCANGHBDG);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + LBANJFPOOIO_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void HCJFIGIGIOG(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Action* KMGKAIDEIBA, ::System::Action* FDHMCIFPNCK, ::DBOCJAMHMHD* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::DBOCJAMHMHD*))((::PBYTE)hIl2Cpp + LBANJFPOOIO_HCJFIGIGIOG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + LBANJFPOOIO_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
