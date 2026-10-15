#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartSubGraphRaw; }
namespace RPG::GameCore { class SubLevelGraphDynamicOverrideSet; }
namespace System { class String; }

#define RPG_GAMECORE_STARTSUBGRAPHRAW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0A30)
#define RPG_GAMECORE_STARTSUBGRAPHRAW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF0A40)
#define RPG_GAMECORE_STARTSUBGRAPHRAW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartSubGraphRaw_TypeDefinitionIndex = 20719;

	class StartSubGraphRaw : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x18
		::RPG::GameCore::SubLevelGraphDynamicOverrideSet* DynamicOverrideSet; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSUBGRAPHRAW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
