#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ABKHEKEMOCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ABKHEKEMOCI_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define ABKHEKEMOCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABKHEKEMOCI_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x762670)
#define ABKHEKEMOCI_MHGKCPOIHPM_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define ABKHEKEMOCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ABKHEKEMOCI_TypeDefinitionIndex = 14831;

struct alignas(4) ABKHEKEMOCI
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKHEKEMOCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABKHEKEMOCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MHGKCPOIHPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKHEKEMOCI_MHGKCPOIHPM_OFFSET))(this);
	}

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKHEKEMOCI_HMONBDBEFGE_OFFSET))(this);
	}

	/*
	::ABKHEKEMOCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABKHEKEMOCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABKHEKEMOCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKHEKEMOCI_ELKAHJACJNC_OFFSET))(this);
	}
};
