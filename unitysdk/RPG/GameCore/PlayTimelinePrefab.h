#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PlayTimelinePrefab; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYTIMELINEPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D932630)
#define RPG_GAMECORE_PLAYTIMELINEPREFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D932640)
#define RPG_GAMECORE_PLAYTIMELINEPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D932600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTimelinePrefab_TypeDefinitionIndex = 21925;

	class PlayTimelinePrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::GameCore::DynamicString* AreaName; // 0x20
		::RPG::GameCore::DynamicString* AnchorName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINEPREFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
