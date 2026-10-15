#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FlipEraRegion; }

#define RPG_GAMECORE_FLIPERAREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B6340)
#define RPG_GAMECORE_FLIPERAREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B6350)
#define RPG_GAMECORE_FLIPERAREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlipEraRegion_TypeDefinitionIndex = 22330;

	class FlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
