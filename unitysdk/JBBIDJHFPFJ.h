#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class LNJHJONJHPA;
namespace System { class String; }

#define JBBIDJHFPFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13066340)

inline static constexpr unsigned int JBBIDJHFPFJ_TypeDefinitionIndex = 58226;

class JBBIDJHFPFJ : public ::System::Object
{
public:
	::System::String* FCHKNNJEDIF; // 0x10
	::FBHPDPBIGPK* HMMMOCJAEOA; // 0x18
	::System::UInt64 CNIFFOJOOCC; // 0x20
	::System::Boolean DLOLHHOMDIH; // 0x28

	::System::Void _ctor(::LNJHJONJHPA* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::LNJHJONJHPA*))((::PBYTE)hIl2Cpp + JBBIDJHFPFJ__CTOR_OFFSET))(this, LJBPECKCCEA);
	}
};
