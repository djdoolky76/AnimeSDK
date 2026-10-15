#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionIceSlide; }

#define RPG_GAMECORE_CAKERACEACTIONICESLIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5496B0)
#define RPG_GAMECORE_CAKERACEACTIONICESLIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5496C0)
#define RPG_GAMECORE_CAKERACEACTIONICESLIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D549620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionIceSlide_TypeDefinitionIndex = 18352;

	class CakeRaceActionIceSlide : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionIceSlide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionIceSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionIceSlide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionIceSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
