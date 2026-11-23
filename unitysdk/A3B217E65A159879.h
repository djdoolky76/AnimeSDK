#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B20B313B624E13D7.h"

class EBDA1E8754ACD9FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A3B217E65A159879_F364512DE797F561_OFFSET UNITYSDK_OFFSET(0x2602210)
#define A3B217E65A159879__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A3B217E65A159879_TypeDefinitionIndex = 5848;

class A3B217E65A159879 : public ::B20B313B624E13D7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B217E65A159879__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EBDA1E8754ACD9FC*>* F364512DE797F561()
	{
		return ((::System::Collections::Generic::List_1<::EBDA1E8754ACD9FC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B217E65A159879_F364512DE797F561_OFFSET))(this);
	}
};
