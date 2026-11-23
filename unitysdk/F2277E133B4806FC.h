#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define F2277E133B4806FC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2419510)
#define F2277E133B4806FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F2277E133B4806FC_TypeDefinitionIndex = 4156;

class F2277E133B4806FC : public ::System::Object
{
public:
	::System::String* E63E0F25F251B753; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F2277E133B4806FC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F2277E133B4806FC*&))((::PBYTE)hIl2Cpp + F2277E133B4806FC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2277E133B4806FC__CTOR_OFFSET))(this);
	}
};
