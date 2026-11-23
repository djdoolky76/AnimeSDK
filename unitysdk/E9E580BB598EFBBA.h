#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"

#define E9E580BB598EFBBA_A00773F95A03D4B7_OFFSET UNITYSDK_OFFSET(0x1C28570)
#define E9E580BB598EFBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9E580BB598EFBBA_TypeDefinitionIndex = 9265;

class E9E580BB598EFBBA : public ::E2BEC5FD40067593
{
public:
	::System::Void A00773F95A03D4B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E580BB598EFBBA_A00773F95A03D4B7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E580BB598EFBBA__CTOR_OFFSET))(this);
	}
};
