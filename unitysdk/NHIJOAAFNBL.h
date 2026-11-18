#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }

#define NHIJOAAFNBL_BKMMFNBAKIG_OFFSET UNITYSDK_OFFSET(0x11590450)
#define NHIJOAAFNBL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1158FF10)
#define NHIJOAAFNBL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11590380)
#define NHIJOAAFNBL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1158FE70)
#define NHIJOAAFNBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1158FDE0)

inline static constexpr unsigned int NHIJOAAFNBL_TypeDefinitionIndex = 79789;

class NHIJOAAFNBL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJOAAFNBL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHIJOAAFNBL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigHollowChessboardEntityBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJOAAFNBL_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NHIJOAAFNBL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigHollowChessboardEntityBehavior* BKMMFNBAKIG()
	{
		return ((::MoleMole::ConfigHollowChessboardEntityBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIJOAAFNBL_BKMMFNBAKIG_OFFSET))(this);
	}
};
