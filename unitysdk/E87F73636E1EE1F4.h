#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E87F73636E1EE1F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E87F73636E1EE1F4_TypeDefinitionIndex = 43;

class E87F73636E1EE1F4 : public ::E379DE61A548837D
{
public:
	::System::Boolean B01E36EAB7A2318D; // 0x38
	::System::Boolean B0C18347AB77053A; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E87F73636E1EE1F4__CTOR_OFFSET))(this);
	}
};
