#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class MovingWallConfig; }
namespace MoleMole { class WallConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDMOMJHKCLJ_BKNBGKKMNAH_OFFSET UNITYSDK_OFFSET(0x11CA1590)
#define GDMOMJHKCLJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11CA1340)
#define GDMOMJHKCLJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11CA16E0)
#define GDMOMJHKCLJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11CA12A0)
#define GDMOMJHKCLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA1210)

inline static constexpr unsigned int GDMOMJHKCLJ_TypeDefinitionIndex = 62524;

class GDMOMJHKCLJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MovingWallConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MovingWallConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ_CREATEOP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::WallConfig*>* BKNBGKKMNAH(::System::Int32 HIAIKHDFCLN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::WallConfig*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ_BKNBGKKMNAH_OFFSET))(this, HIAIKHDFCLN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GDMOMJHKCLJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
