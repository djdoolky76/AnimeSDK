#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEEVALUATORVEC3_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5F180)
#define RPG_GAMECORE_VALUEEVALUATORVEC3_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5F190)
#define RPG_GAMECORE_VALUEEVALUATORVEC3_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5F0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorVec3_TypeDefinitionIndex = 24039;

	class ValueEvaluatorVec3 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* x; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* y; // 0x18
		::RPG::GameCore::ValueEvaluatorConfig* z; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValueEvaluatorVec3* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValueEvaluatorVec3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorVec3* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorVec3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
