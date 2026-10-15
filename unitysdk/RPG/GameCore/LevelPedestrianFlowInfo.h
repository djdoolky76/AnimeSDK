#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D795C50)
#define RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7959C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianFlowInfo_TypeDefinitionIndex = 17282;

	class LevelPedestrianFlowInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StartNodeIndex; // 0x10
		::System::UInt32 EndPedestrianGroupID; // 0x14
		::System::UInt32 EndPedestrianID; // 0x18
		::System::UInt32 EndNodeIndex; // 0x1C
		::System::Boolean StartForward; // 0x20
		::System::Boolean EndForward; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single Weight; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianFlowInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianFlowInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANFLOWINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
