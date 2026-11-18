#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLLJHBBEFK.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GILOMLEHBPP__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF7460)

inline static constexpr unsigned int GILOMLEHBPP_TypeDefinitionIndex = 60957;

class GILOMLEHBPP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AHECJBACEDB; // 0x10
	::JGLLJHBBEFK NOOLOILNGPL; // 0x18
	::System::Boolean LJBPPLGABBB; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Int32 APKIKLPPHEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILOMLEHBPP__CTOR_OFFSET))(this);
	}
};
