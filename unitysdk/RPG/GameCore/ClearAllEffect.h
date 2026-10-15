#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearAllEffect; }

#define RPG_GAMECORE_CLEARALLEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B58E0)
#define RPG_GAMECORE_CLEARALLEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B58F0)
#define RPG_GAMECORE_CLEARALLEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearAllEffect_TypeDefinitionIndex = 20272;

	class ClearAllEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearAllEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearAllEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearAllEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearAllEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
