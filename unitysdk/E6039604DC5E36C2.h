#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class E0259435AA990773;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E6039604DC5E36C2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6039604DC5E36C2_TypeDefinitionIndex = 335;

class E6039604DC5E36C2 : public ::E379DE61A548837D
{
public:
	::System::UInt32 AB62713ED9E5EFA3; // 0x38
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::E0259435AA990773*>* AF25690A164BB5F7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6039604DC5E36C2__CTOR_OFFSET))(this);
	}
};
