#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F4FB9869136C681E_FBD08428AD1DE417_OFFSET UNITYSDK_OFFSET(0x261CED0)
#define F4FB9869136C681E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4FB9869136C681E_TypeDefinitionIndex = 5916;

class F4FB9869136C681E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4FB9869136C681E__CTOR_OFFSET))(this);
	}

	static ::System::Void FBD08428AD1DE417()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4FB9869136C681E_FBD08428AD1DE417_OFFSET))();
	}
};
