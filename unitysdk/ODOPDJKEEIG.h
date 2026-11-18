#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODOPDJKEEIG_GJCHPEICMOL.h"
#include "unitysdk/ODOPDJKEEIG_NFFKBGCLEGF.h"
#include "unitysdk/System/Object.h"

#define ODOPDJKEEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F6D230)

inline static constexpr unsigned int ODOPDJKEEIG_TypeDefinitionIndex = 52025;

class ODOPDJKEEIG : public ::System::Object
{
public:
	::System::Int32 KGICJNFOKKD; // 0x10
	::System::Boolean IBLLHFGDMBM; // 0x14
	::System::Boolean BCCJIGGGEJD; // 0x15
	::System::Byte _padding0[0x2];
	::ODOPDJKEEIG_GJCHPEICMOL KIHCCAMPCGK; // 0x18
	::ODOPDJKEEIG_NFFKBGCLEGF MGKMJHNBFEN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOPDJKEEIG__CTOR_OFFSET))(this);
	}
};
