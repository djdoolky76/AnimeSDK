#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshMunicipalPedestrian; }

#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D949310)
#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D949320)
#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMunicipalPedestrian_TypeDefinitionIndex = 20324;

	class RefreshMunicipalPedestrian : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMunicipalPedestrian* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMunicipalPedestrian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMunicipalPedestrian* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMunicipalPedestrian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
