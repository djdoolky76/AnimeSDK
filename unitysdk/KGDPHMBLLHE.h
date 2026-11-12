#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KGDPHMBLLHE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define KGDPHMBLLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E281080)
#define KGDPHMBLLHE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E281090)
#define KGDPHMBLLHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E281050)

inline static constexpr unsigned int KGDPHMBLLHE_TypeDefinitionIndex = 21884;

	class KGDPHMBLLHE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MGJPIILDPMF; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
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
