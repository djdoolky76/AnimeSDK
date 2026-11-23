#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define A986A4A89F8795A5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A986A4A89F8795A5_TypeDefinitionIndex = 1416;

class A986A4A89F8795A5 : public ::E379DE61A548837D
{
public:
	::System::String* E33373462B4D5580; // 0x38
	::System::String* E31845CE1465720D; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A986A4A89F8795A5__CTOR_OFFSET))(this);
	}
};
