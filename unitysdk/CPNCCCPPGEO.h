#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/JGLIFHIAIEH.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPNCCCPPGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E621440)

inline static constexpr unsigned int CPNCCCPPGEO_TypeDefinitionIndex = 94766;

class CPNCCCPPGEO : public ::CGGLJLECNJM
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KLELKLHEGOF; // 0x20
	::System::Int32 MDPPNMIPDMP; // 0x28
	::System::Boolean KNAPBCANOKC; // 0x2C
	::System::Boolean MLBCLLPBAAK; // 0x2D
	::System::Boolean INCNJCDCDGL; // 0x2E
	::System::Byte _padding0[0x1];
	::System::UInt32 DIBGMOMCOMM; // 0x30
	::JGLIFHIAIEH CKPGOKHECCH; // 0x34
	::System::Int32 IIMEPIFKPCH; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCCCPPGEO__CTOR_OFFSET))(this);
	}
};
