#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSpaceZooMainPage; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE51A0)
#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE51B0)
#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE5170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSpaceZooMainPage_TypeDefinitionIndex = 20907;

	class ShowSpaceZooMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpaceZooPageType PageType; // 0x18
		::System::Boolean WaitUIClose; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::String* Param; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSpaceZooMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSpaceZooMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSpaceZooMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSpaceZooMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
