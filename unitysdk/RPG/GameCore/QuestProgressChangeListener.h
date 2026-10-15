#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class QuestProgressChangeListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933530)
#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933540)
#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestProgressChangeListener_TypeDefinitionIndex = 21213;

	class QuestProgressChangeListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestProgressChangeListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestProgressChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestProgressChangeListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestProgressChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
