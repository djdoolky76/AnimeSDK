#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KGDPHMBLLHE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define KGDPHMBLLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41AFD0)
#define KGDPHMBLLHE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F41AFE0)
#define KGDPHMBLLHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F41AFA0)

inline static constexpr unsigned int KGDPHMBLLHE_TypeDefinitionIndex = 21884;

	class KGDPHMBLLHE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* MGJPIILDPMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPHMBLLHE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KGDPHMBLLHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGDPHMBLLHE*))((::PBYTE)hIl2Cpp + KGDPHMBLLHE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KGDPHMBLLHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGDPHMBLLHE*))((::PBYTE)hIl2Cpp + KGDPHMBLLHE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
