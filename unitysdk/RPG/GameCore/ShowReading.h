#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowReading; }

#define RPG_GAMECORE_SHOWREADING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB57B0)
#define RPG_GAMECORE_SHOWREADING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB57C0)
#define RPG_GAMECORE_SHOWREADING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB5770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowReading_TypeDefinitionIndex = 20891;

	class ShowReading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BookID; // 0x18
		::System::Boolean WaitForExit; // 0x20
		::System::Boolean ShouldPauseGame; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowReading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowReading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWREADING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
