#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IFBGOELGAMP;
namespace RPG::GameCore { class TargetEvaluator; }

#define IFBGOELGAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEDAB0)
#define IFBGOELGAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEEDAF0)
#define IFBGOELGAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEDA50)

	class IFBGOELGAMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean KMMOBDNHPBN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBGOELGAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFBGOELGAMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFBGOELGAMP*))((::PBYTE)hIl2Cpp + IFBGOELGAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IFBGOELGAMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFBGOELGAMP*))((::PBYTE)hIl2Cpp + IFBGOELGAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
