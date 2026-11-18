#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLJJCPIAAO.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define BJLFLAMGODF_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x10E092E0)
#define BJLFLAMGODF_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x10E09250)
#define BJLFLAMGODF_HELPGLMFLNG_OFFSET UNITYSDK_OFFSET(0x10E08F20)
#define BJLFLAMGODF_JDBEJIHLONO_OFFSET UNITYSDK_OFFSET(0x10E091B0)
#define BJLFLAMGODF_JLIOFGKAKEM_OFFSET UNITYSDK_OFFSET(0x10E08A60)
#define BJLFLAMGODF_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x10E08FC0)
#define BJLFLAMGODF_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x10E089F0)
#define BJLFLAMGODF__CTOR_OFFSET UNITYSDK_OFFSET(0x10E089E0)

inline static constexpr unsigned int BJLFLAMGODF_TypeDefinitionIndex = 89288;

class BJLFLAMGODF : public ::JBLJJCPIAAO
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + BJLFLAMGODF__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFLAMGODF_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void HELPGLMFLNG(::System::Int32 PFGBLHOCLLG, ::System::Int32 PEPMPIKIBAD, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BJLFLAMGODF_HELPGLMFLNG_OFFSET))(this, PFGBLHOCLLG, PEPMPIKIBAD, FLMNJOFKIKI);
	}

	::System::Void MDEDKHPODOA(::MoleMole::SystemSettingContextBase* IPNBLPHMHDM, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJLFLAMGODF_MDEDKHPODOA_OFFSET))(this, IPNBLPHMHDM, FLMNJOFKIKI);
	}

	::System::Void JLIOFGKAKEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFLAMGODF_JLIOFGKAKEM_OFFSET))(this);
	}

	::System::Void JDBEJIHLONO(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA, ::System::Boolean FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BJLFLAMGODF_JDBEJIHLONO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFLAMGODF_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD(::MoleMole::SystemSettingContextBase* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJLFLAMGODF_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
