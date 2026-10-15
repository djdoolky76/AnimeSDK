#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFMNBJEMDIK;

#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE2B55E0)
#define RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET UNITYSDK_OFFSET(0xE2BABD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule___c__DisplayClass3_0_TypeDefinitionIndex = 68158;

	class TrainModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 passengerID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTrainPassenger_b__0(::LFMNBJEMDIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFMNBJEMDIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE___C__DISPLAYCLASS3_0__FINDTRAINPASSENGER_B__0_OFFSET))(this, a1);
		}

	};
}
