#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class FootPrintConfig; }
namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOKGMKIGHON_BKFCGCBAIMO_OFFSET UNITYSDK_OFFSET(0x13A7B820)
#define OOKGMKIGHON_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13A7B510)
#define OOKGMKIGHON_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13A7B750)
#define OOKGMKIGHON_KDMGJKHAENF_OFFSET UNITYSDK_OFFSET(0x13A7C2A0)
#define OOKGMKIGHON_KPCKPLAMGCM_OFFSET UNITYSDK_OFFSET(0x13A7BAD0)
#define OOKGMKIGHON_MOBCJOFFMFF_OFFSET UNITYSDK_OFFSET(0x13A7B930)
#define OOKGMKIGHON_POGEHAPKHAJ_OFFSET UNITYSDK_OFFSET(0x13A7BBE0)
#define OOKGMKIGHON_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13A7B470)
#define OOKGMKIGHON__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7B3E0)

inline static constexpr unsigned int OOKGMKIGHON_TypeDefinitionIndex = 70007;

class OOKGMKIGHON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OOKGMKIGHON_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::FootPrintConfigs*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::FootPrintConfigs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OOKGMKIGHON_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* BKFCGCBAIMO()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON_BKFCGCBAIMO_OFFSET))(this);
	}

	::MoleMole::Config::FootPrintConfig* MOBCJOFFMFF(::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOKGMKIGHON_MOBCJOFFMFF_OFFSET))(this, OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* KPCKPLAMGCM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKGMKIGHON_KPCKPLAMGCM_OFFSET))(this);
	}

	::MoleMole::Config::FootPrintConfig* KDMGJKHAENF(::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOKGMKIGHON_KDMGJKHAENF_OFFSET))(this, OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}

	static ::MoleMole::Config::FootPrintConfig* POGEHAPKHAJ(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* INBACCBOBDN, ::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOKGMKIGHON_POGEHAPKHAJ_OFFSET))(INBACCBOBDN, OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}
};
