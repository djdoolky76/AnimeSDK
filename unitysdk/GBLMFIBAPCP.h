#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class NKHOMMGFIFO;
namespace System { class String; }

inline static constexpr unsigned int GBLMFIBAPCP_TypeDefinitionIndex = 72887;

struct alignas(8) GBLMFIBAPCP
{
	::System::Int16 LFDNAFIMEBI; // 0x10
	::System::Byte _padding0[0x6];
	::System::Int64 KEPCOKCMEDA; // 0x18
	::NKHOMMGFIFO* MIJIHGJLCPC; // 0x20
	::System::String* MCANJJECBJC; // 0x28
};
