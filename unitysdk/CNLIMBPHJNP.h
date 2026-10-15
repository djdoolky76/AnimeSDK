#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CNLIMBPHJNP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CNLIMBPHJNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB5840)
#define CNLIMBPHJNP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCB5850)
#define CNLIMBPHJNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB5810)

inline static constexpr unsigned int CNLIMBPHJNP_TypeDefinitionIndex = 23158;

	class CNLIMBPHJNP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLIMBPHJNP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CNLIMBPHJNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNLIMBPHJNP*))((::PBYTE)hIl2Cpp + CNLIMBPHJNP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CNLIMBPHJNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNLIMBPHJNP*))((::PBYTE)hIl2Cpp + CNLIMBPHJNP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
