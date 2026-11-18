#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class NKHOMMGFIFO;

inline static constexpr unsigned int AGFLLIBLPKH_TypeDefinitionIndex = 46794;

struct alignas(8) AGFLLIBLPKH
{
	::System::Int16 LFDNAFIMEBI; // 0x10
	::System::Byte _padding0[0x6];
	::System::Int64 KEPCOKCMEDA; // 0x18
	::NKHOMMGFIFO* DEKJDEPKKLH; // 0x20
};
