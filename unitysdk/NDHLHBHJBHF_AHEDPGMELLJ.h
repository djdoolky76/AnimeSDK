#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDOLCBBOINH.h"
#include "unitysdk/KIPDFGJHIKA.h"
#include "unitysdk/System/ValueType.h"

class FDABFGBJMAD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDHLHBHJBHF_AHEDPGMELLJ_BHJDAKIGCIL_OFFSET UNITYSDK_OFFSET(0x6EF1F0)

inline static constexpr unsigned int NDHLHBHJBHF_AHEDPGMELLJ_TypeDefinitionIndex = 61983;

struct alignas(8) NDHLHBHJBHF_AHEDPGMELLJ
{
	::System::Int32 KBAMOLIPODI; // 0x10
	::KIPDFGJHIKA KNCEAFPGDHM; // 0x14
	::System::Int32 MLLDFLPLHID; // 0x18
	::JDOLCBBOINH NPMKHJIFFBH; // 0x1C
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::JDOLCBBOINH>* AEAFLLDMMPH; // 0x28
	::System::UInt64 BOABIGOMKPP; // 0x30

	::FDABFGBJMAD* BHJDAKIGCIL()
	{
		return ((::FDABFGBJMAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHLHBHJBHF_AHEDPGMELLJ_BHJDAKIGCIL_OFFSET))(this);
	}
};
