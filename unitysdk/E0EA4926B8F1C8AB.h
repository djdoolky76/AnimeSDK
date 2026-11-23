#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2BEC5FD40067593.h"
#include "unitysdk/AB893667BB6F371B.h"

class A002D5875FA770C1;
class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E0EA4926B8F1C8AB_BD523E8580302215_OFFSET UNITYSDK_OFFSET(0x1D23170)
#define E0EA4926B8F1C8AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E0EA4926B8F1C8AB_TypeDefinitionIndex = 9942;

class E0EA4926B8F1C8AB : public ::E2BEC5FD40067593
{
public:
	::System::Collections::Generic::List_1<::AB642D1382756991*>* B0B4A7851BACF482; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0EA4926B8F1C8AB__CTOR_OFFSET))(this);
	}

	::AB893667BB6F371B BD523E8580302215(::A002D5875FA770C1* B2E03D6D5A9EF4CB)
	{
		return ((::AB893667BB6F371B(*)(::PVOID, ::A002D5875FA770C1*))((::PBYTE)hIl2Cpp + E0EA4926B8F1C8AB_BD523E8580302215_OFFSET))(this, B2E03D6D5A9EF4CB);
	}
};
