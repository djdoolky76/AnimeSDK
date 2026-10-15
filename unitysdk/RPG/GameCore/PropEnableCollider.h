#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropEnableColliderOP.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TriggerSelectionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropEnableCollider; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPENABLECOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A410)
#define RPG_GAMECORE_PROPENABLECOLLIDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94A440)
#define RPG_GAMECORE_PROPENABLECOLLIDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEnableCollider_TypeDefinitionIndex = 20396;

	class PropEnableCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropEnableColliderOP OPType; // 0x18
		::System::Boolean Enabled; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::System::String*>* SpecifiedRelativePaths; // 0x20
		::RPG::GameCore::TriggerSelectionType TriggerSelect; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* CustomTriggerName; // 0x30
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEnableCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEnableCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEnableCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEnableCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPENABLECOLLIDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
