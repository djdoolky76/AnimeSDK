#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ALKKNOJJLFL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define ALKKNOJJLFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDABE0)
#define ALKKNOJJLFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCDABF0)
#define ALKKNOJJLFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCDABB0)

	class ALKKNOJJLFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKKNOJJLFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ALKKNOJJLFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALKKNOJJLFL*))((::PBYTE)hIl2Cpp + ALKKNOJJLFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ALKKNOJJLFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALKKNOJJLFL*))((::PBYTE)hIl2Cpp + ALKKNOJJLFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
