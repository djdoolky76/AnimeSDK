#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BB241A4B2A681E68_E326AF10A71EC6E4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BB241A4B2A681E68_FDD1FFB9C92050DB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BB241A4B2A681E68__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int BB241A4B2A681E68_TypeDefinitionIndex = 15508;

class BB241A4B2A681E68 : public ::System::Object
{
public:
	::System::Object* B67A1B4D4A606C2A; // 0x10

	::System::Object* E326AF10A71EC6E4()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BB241A4B2A681E68_E326AF10A71EC6E4_OFFSET))(this);
	}

	::System::Void _ctor(::System::Object* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BB241A4B2A681E68__CTOR_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void FDD1FFB9C92050DB(::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BB241A4B2A681E68_FDD1FFB9C92050DB_OFFSET))(this, E937D4885DAA1AE8);
	}
};
