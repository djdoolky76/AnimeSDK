#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define E8690DF7C7FB7E60_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25E0AD0)
#define E8690DF7C7FB7E60__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8690DF7C7FB7E60_TypeDefinitionIndex = 5695;

class E8690DF7C7FB7E60 : public ::System::Object
{
public:
	::System::String* E6B288436731019A; // 0x10
	::System::UInt64 A42B9A08B09FDC5D; // 0x18
	::System::Int64 FF532761C03AF2E7; // 0x20
	::System::UInt32 F323C8DC632A222C; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8690DF7C7FB7E60__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E8690DF7C7FB7E60*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E8690DF7C7FB7E60*&))((::PBYTE)hIl2Cpp + E8690DF7C7FB7E60_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
