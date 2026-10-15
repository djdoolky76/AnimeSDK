#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddActivityMazeBuffBinding; }

#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3850C0)
#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3850D0)
#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D385000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddActivityMazeBuffBinding_TypeDefinitionIndex = 23420;

	class AddActivityMazeBuffBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddActivityMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddActivityMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddActivityMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddActivityMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
