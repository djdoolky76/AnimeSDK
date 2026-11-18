#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OMPBJPFCPFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMPBJPFCPFH_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define OMPBJPFCPFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMPBJPFCPFH_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define OMPBJPFCPFH_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x762670)
#define OMPBJPFCPFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMPBJPFCPFH_TypeDefinitionIndex = 15454;

struct alignas(4) OMPBJPFCPFH
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPBJPFCPFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMPBJPFCPFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPBJPFCPFH_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPBJPFCPFH_ELKAHJACJNC_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPBJPFCPFH_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::OMPBJPFCPFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMPBJPFCPFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMPBJPFCPFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
