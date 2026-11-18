#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigBuddyMisc; }

#define JEALNIHFONN_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13AC39A0)
#define JEALNIHFONN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13AC3250)
#define JEALNIHFONN_JAJCMNJJFGI_OFFSET UNITYSDK_OFFSET(0x13AC3530)
#define JEALNIHFONN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13AC3460)
#define JEALNIHFONN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13AC31B0)
#define JEALNIHFONN__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC3120)

inline static constexpr unsigned int JEALNIHFONN_TypeDefinitionIndex = 49559;

class JEALNIHFONN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALNIHFONN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEALNIHFONN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBuddyMisc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigBuddyMisc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALNIHFONN_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JEALNIHFONN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean JAJCMNJJFGI(::MoleMole::Config::BuddyBehaviourType BOIAOAHNFMG, ::MoleMole::Config::ConfigBuddyBehaviour& OBJAIEELNHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour&))((::PBYTE)hIl2Cpp + JEALNIHFONN_JAJCMNJJFGI_OFFSET))(this, BOIAOAHNFMG, OBJAIEELNHD);
	}

	::MoleMole::Config::ConfigBuddyMisc* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigBuddyMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALNIHFONN_COPIDBEMEIE_OFFSET))(this);
	}
};
