#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreatePropInTargetFront; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPROPINTARGETFRONT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5260)
#define RPG_GAMECORE_CREATEPROPINTARGETFRONT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5330)
#define RPG_GAMECORE_CREATEPROPINTARGETFRONT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E5160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePropInTargetFront_TypeDefinitionIndex = 20161;

	class CreatePropInTargetFront : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Taskarget; // 0x18
		::System::UInt32 PropID; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::DynamicFloat* Distance; // 0x30
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* NumLimitation; // 0x40
		::RPG::GameCore::DynamicFloat* Radius; // 0x48
		::RPG::GameCore::TeamType Team; // 0x50
		::RPG::GameCore::CampType CampID; // 0x54
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x60
		::System::Boolean IsTeamUnique; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
