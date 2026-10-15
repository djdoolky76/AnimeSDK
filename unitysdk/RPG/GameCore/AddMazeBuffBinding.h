#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddMazeBuffBinding; }

#define RPG_GAMECORE_ADDMAZEBUFFBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D388E00)
#define RPG_GAMECORE_ADDMAZEBUFFBINDING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D388E10)
#define RPG_GAMECORE_ADDMAZEBUFFBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D388DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuffBinding_TypeDefinitionIndex = 23419;

	class AddMazeBuffBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MazeBuffInBattleBindingType>* BindingTypes; // 0x18
		::System::Boolean IsAfterWave; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
