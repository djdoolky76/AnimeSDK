#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define AD93F415AA21BE8B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2692A60)
#define AD93F415AA21BE8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD93F415AA21BE8B_TypeDefinitionIndex = 6539;

class AD93F415AA21BE8B : public ::System::Object
{
public:
	::System::String* AD0E7475F3A6FF3E; // 0x10
	::System::Int64 F28C1E712D6B8B0C; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD93F415AA21BE8B__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AD93F415AA21BE8B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AD93F415AA21BE8B*&))((::PBYTE)hIl2Cpp + AD93F415AA21BE8B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
