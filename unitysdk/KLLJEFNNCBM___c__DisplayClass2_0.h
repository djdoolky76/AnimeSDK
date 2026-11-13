#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLLJEFNNCBM___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17B84F90)
#define KLLJEFNNCBM___C__DISPLAYCLASS2_0__ADDITEMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17B85600)

inline static constexpr unsigned int KLLJEFNNCBM___c__DisplayClass2_0_TypeDefinitionIndex = 74234;

	class KLLJEFNNCBM___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* currentTurnList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddItemData_b__0(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM___C__DISPLAYCLASS2_0__ADDITEMDATA_B__0_OFFSET))(this, a1, a2);
		}

	};
