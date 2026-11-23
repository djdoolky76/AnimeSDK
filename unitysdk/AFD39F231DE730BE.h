#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define AFD39F231DE730BE__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AFD39F231DE730BE_TypeDefinitionIndex = 1897;

class AFD39F231DE730BE : public ::E379DE61A548837D
{
public:
	::System::Single B5749645ED3AAF08; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFD39F231DE730BE__CTOR_OFFSET))(this);
	}
};
