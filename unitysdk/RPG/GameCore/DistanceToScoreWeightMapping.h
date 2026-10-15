#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistanceToScoreWeight; }
namespace RPG::GameCore { class DistanceToScoreWeightMapping; }

#define RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D618150)
#define RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D618090)

namespace RPG::GameCore
{
	class DistanceToScoreWeightMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DistanceToScoreWeight*>* WeightConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistanceToScoreWeightMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistanceToScoreWeightMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHTMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
