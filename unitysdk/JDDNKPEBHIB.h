#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define JDDNKPEBHIB_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x198A10E0)
#define JDDNKPEBHIB_HELPGLMFLNG_OFFSET UNITYSDK_OFFSET(0x198A0A70)
#define JDDNKPEBHIB_HOCDDMNCJAL_OFFSET UNITYSDK_OFFSET(0x198A0B10)
#define JDDNKPEBHIB_JDBEJIHLONO_OFFSET UNITYSDK_OFFSET(0x198A1130)
#define JDDNKPEBHIB_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x198A0E80)
#define JDDNKPEBHIB__CTOR_OFFSET UNITYSDK_OFFSET(0x198A0A60)

inline static constexpr unsigned int JDDNKPEBHIB_TypeDefinitionIndex = 43229;

class JDDNKPEBHIB : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + JDDNKPEBHIB__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void HELPGLMFLNG(::System::Int32 PFGBLHOCLLG, ::System::Int32 PEPMPIKIBAD, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDDNKPEBHIB_HELPGLMFLNG_OFFSET))(this, PFGBLHOCLLG, PEPMPIKIBAD, FLMNJOFKIKI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDDNKPEBHIB_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDDNKPEBHIB_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HOCDDMNCJAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDNKPEBHIB_HOCDDMNCJAL_OFFSET))(this);
	}

	::System::Void JDBEJIHLONO(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA, ::System::Boolean FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDDNKPEBHIB_JDBEJIHLONO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
