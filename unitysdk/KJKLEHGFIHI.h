#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJKLEHGFIHI;
namespace RPG::GameCore { class TargetEvaluator; }

#define KJKLEHGFIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D098380)
#define KJKLEHGFIHI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D098390)
#define KJKLEHGFIHI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D098350)

inline static constexpr unsigned int KJKLEHGFIHI_TypeDefinitionIndex = 23296;

	class KJKLEHGFIHI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKLEHGFIHI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KJKLEHGFIHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJKLEHGFIHI*))((::PBYTE)hIl2Cpp + KJKLEHGFIHI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KJKLEHGFIHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJKLEHGFIHI*))((::PBYTE)hIl2Cpp + KJKLEHGFIHI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
