#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopNPCBubbleTalk; }

#define RPG_GAMECORE_STOPNPCBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25840)
#define RPG_GAMECORE_STOPNPCBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB25850)
#define RPG_GAMECORE_STOPNPCBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopNPCBubbleTalk_TypeDefinitionIndex = 21598;

	class StopNPCBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* UniqueIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPNPCBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
