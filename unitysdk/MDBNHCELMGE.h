#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDBNHCELMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D51E80)

inline static constexpr unsigned int MDBNHCELMGE_TypeDefinitionIndex = 81715;

class MDBNHCELMGE : public ::System::Object
{
public:
	::System::UInt32 FOEFDNMNNNB; // 0x10
	::System::UInt32 DILBAFAKBJJ; // 0x14
	::System::Int32 LOPMOALAPNE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBNHCELMGE__CTOR_OFFSET))(this);
	}
};
