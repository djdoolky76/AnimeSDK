#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WolfBroPuzzleFuncBtnListener; }

#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8B90)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA8BA0)
#define RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA8B60)

namespace RPG::GameCore
{
	class WolfBroPuzzleFuncBtnListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackSequence; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleFuncBtnListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEFUNCBTNLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
