#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCasterType.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddModifier; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D389DF0)
#define RPG_GAMECORE_ADDMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D389EB0)
#define RPG_GAMECORE_ADDMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D389D10)

namespace RPG::GameCore
{
	class AddModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* ModifierName; // 0x28
		::System::String* ReferenceModifierName; // 0x30
		::System::Boolean LifeStepImmediately; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::GameCore::ModifierStackingFlag StackingFlag; // 0x3C
		::RPG::GameCore::DynamicFloat* Chance; // 0x40
		::RPG::GameCore::DynamicFloat* MaxTargetCount; // 0x48
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x50
		::RPG::GameCore::DynamicFloat* Count; // 0x58
		::RPG::GameCore::DynamicFloat* MaxLayer; // 0x60
		::RPG::GameCore::DynamicFloat* LayerAddWhenStack; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x78
		::RPG::GameCore::ModifierCasterType InheritCaster; // 0x80
		::System::Boolean IsShowUIMessageFromModel; // 0x84
		::System::Boolean IsShowUIMessageOnUpdate; // 0x85
		::System::Byte _padding2[0x2];
		::System::Single ShowUIMessageDelayTime; // 0x88
		::System::Single ShowUIMessageInternalTime; // 0x8C
		::System::Boolean ShowUIMessageCanMerge; // 0x90
		::System::Byte _padding3[0x7];
		::System::String* CustomUIModelAttachPointName; // 0x98
		::RPG::MVector3 CustomOffset; // 0xA0
		::System::Boolean ForceVisible; // 0xAC
		::System::Boolean UseFixedPosition; // 0xAD
		::System::Boolean ScreenSpaceFloatMsg; // 0xAE
		::System::Byte _padding4[0x1];
		::System::Single RefreshBuffUIDelayTime; // 0xB0
		::System::Byte _padding5[0x4];
		::System::String* InheritIconPosFromModifier; // 0xB8
		::System::Boolean IsSilenceAddAndStack; // 0xC0
		::System::Boolean AsSubModifier; // 0xC1
		::System::Byte _padding6[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessTaskList; // 0xC8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailTaskList; // 0xD0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ResistedTaskList; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
