#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIGBHACJLFF.h"
#include "unitysdk/PMJGFLIMNPB.h"

#define NALONGNNDNN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12C36820)
#define NALONGNNDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x12C36830)

inline static constexpr unsigned int NALONGNNDNN_TypeDefinitionIndex = 53032;

class NALONGNNDNN : public ::OIGBHACJLFF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALONGNNDNN__CTOR_OFFSET))(this);
	}

	::PMJGFLIMNPB get_Type()
	{
		return ((::PMJGFLIMNPB(*)(::PVOID))((::PBYTE)hIl2Cpp + NALONGNNDNN_GET_TYPE_OFFSET))(this);
	}
};
