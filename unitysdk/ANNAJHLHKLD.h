#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ANNAJHLHKLD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define ANNAJHLHKLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB82B0)
#define ANNAJHLHKLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB82D0)
#define ANNAJHLHKLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB8270)

inline static constexpr unsigned int ANNAJHLHKLD_TypeDefinitionIndex = 23723;

	class ANNAJHLHKLD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* FKGOBKPKAAD; // 0x20
		::RPG::GameCore::DynamicFloat* IKGOAIEHFJD; // 0x28
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x30
		::RPG::GameCore::PropertyModifyFunction NFCPJINGLGA; // 0x38
		::RPG::GameCore::PropertyModifyFunction OPILAJBILKM; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNAJHLHKLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ANNAJHLHKLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANNAJHLHKLD*))((::PBYTE)hIl2Cpp + ANNAJHLHKLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ANNAJHLHKLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ANNAJHLHKLD*))((::PBYTE)hIl2Cpp + ANNAJHLHKLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
