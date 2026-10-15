#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAOEEDDAPIK;

#define BFINAHGOMOO___C__DISPLAYCLASS92_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB16A120)
#define BFINAHGOMOO___C__DISPLAYCLASS92_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0xB16B5A0)

inline static constexpr unsigned int BFINAHGOMOO___c__DisplayClass92_0_TypeDefinitionIndex = 71216;

	class BFINAHGOMOO___c__DisplayClass92_0 : public ::System::Object
	{
	public:
		::System::UInt32 nodeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS92_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindItem_b__0(::CAOEEDDAPIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAOEEDDAPIK*))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS92_0___FINDITEM_B__0_OFFSET))(this, a1);
		}

	};
