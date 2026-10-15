#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSpecialVisionProtect; }

#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3850F0)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D385100)
#define RPG_GAMECORE_ADVSPECIALVISIONPROTECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3850C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSpecialVisionProtect_TypeDefinitionIndex = 21883;

	class AdvSpecialVisionProtect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPECIALVISIONPROTECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
