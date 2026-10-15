#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D924430)
#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D924450)
#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9243E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleEventListener_TypeDefinitionIndex = 21585;

	class PropPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InitializedCallback; // 0x18
		::System::Boolean InitializedCallbackLoop; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FinishCallback; // 0x28
		::System::Boolean FinishCallbackLoop; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ResetCallback; // 0x38
		::System::Boolean ResetCallbackLoop; // 0x40
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* QuitCallback; // 0x48
		::System::Boolean QuitCallbackLoop; // 0x50
		::System::Byte _padding3[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailCallback; // 0x58
		::System::Boolean FailCallbackLoop; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
