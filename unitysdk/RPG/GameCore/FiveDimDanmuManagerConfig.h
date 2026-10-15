#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDanmuManagerConfig; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace RPG::GameCore { class FiveDimDanmuTrackGroup; }

#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7AA0)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B7AB0)
#define RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDanmuManagerConfig_TypeDefinitionIndex = 18826;

	class FiveDimDanmuManagerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrack*>* TrackList; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimDanmuTrackGroup*>* TrackGroupList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDanmuManagerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDanmuManagerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDanmuManagerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUMANAGERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
