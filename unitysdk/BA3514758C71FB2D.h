#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4A2748143F3AEF6.h"

class AB642D1382756991;

#define BA3514758C71FB2D__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7C80)

inline static constexpr unsigned int BA3514758C71FB2D_TypeDefinitionIndex = 615;

class BA3514758C71FB2D : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::System::UInt32 E72A1182D488BBCC; // 0x18
	::System::UInt32 E6DE48E02CE1CBB1; // 0x1C
	::System::Int32 EAB1D9B812C90851; // 0x20
	::System::Boolean AED7481A51AC7EE1; // 0x24
	::System::Byte _padding0[0x3];
	::System::Single B1DCC1DD21D50931; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA3514758C71FB2D__CTOR_OFFSET))(this);
	}
};
