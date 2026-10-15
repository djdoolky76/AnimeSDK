#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LCBCNOJNFHE;
namespace RPG::GameCore { class TargetEvaluator; }

#define LCBCNOJNFHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A97C0)
#define LCBCNOJNFHE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0A97D0)
#define LCBCNOJNFHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A9790)

inline static constexpr unsigned int LCBCNOJNFHE_TypeDefinitionIndex = 23719;

	class LCBCNOJNFHE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::TargetEvaluator* DAFDBGCICHA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBCNOJNFHE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LCBCNOJNFHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCBCNOJNFHE*))((::PBYTE)hIl2Cpp + LCBCNOJNFHE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LCBCNOJNFHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCBCNOJNFHE*))((::PBYTE)hIl2Cpp + LCBCNOJNFHE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
