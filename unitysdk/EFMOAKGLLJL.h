#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFMOAKGLLJL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17107110)
#define EFMOAKGLLJL_FNHDJIBCAPG_OFFSET UNITYSDK_OFFSET(0x17107680)
#define EFMOAKGLLJL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x171077B0)
#define EFMOAKGLLJL_NBKDAOGFOFG_OFFSET UNITYSDK_OFFSET(0x17107580)
#define EFMOAKGLLJL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17107070)
#define EFMOAKGLLJL__CTOR_OFFSET UNITYSDK_OFFSET(0x17106FE0)

inline static constexpr unsigned int EFMOAKGLLJL_TypeDefinitionIndex = 60052;

class EFMOAKGLLJL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EFMOAKGLLJL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardInteract*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardInteract*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardInteract* NBKDAOGFOFG()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardInteract*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL_NBKDAOGFOFG_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>* FNHDJIBCAPG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOAKGLLJL_FNHDJIBCAPG_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EFMOAKGLLJL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
