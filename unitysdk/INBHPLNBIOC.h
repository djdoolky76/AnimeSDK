#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class INBHPLNBIOC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define INBHPLNBIOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF25D80)
#define INBHPLNBIOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF25DC0)
#define INBHPLNBIOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF25D20)

	class INBHPLNBIOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* KBAPBCNJHDB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBHPLNBIOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::INBHPLNBIOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INBHPLNBIOC*))((::PBYTE)hIl2Cpp + INBHPLNBIOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::INBHPLNBIOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INBHPLNBIOC*))((::PBYTE)hIl2Cpp + INBHPLNBIOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
