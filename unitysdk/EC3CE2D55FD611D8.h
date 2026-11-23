#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"
#include "unitysdk/AB893667BB6F371B.h"

class A002D5875FA770C1;
class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EC3CE2D55FD611D8_BD523E8580302215_OFFSET UNITYSDK_OFFSET(0x1DAB8E0)
#define EC3CE2D55FD611D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABBC0)

inline static constexpr unsigned int EC3CE2D55FD611D8_TypeDefinitionIndex = 10204;

class EC3CE2D55FD611D8 : public ::E2BEC5FD40067593
{
public:
	::System::Collections::Generic::List_1<::AB642D1382756991*>* B5EA37574306234F; // 0x40

	::AB893667BB6F371B BD523E8580302215(::A002D5875FA770C1* B2E03D6D5A9EF4CB)
	{
		return ((::AB893667BB6F371B(*)(::PVOID, ::A002D5875FA770C1*))((::PBYTE)hIl2Cpp + EC3CE2D55FD611D8_BD523E8580302215_OFFSET))(this, B2E03D6D5A9EF4CB);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC3CE2D55FD611D8__CTOR_OFFSET))(this);
	}
};
