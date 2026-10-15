#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelFloorEditorSyncOptions; }

#define RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77F6A0)
#define RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D77F660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorEditorSyncOptions_TypeDefinitionIndex = 17416;

	class LevelFloorEditorSyncOptions : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelFloorEditorSyncOptions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelFloorEditorSyncOptions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOOREDITORSYNCOPTIONS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
