#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KALJBBAFAHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DE850)

inline static constexpr unsigned int KALJBBAFAHB_TypeDefinitionIndex = 69638;

	class KALJBBAFAHB : public ::System::Object
	{
	public:
		::System::Single CEIMNIIBIFC; // 0x10
		::System::Single JPCLNLCFHFO; // 0x14
		::System::Boolean GINHLNNHLHB; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single FNDMMKMCACP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALJBBAFAHB_CTOR_OFFSET))(this);
		}

	};
