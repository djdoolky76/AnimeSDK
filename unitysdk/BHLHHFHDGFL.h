#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHLHHFHDGFL__CTOR_OFFSET UNITYSDK_OFFSET(0x113E8A40)

inline static constexpr unsigned int BHLHHFHDGFL_TypeDefinitionIndex = 57150;

class BHLHHFHDGFL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EGHECLFBDGO; // 0x10
	::System::Int32 PGFGDBNHCOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLHHFHDGFL__CTOR_OFFSET))(this);
	}
};
