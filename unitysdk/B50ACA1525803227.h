#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class EED93F378AB2BED7;

#define B50ACA1525803227__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B50ACA1525803227_TypeDefinitionIndex = 8300;

class B50ACA1525803227 : public ::E379DE61A548837D
{
public:
	::EED93F378AB2BED7* A54BE52F56CA80C9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B50ACA1525803227__CTOR_OFFSET))(this);
	}
};
