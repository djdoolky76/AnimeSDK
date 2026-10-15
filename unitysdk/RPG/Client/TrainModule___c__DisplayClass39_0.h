#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHECDKIDHDB;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE2C5010)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0___ADDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xE2C5A20)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0___ADDTRAINVISITOR_B__1_OFFSET UNITYSDK_OFFSET(0xE2C5A50)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass39_0_TypeDefinitionIndex = 68157;

	class TrainModule___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::UInt32 behaviorID; // 0x10
		::System::UInt32 visitorID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __AddTrainVisitor_b__0(::NHECDKIDHDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHECDKIDHDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0___ADDTRAINVISITOR_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __AddTrainVisitor_b__1(::NHECDKIDHDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHECDKIDHDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS39_0___ADDTRAINVISITOR_B__1_OFFSET))(this, a1);
		}

	};
}
