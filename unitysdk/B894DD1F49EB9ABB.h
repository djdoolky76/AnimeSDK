#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class FD69F7DD82E8D0BE;

#define B894DD1F49EB9ABB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B894DD1F49EB9ABB_TypeDefinitionIndex = 1355;

class B894DD1F49EB9ABB : public ::E379DE61A548837D
{
public:
	::FD69F7DD82E8D0BE* FDD4C46E60D4A876; // 0x38
	::System::Boolean B02E688074222497; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B894DD1F49EB9ABB__CTOR_OFFSET))(this);
	}
};
