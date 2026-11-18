#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class LIGAMJHMAFI;
namespace System { class String; }

#define FJNOCLDMOBN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x774F90)
#define FJNOCLDMOBN_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x15E67A30)
#define FJNOCLDMOBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x774F80)

inline static constexpr unsigned int FJNOCLDMOBN_TypeDefinitionIndex = 78060;

struct alignas(8) FJNOCLDMOBN
{
	::LIGAMJHMAFI* NNDEEFMIGOM; // 0x10
	::System::Int32 ECPBEJKFMOJ; // 0x18
	::System::Boolean JDAGKAMAGAK; // 0x1C
	::System::Boolean OMPBJBPNODE; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Int32 HLBKHEFJAPH; // 0x20
	::System::UInt32 OMEKLHOFFEM; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNOCLDMOBN_TOSTRING_OFFSET))(this);
	}

	/*
	static ::FJNOCLDMOBN LOGMNFFOOCB()
	{
		return ((::FJNOCLDMOBN(*)())((::PBYTE)hIl2Cpp + FJNOCLDMOBN_LOGMNFFOOCB_OFFSET))();
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNOCLDMOBN_DPIHOJBBGLA_OFFSET))(this);
	}
};
