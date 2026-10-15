#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHECDKIDHDB;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE2C3FC0)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITOR_B__0_OFFSET UNITYSDK_OFFSET(0xE2C59F0)

namespace RPG::Client
{
	class TrainModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 behaviorID; // 0x10
		::System::UInt32 visitorID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainVisitor_b__0(::NHECDKIDHDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHECDKIDHDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS21_0__FINDTRAINVISITOR_B__0_OFFSET))(this, a1);
		}

	};
}
