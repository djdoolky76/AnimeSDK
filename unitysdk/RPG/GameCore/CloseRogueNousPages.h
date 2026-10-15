#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseRogueNousPages; }

#define RPG_GAMECORE_CLOSEROGUENOUSPAGES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59A1A0)
#define RPG_GAMECORE_CLOSEROGUENOUSPAGES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59A1B0)
#define RPG_GAMECORE_CLOSEROGUENOUSPAGES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59A0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseRogueNousPages_TypeDefinitionIndex = 24282;

	class CloseRogueNousPages : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
