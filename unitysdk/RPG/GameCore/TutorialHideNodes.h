#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialHideNodes; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALHIDENODES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6C730)
#define RPG_GAMECORE_TUTORIALHIDENODES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6C740)
#define RPG_GAMECORE_TUTORIALHIDENODES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6C700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialHideNodes_TypeDefinitionIndex = 24377;

	class TutorialHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
