#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define BD8183DAED4CB631_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26EB2E0)
#define BD8183DAED4CB631__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD8183DAED4CB631_TypeDefinitionIndex = 2699;

class BD8183DAED4CB631 : public ::System::Object
{
public:
	::System::Single E3619E6713CF0015; // 0x10
	::System::UInt32 F34918C291072FA9; // 0x14
	::System::Single B81342AB24614A66; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BD8183DAED4CB631*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BD8183DAED4CB631*&))((::PBYTE)hIl2Cpp + BD8183DAED4CB631_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD8183DAED4CB631__CTOR_OFFSET))(this);
	}
};
