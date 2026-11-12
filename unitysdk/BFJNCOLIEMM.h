#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BFJNCOLIEMM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BFJNCOLIEMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0110)
#define BFJNCOLIEMM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9B0120)
#define BFJNCOLIEMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9B00E0)

inline static constexpr unsigned int BFJNCOLIEMM_TypeDefinitionIndex = 22734;

	class BFJNCOLIEMM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJNCOLIEMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFJNCOLIEMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFJNCOLIEMM*))((::PBYTE)hIl2Cpp + BFJNCOLIEMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BFJNCOLIEMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFJNCOLIEMM*))((::PBYTE)hIl2Cpp + BFJNCOLIEMM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
