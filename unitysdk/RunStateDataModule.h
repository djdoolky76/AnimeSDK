#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace MoleMole::Config { class ConfigEntityRunStates; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RUNSTATEDATAMODULE_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1C67E800)
#define RUNSTATEDATAMODULE_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1C67E960)
#define RUNSTATEDATAMODULE_GETRUNSTATEKEY_OFFSET UNITYSDK_OFFSET(0x1C67EB00)
#define RUNSTATEDATAMODULE_GETRUNSTATE_OFFSET UNITYSDK_OFFSET(0x1C67EA50)
#define RUNSTATEDATAMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1C67E760)
#define RUNSTATEDATAMODULE__CREATEINDEXOP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C67ED20)
#define RUNSTATEDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67E6C0)
#define RUNSTATEDATAMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1C67F070)

inline static constexpr unsigned int RunStateDataModule_TypeDefinitionIndex = 66023;

class RunStateDataModule
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>* _keyDict; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath path)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE_CREATEITEMLOADOP_OFFSET))(this, path);
	}

	::MoleMole::Config::ConfigEntityRunState* GetRunState(::System::String* key)
	{
		return ((::MoleMole::Config::ConfigEntityRunState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE_GETRUNSTATE_OFFSET))(this, key);
	}

	::System::String* GetRunStateKey(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimMoveState runState)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimMoveState))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE_GETRUNSTATEKEY_OFFSET))(this, entity, runState);
	}

	::System::Void _CreateIndexOp_b__3_0(::Foundation::AssetPath assetPath, ::MoleMole::Config::ConfigEntityRunStates* config)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigEntityRunStates*))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE__CREATEINDEXOP_B__3_0_OFFSET))(this, assetPath, config);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
	}
};
