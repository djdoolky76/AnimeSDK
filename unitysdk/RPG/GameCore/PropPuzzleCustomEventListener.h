#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropPuzzleCustomEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D924020)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D924030)
#define RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D923FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleCustomEventListener_TypeDefinitionIndex = 21987;

	class PropPuzzleCustomEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleCustomEvent Event; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20
		::System::Boolean IsLoop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLECUSTOMEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
