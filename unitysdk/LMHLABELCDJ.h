#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNOHFPEFGGA.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LMHLABELCDJ;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define LMHLABELCDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D116490)
#define LMHLABELCDJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1164A0)
#define LMHLABELCDJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D116460)

inline static constexpr unsigned int LMHLABELCDJ_TypeDefinitionIndex = 23239;

	class LMHLABELCDJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::GNOHFPEFGGA NOCCJLJPLKJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHLABELCDJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LMHLABELCDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMHLABELCDJ*))((::PBYTE)hIl2Cpp + LMHLABELCDJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LMHLABELCDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMHLABELCDJ*))((::PBYTE)hIl2Cpp + LMHLABELCDJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
