#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLKEPPAFKNF;

#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD8AD840)
#define RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__GETOPTIONRATIO_B__0_OFFSET UNITYSDK_OFFSET(0xD8AD910)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolySelectOptionDisplayData___c__DisplayClass1_0_TypeDefinitionIndex = 66291;

	class MonopolySelectOptionDisplayData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 optionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOptionRatio_b__0(::BLKEPPAFKNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLKEPPAFKNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTOPTIONDISPLAYDATA___C__DISPLAYCLASS1_0__GETOPTIONRATIO_B__0_OFFSET))(this, a1);
		}

	};
}
