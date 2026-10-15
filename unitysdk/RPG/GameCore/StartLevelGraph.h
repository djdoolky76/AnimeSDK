#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartLevelGraph; }
namespace System { class String; }

#define RPG_GAMECORE_STARTLEVELGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1CE60)
#define RPG_GAMECORE_STARTLEVELGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1CE70)
#define RPG_GAMECORE_STARTLEVELGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1CE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartLevelGraph_TypeDefinitionIndex = 23417;

	class StartLevelGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LoadFromTableKey; // 0x18
		::System::String* Path; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartLevelGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartLevelGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartLevelGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTLEVELGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
