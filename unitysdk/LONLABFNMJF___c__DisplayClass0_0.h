#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAHLINDEHP;

#define LONLABFNMJF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB808620)
#define LONLABFNMJF___C__DISPLAYCLASS0_0__GETEQUIPPROPERTYCOMPARERESULT_B__0_OFFSET UNITYSDK_OFFSET(0xB808630)

inline static constexpr unsigned int LONLABFNMJF___c__DisplayClass0_0_TypeDefinitionIndex = 75248;

	class LONLABFNMJF___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::HIAHLINDEHP* affix; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLABFNMJF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipPropertyCompareResult_b__0(::HIAHLINDEHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIAHLINDEHP*))((::PBYTE)hIl2Cpp + LONLABFNMJF___C__DISPLAYCLASS0_0__GETEQUIPPROPERTYCOMPARERESULT_B__0_OFFSET))(this, a1);
		}

	};
