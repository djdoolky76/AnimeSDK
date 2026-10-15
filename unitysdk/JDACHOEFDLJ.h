#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JDACHOEFDLJ;
namespace RPG::GameCore { class TargetEvaluator; }

#define JDACHOEFDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D018E00)
#define JDACHOEFDLJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D018E10)
#define JDACHOEFDLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D018DD0)

	class JDACHOEFDLJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDACHOEFDLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JDACHOEFDLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JDACHOEFDLJ*))((::PBYTE)hIl2Cpp + JDACHOEFDLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JDACHOEFDLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JDACHOEFDLJ*))((::PBYTE)hIl2Cpp + JDACHOEFDLJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
