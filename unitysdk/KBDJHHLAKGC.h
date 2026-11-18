#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/MoleMole/HollowEntityConfig_TeamRelationship.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace MoleMole::Config { class HollowCampTypeConfig_CampTypeItem; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBDJHHLAKGC_AJNEMAMECGE_OFFSET UNITYSDK_OFFSET(0x1A494DB0)
#define KBDJHHLAKGC_BNNFMLLCGKL_OFFSET UNITYSDK_OFFSET(0x1A4950E0)
#define KBDJHHLAKGC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A4949B0)
#define KBDJHHLAKGC_HFOACGADHIG_OFFSET UNITYSDK_OFFSET(0x1A4951A0)
#define KBDJHHLAKGC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A494CE0)
#define KBDJHHLAKGC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A494910)
#define KBDJHHLAKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A494880)

inline static constexpr unsigned int KBDJHHLAKGC_TypeDefinitionIndex = 85214;

class KBDJHHLAKGC
{
public:
	::MoleMole::Config::HollowCampTypeConfig_CampTypeItem* PKGLDPMIKBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJHHLAKGC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::HollowCampTypeConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::HollowCampTypeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::HollowEntityConfig_TeamRelationship AJNEMAMECGE(::MoleMole::HollowEntityConfig_CampType PFFPGLPMIEM, ::MoleMole::HollowEntityConfig_CampType LKCPOACOIPA)
	{
		return ((::MoleMole::HollowEntityConfig_TeamRelationship(*)(::PVOID, ::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_CampType))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_AJNEMAMECGE_OFFSET))(this, PFFPGLPMIEM, LKCPOACOIPA);
	}

	::MoleMole::Config::HollowCampTypeConfig* BNNFMLLCGKL()
	{
		return ((::MoleMole::Config::HollowCampTypeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_BNNFMLLCGKL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* HFOACGADHIG(::MoleMole::HollowEntityConfig_CampType OLNAFBAENGH, ::MoleMole::HollowEntityConfig_TeamRelationship EMNDHDGCAEI)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_TeamRelationship))((::PBYTE)hIl2Cpp + KBDJHHLAKGC_HFOACGADHIG_OFFSET))(this, OLNAFBAENGH, EMNDHDGCAEI);
	}
};
