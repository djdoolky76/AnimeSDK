#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartTutorialGraph; }
namespace System { class String; }

#define RPG_GAMECORE_STARTTUTORIALGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1ECE0)
#define RPG_GAMECORE_STARTTUTORIALGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1ECF0)
#define RPG_GAMECORE_STARTTUTORIALGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1ECB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTutorialGraph_TypeDefinitionIndex = 23418;

	class StartTutorialGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LoadFromTableKey; // 0x18
		::System::String* Path; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTutorialGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTutorialGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTUTORIALGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
