#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define A1A6E5969F85ACD1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x236FC90)
#define A1A6E5969F85ACD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1A6E5969F85ACD1_TypeDefinitionIndex = 3328;

class A1A6E5969F85ACD1 : public ::System::Object
{
public:
	::System::String* E6B288436731019A; // 0x10
	::System::UInt64 A42B9A08B09FDC5D; // 0x18
	::System::Int64 E2B7EB4D8A351885; // 0x20

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A1A6E5969F85ACD1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A1A6E5969F85ACD1*&))((::PBYTE)hIl2Cpp + A1A6E5969F85ACD1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1A6E5969F85ACD1__CTOR_OFFSET))(this);
	}
};
