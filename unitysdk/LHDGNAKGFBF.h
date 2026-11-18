#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define LHDGNAKGFBF_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x14DACA60)

inline static constexpr unsigned int LHDGNAKGFBF_TypeDefinitionIndex = 71618;

struct alignas(8) LHDGNAKGFBF
{
	::PONEGOPCLPF HFOCCMLCJEI; // 0x10
	::System::Byte _padding0[0x4];
	::System::Object* JMINOGAOFIL; // 0x18

	/*
	static ::LHDGNAKGFBF FDJHEBHLJLD(::PONEGOPCLPF CKBPCCGOFKK)
	{
		return ((::LHDGNAKGFBF(*)(::PONEGOPCLPF))((::PBYTE)hIl2Cpp + LHDGNAKGFBF_FDJHEBHLJLD_OFFSET))(CKBPCCGOFKK);
	}
	*/
};
