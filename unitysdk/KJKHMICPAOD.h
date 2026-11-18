#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole::Config { class ConfigLevelEndCameraEffect; }
namespace MoleMole::Config { class ConfigLevelEndPerform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJKHMICPAOD_AMHDOGFJOMM_OFFSET UNITYSDK_OFFSET(0x1995B880)
#define KJKHMICPAOD_BAHGGNNOGJL_OFFSET UNITYSDK_OFFSET(0x1995BE20)
#define KJKHMICPAOD_BICOLHMCKPN_OFFSET UNITYSDK_OFFSET(0x1995B320)
#define KJKHMICPAOD_CNNBGFHOPIG_OFFSET UNITYSDK_OFFSET(0x1995B0E0)
#define KJKHMICPAOD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1995ADA0)
#define KJKHMICPAOD_DDHIJBLLEAP_1_OFFSET UNITYSDK_OFFSET(0x1995B530)
#define KJKHMICPAOD_DDHIJBLLEAP_OFFSET UNITYSDK_OFFSET(0x1995B4D0)
#define KJKHMICPAOD_DKMFIKFJDFA_OFFSET UNITYSDK_OFFSET(0x1995BD10)
#define KJKHMICPAOD_DPDDDKFHGJN_OFFSET UNITYSDK_OFFSET(0x1995B020)
#define KJKHMICPAOD_EJMCMIFAJDE_OFFSET UNITYSDK_OFFSET(0x1995BA50)
#define KJKHMICPAOD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1995B980)
#define KJKHMICPAOD_KICHJGAOHHI_OFFSET UNITYSDK_OFFSET(0x1995BB70)
#define KJKHMICPAOD_MBHJMMKELJN_OFFSET UNITYSDK_OFFSET(0x1995B200)
#define KJKHMICPAOD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1995AD00)
#define KJKHMICPAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1995AC70)

inline static constexpr unsigned int KJKHMICPAOD_TypeDefinitionIndex = 87427;

class KJKHMICPAOD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KJKHMICPAOD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLevelEndPerform*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLevelEndPerform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelEndPerform* DPDDDKFHGJN()
	{
		return ((::MoleMole::Config::ConfigLevelEndPerform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_DPDDDKFHGJN_OFFSET))(this);
	}

	::System::Single CNNBGFHOPIG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_CNNBGFHOPIG_OFFSET))(this);
	}

	::System::Single MBHJMMKELJN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_MBHJMMKELJN_OFFSET))(this);
	}

	::System::Single BICOLHMCKPN(::MoleMole::Config::LevelEndType AMPNBJCCOLA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KJKHMICPAOD_BICOLHMCKPN_OFFSET))(this, AMPNBJCCOLA);
	}

	::System::String* DDHIJBLLEAP(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KJKHMICPAOD_DDHIJBLLEAP_OFFSET))(this, BECHJGCCJKO);
	}

	::System::Single AMHDOGFJOMM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_AMHDOGFJOMM_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KJKHMICPAOD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean EJMCMIFAJDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_EJMCMIFAJDE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>* KICHJGAOHHI(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KJKHMICPAOD_KICHJGAOHHI_OFFSET))(this, BECHJGCCJKO);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* DKMFIKFJDFA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKHMICPAOD_DKMFIKFJDFA_OFFSET))(this);
	}

	::System::String* DDHIJBLLEAP_1(::MoleMole::Config::LevelEndType BECHJGCCJKO, ::System::UInt32 JKKLOCBIDKJ, ::System::String* PKGDBDFHOMO)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::Config::LevelEndType, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KJKHMICPAOD_DDHIJBLLEAP_1_OFFSET))(this, BECHJGCCJKO, JKKLOCBIDKJ, PKGDBDFHOMO);
	}

	::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>* BAHGGNNOGJL(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KJKHMICPAOD_BAHGGNNOGJL_OFFSET))(this, BECHJGCCJKO);
	}
};
