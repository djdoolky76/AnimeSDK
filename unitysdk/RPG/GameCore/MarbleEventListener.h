#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MARBLEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83CFC0)
#define RPG_GAMECORE_MARBLEEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83CFD0)
#define RPG_GAMECORE_MARBLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83CF90)

namespace RPG::GameCore
{
	class MarbleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Finish; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SealDie; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SealDieFinish; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LastHit; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
