#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F9818E6D8693D479;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E3AD2B828C7EC016__CTOR_OFFSET UNITYSDK_OFFSET(0x171B7F0)

inline static constexpr unsigned int E3AD2B828C7EC016_TypeDefinitionIndex = 675;

class E3AD2B828C7EC016 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E08C8950EE4A2B6F; // 0x38
	::System::Boolean FF97B25633EF37C6; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Collections::Generic::List_1<::F9818E6D8693D479*>* F21FB9E3F2F4FFFD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3AD2B828C7EC016__CTOR_OFFSET))(this);
	}
};
