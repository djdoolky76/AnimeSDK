#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LockHP; }

#define RPG_GAMECORE_LOCKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F0F90)
#define RPG_GAMECORE_LOCKHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F0FA0)
#define RPG_GAMECORE_LOCKHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F0F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockHP_TypeDefinitionIndex = 23617;

	class LockHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LockHPStrength Strength; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Threshold; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
