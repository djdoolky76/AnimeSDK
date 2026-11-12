#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropPuzzleMissionResetEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6AFC0)
#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB6AFD0)
#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB6AF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleMissionResetEventListener_TypeDefinitionIndex = 22413;

	class PropPuzzleMissionResetEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MissionID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
