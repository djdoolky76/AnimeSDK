#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define A6093451812F4D61__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A6093451812F4D61_TypeDefinitionIndex = 1387;

class A6093451812F4D61 : public ::E379DE61A548837D
{
public:
	::System::String* EDF310C4AD388A5F; // 0x38
	::System::Boolean F99436309E56DB07; // 0x40
	::System::Byte _padding0[0x3];
	::System::Single ABA1F1E096C1F5F8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A6093451812F4D61__CTOR_OFFSET))(this);
	}
};
