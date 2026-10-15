#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphAimContaierCityTrain; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DF640)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DF680)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DF5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierCityTrain_TypeDefinitionIndex = 17517;

	class PhotoGraphAimContaierCityTrain : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierCityTrain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierCityTrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierCityTrain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierCityTrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
