#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionMapPropType; }

#define RPG_GAMECORE_MISSIONMAPPROPTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887BB0)
#define RPG_GAMECORE_MISSIONMAPPROPTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionMapPropType_TypeDefinitionIndex = 19010;

	class MissionMapPropType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPPROPTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionMapPropType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionMapPropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPPROPTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
