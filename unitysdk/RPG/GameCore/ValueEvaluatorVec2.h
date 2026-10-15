#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec2; }

#define RPG_GAMECORE_VALUEEVALUATORVEC2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8C940)
#define RPG_GAMECORE_VALUEEVALUATORVEC2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8C860)

namespace RPG::GameCore
{
	class ValueEvaluatorVec2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* x; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* y; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValueEvaluatorVec2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValueEvaluatorVec2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
