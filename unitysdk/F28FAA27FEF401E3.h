#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F28FAA27FEF401E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F28FAA27FEF401E3_TypeDefinitionIndex = 876;

class F28FAA27FEF401E3 : public ::E379DE61A548837D
{
public:
	::System::UInt32 A5E9A61B8A23886C; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* BC9C5D0F1F1D3BF7; // 0x40
	::System::Collections::Generic::List_1<::AB642D1382756991*>* A82B5D8E6593BEB1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F28FAA27FEF401E3__CTOR_OFFSET))(this);
	}
};
