#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAILIPBNAJL___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C655FE0)
#define HAILIPBNAJL___C__DISPLAYCLASS17_0__AICONFIRMDICE_B__0_OFFSET UNITYSDK_OFFSET(0x1C65A870)

inline static constexpr unsigned int HAILIPBNAJL___c__DisplayClass17_0_TypeDefinitionIndex = 36410;

	class HAILIPBNAJL___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* diceIndexs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _AIConfirmDice_b__0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS17_0__AICONFIRMDICE_B__0_OFFSET))(this, a1);
		}

	};
