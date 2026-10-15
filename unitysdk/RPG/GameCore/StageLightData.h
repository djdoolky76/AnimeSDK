#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageLightData; }

#define RPG_GAMECORE_STAGELIGHTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2EF0)
#define RPG_GAMECORE_STAGELIGHTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageLightData_TypeDefinitionIndex = 19173;

	class StageLightData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int64 LightID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELIGHTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageLightData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageLightData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELIGHTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
