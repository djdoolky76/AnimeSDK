#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitMonopolyResume; }

#define RPG_GAMECORE_WAITMONOPOLYRESUME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9C230)
#define RPG_GAMECORE_WAITMONOPOLYRESUME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9C240)
#define RPG_GAMECORE_WAITMONOPOLYRESUME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMonopolyResume_TypeDefinitionIndex = 20926;

	class WaitMonopolyResume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMonopolyResume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMonopolyResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMonopolyResume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMonopolyResume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMONOPOLYRESUME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
