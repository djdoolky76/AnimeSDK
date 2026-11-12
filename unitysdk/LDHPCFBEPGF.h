#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDHPCFBEPGF;
namespace RPG::GameCore { class TargetEvaluator; }

#define LDHPCFBEPGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D80E0)
#define LDHPCFBEPGF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2D8110)
#define LDHPCFBEPGF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2D8070)

inline static constexpr unsigned int LDHPCFBEPGF_TypeDefinitionIndex = 22403;

	class LDHPCFBEPGF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean KDHCICFNAOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHPCFBEPGF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDHPCFBEPGF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDHPCFBEPGF*))((::PBYTE)hIl2Cpp + LDHPCFBEPGF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDHPCFBEPGF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDHPCFBEPGF*))((::PBYTE)hIl2Cpp + LDHPCFBEPGF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
