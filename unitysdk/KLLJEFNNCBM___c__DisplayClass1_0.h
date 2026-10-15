#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLLJEFNNCBM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB52E510)
#define KLLJEFNNCBM___C__DISPLAYCLASS1_0__ADDITEMDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB52EB20)

inline static constexpr unsigned int KLLJEFNNCBM___c__DisplayClass1_0_TypeDefinitionIndex = 72171;

	class KLLJEFNNCBM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* currentTurnList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddItemData_b__0(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS1_0__ADDITEMDATA_B__0_OFFSET))(this, a1, a2);
		}

	};
