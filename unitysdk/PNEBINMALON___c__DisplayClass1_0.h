#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemCost; }

#define PNEBINMALON___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC32D360)
#define PNEBINMALON___C__DISPLAYCLASS1_0__ADDCOSTITEM_B__0_OFFSET UNITYSDK_OFFSET(0xC32D6C0)

inline static constexpr unsigned int PNEBINMALON___c__DisplayClass1_0_TypeDefinitionIndex = 65701;

	class PNEBINMALON___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEBINMALON___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddCostItem_b__0(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + PNEBINMALON___C__DISPLAYCLASS1_0__ADDCOSTITEM_B__0_OFFSET))(this, a1);
		}

	};
