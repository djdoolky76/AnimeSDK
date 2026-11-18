#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D009D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_1__SETHOLLOWQUESTCONTEXT_B__3_OFFSET UNITYSDK_OFFSET(0x18D00BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass65_1_TypeDefinitionIndex = 81289;

	template <typename T>
	class UILineupSelectContext___c__DisplayClass65_1 : public ::System::Object
	{
	public:
		::ALDOKCCIFNB* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetHollowQuestContext_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_1__SETHOLLOWQUESTCONTEXT_B__3_OFFSET))(this);
		}
	};
}
