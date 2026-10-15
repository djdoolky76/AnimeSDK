#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BJEKBEMLPCH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define BJEKBEMLPCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D2B0)
#define BJEKBEMLPCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80D2E0)
#define BJEKBEMLPCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80D260)

	class BJEKBEMLPCH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NNGEIAMONGD; // 0x18
		::RPG::GameCore::DynamicString* JPEOGNFHEGO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEKBEMLPCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BJEKBEMLPCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJEKBEMLPCH*))((::PBYTE)hIl2Cpp + BJEKBEMLPCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BJEKBEMLPCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJEKBEMLPCH*))((::PBYTE)hIl2Cpp + BJEKBEMLPCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
