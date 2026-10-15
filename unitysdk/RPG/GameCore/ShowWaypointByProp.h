#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowWaypointByProp; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWWAYPOINTBYPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE8400)
#define RPG_GAMECORE_SHOWWAYPOINTBYPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE8420)
#define RPG_GAMECORE_SHOWWAYPOINTBYPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE83B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowWaypointByProp_TypeDefinitionIndex = 20874;

	class ShowWaypointByProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseOwnerEntity; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30
		::RPG::GameCore::DynamicString* PropKey; // 0x38
		::System::Int32 MinRange; // 0x40
		::System::Int32 MaxRange; // 0x44
		::System::String* IconPath; // 0x48
		::RPG::MVector3 Offset; // 0x50
		::System::Boolean OnNameBoard; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWaypointByProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowWaypointByProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWWAYPOINTBYPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
