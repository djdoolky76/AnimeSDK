#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigRhythmMoveBeatMap; }
namespace MoleMole { class ConfigRhythmMoveBeatMap_BeatMap; }
namespace System { class String; }

#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12B95870)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE_GETBEATMAP_OFFSET UNITYSDK_OFFSET(0x12B95AB0)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12B957D0)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B95740)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12B95C80)

inline static constexpr unsigned int ConfigRhythmMoveBeatMapDataModule_TypeDefinitionIndex = 90934;

class ConfigRhythmMoveBeatMapDataModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigRhythmMoveBeatMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigRhythmMoveBeatMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigRhythmMoveBeatMap_BeatMap* GetBeatMap(::System::String* name)
	{
		return ((::MoleMole::ConfigRhythmMoveBeatMap_BeatMap*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE_GETBEATMAP_OFFSET))(this, name);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
	}
};
