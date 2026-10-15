#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistanceToScoreWeight; }

#define RPG_GAMECORE_DISTANCETOSCOREWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D618080)
#define RPG_GAMECORE_DISTANCETOSCOREWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D617F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistanceToScoreWeight_TypeDefinitionIndex = 15635;

	class DistanceToScoreWeight : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Distance; // 0x10
		::System::Single Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistanceToScoreWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistanceToScoreWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTANCETOSCOREWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
