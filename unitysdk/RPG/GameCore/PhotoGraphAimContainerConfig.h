#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphAimContainerTargetBase; }
namespace RPG::GameCore { class PhotoGraphTipRangeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E0F00)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E0980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerConfig_TypeDefinitionIndex = 21640;

	class PhotoGraphAimContainerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphAimContainerLogicOperator LogicOperator; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PhotoGraphAimContainerConfig*>* InnerContainers; // 0x18
		::System::Boolean OnlyShow; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::PhotoGraphAimContainerTargetBase* AimTargetConfig; // 0x28
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x30
		::System::Boolean OverrideCameraTip; // 0x38
		::System::Byte _padding2[0x3];
		::System::Int32 TipPriority; // 0x3C
		::Il2CppArray<::RPG::GameCore::PhotoGraphTipRangeConfig*>* TipConfigs; // 0x40
		::System::String* ContainerFlagName; // 0x48
		::System::Boolean IsTopContainer; // 0x50
		::System::Boolean IsSimpleConfig; // 0x51
		::System::Boolean IsAutoIdentifyMode; // 0x52
		::System::Boolean IsAimTargetConfig; // 0x53
		::System::Boolean IsAimTargetType; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
