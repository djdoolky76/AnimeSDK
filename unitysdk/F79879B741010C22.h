#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F79879B741010C22_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x3BE01A0)
#define F79879B741010C22_F1C3E07C92727AEE_OFFSET UNITYSDK_OFFSET(0x1E1B4C0)
#define F79879B741010C22__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F79879B741010C22_TypeDefinitionIndex = 11319;

class F79879B741010C22 : public ::System::Object
{
public:
	::System::String* EF29056D4BD7C178; // 0x10

	::System::Object* A4CFF253D56ECB2D()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + F79879B741010C22_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79879B741010C22__CTOR_OFFSET))(this);
	}

	::System::Boolean F1C3E07C92727AEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F79879B741010C22_F1C3E07C92727AEE_OFFSET))(this);
	}
};
