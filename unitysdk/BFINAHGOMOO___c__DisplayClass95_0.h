#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAOEEDDAPIK;

#define BFINAHGOMOO___C__DISPLAYCLASS95_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB16BBE0)
#define BFINAHGOMOO___C__DISPLAYCLASS95_0__FINDITEMBYCHARACTERID_B__0_OFFSET UNITYSDK_OFFSET(0xB16D070)

	class BFINAHGOMOO___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::System::UInt32 characterID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS95_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FindItemByCharacterID_b__0(::CAOEEDDAPIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAOEEDDAPIK*))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS95_0__FINDITEMBYCHARACTERID_B__0_OFFSET))(this, a1);
		}

	};
