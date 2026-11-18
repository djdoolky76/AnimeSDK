#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class CampTypeConfig; }
namespace MoleMole::Config { class CampTypeConfig_CampTypeItem; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJEKMCBGNIN_AJNEMAMECGE_OFFSET UNITYSDK_OFFSET(0x13DA5510)
#define HJEKMCBGNIN_BAPCLBPOJCI_OFFSET UNITYSDK_OFFSET(0x13DA5750)
#define HJEKMCBGNIN_BBIPDFEMLGK_OFFSET UNITYSDK_OFFSET(0x13DA52A0)
#define HJEKMCBGNIN_BMEIOJFMOMN_OFFSET UNITYSDK_OFFSET(0x13DA46F0)
#define HJEKMCBGNIN_BNONHKAPJKN_OFFSET UNITYSDK_OFFSET(0x13DA4A50)
#define HJEKMCBGNIN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13DA4390)
#define HJEKMCBGNIN_DJBJKHBOCKH_OFFSET UNITYSDK_OFFSET(0x13DA5060)
#define HJEKMCBGNIN_FBJONHAGIAF_OFFSET UNITYSDK_OFFSET(0x13DA44B0)
#define HJEKMCBGNIN_HFOACGADHIG_OFFSET UNITYSDK_OFFSET(0x13DA59C0)
#define HJEKMCBGNIN_ILAFALNHODA_OFFSET UNITYSDK_OFFSET(0x13DA4740)
#define HJEKMCBGNIN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13DA4980)
#define HJEKMCBGNIN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13DA42F0)
#define HJEKMCBGNIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA41E0)

inline static constexpr unsigned int HJEKMCBGNIN_TypeDefinitionIndex = 74286;

class HJEKMCBGNIN
{
public:
	// static const ::System::UInt32 IMHJCFOAGLA = 0x5; // 0x0
	::MoleMole::Config::CampTypeConfig_CampTypeItem* PKGLDPMIKBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKMCBGNIN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_CREATEOP_OFFSET))(this);
	}

	::System::Single FBJONHAGIAF(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_FBJONHAGIAF_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA);
	}

	::System::Single ILAFALNHODA(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_ILAFALNHODA_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::Il2CppArray<::Il2CppArray<::System::Object*>*>* BNONHKAPJKN(::MoleMole::Config::CampTypeConfig* DFMKILICPFB)
	{
		return ((::Il2CppArray<::Il2CppArray<::System::Object*>*>*(*)(::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_BNONHKAPJKN_OFFSET))(DFMKILICPFB);
	}

	::System::Single DJBJKHBOCKH(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_DJBJKHBOCKH_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA);
	}

	::System::Single BBIPDFEMLGK(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA, ::System::Single BDEDDEGJFKL)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_BBIPDFEMLGK_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA, BDEDDEGJFKL);
	}

	::MoleMole::Config::TeamRelationship AJNEMAMECGE(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::MoleMole::Config::TeamRelationship(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_AJNEMAMECGE_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA);
	}

	::System::Single BAPCLBPOJCI(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA, ::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_BAPCLBPOJCI_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA, ELHMOANKHFM);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::CampType>* HFOACGADHIG(::MoleMole::Config::CampType OLNAFBAENGH, ::MoleMole::Config::TeamRelationship EMNDHDGCAEI)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::CampType>*(*)(::PVOID, ::MoleMole::Config::CampType, ::MoleMole::Config::TeamRelationship))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_HFOACGADHIG_OFFSET))(this, OLNAFBAENGH, EMNDHDGCAEI);
	}

	::System::Boolean BMEIOJFMOMN(::MoleMole::Config::CampType PFFPGLPMIEM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + HJEKMCBGNIN_BMEIOJFMOMN_OFFSET))(this, PFFPGLPMIEM);
	}
};
