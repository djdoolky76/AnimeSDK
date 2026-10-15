#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcRide; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A8E80)
#define RPG_GAMECORE_ADVNPCRIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A8EC0)
#define RPG_GAMECORE_ADVNPCRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A8E20)

namespace RPG::GameCore
{
	class AdvNpcRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* SourceAttachPoint; // 0x28
		::RPG::GameCore::DynamicString* AttachPoint; // 0x30
		::RPG::MVector3 OffsetPosition; // 0x38
		::RPG::MVector3 OffsetRotation; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcRide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
