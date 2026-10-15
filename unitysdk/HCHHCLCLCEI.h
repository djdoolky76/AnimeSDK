#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HCHHCLCLCEI;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define HCHHCLCLCEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8BC20)
#define HCHHCLCLCEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE8BC30)
#define HCHHCLCLCEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE8BBF0)

inline static constexpr unsigned int HCHHCLCLCEI_TypeDefinitionIndex = 22105;

	class HCHHCLCLCEI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PFOOEFJNOIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHHCLCLCEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCHHCLCLCEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCHHCLCLCEI*))((::PBYTE)hIl2Cpp + HCHHCLCLCEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCHHCLCLCEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCHHCLCLCEI*))((::PBYTE)hIl2Cpp + HCHHCLCLCEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
