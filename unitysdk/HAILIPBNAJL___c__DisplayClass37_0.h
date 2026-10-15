#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class HAILIPBNAJL;
class MOCPBOFGDCP;
class OKCLMKOCLKL;
class PHEHGMEOKMB;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAILIPBNAJL___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62AEC0)
#define HAILIPBNAJL___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x1C62CA70)

inline static constexpr unsigned int HAILIPBNAJL___c__DisplayClass37_0_TypeDefinitionIndex = 36415;

	class HAILIPBNAJL___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::PHEHGMEOKMB*, ::System::UInt64>>* CalcedDiceIndexScoreList; // 0x10
		::OKCLMKOCLKL* context; // 0x18
		::MOCPBOFGDCP* scoreCalcContext; // 0x20
		::System::Action_1<::System::UInt64>* __9__1; // 0x28
		::HAILIPBNAJL* __4__this; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* selectedDiceContentIDList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void __calcDiceScoreByAILevel_b__1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS37_0___CALCDICESCOREBYAILEVEL_B__1_OFFSET))(this, a1);
		}

	};
