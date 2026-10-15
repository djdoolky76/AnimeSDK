#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;

#define BFINAHGOMOO___C__DISPLAYCLASS96_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB16BBF0)
#define BFINAHGOMOO___C__DISPLAYCLASS96_0___FINDCHANGEDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0xB16D150)

inline static constexpr unsigned int BFINAHGOMOO___c__DisplayClass96_0_TypeDefinitionIndex = 71219;

	class BFINAHGOMOO___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::System::UInt32 nodeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS96_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindChangeDetail_b__0(::GAHPNAEGACM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + BFINAHGOMOO___C__DISPLAYCLASS96_0___FINDCHANGEDETAIL_B__0_OFFSET))(this, a1);
		}

	};
