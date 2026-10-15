#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamActionPhaseTalk; }

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC28EB0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC28EC0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseTalk_TypeDefinitionIndex = 20029;

	class TriggerPamActionPhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
