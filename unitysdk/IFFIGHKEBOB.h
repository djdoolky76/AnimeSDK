#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IFFIGHKEBOB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IFFIGHKEBOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFFIGHKEBOB_CBOJINLAEHG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IFFIGHKEBOB_DBKECJLCKBP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define IFFIGHKEBOB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754920)
#define IFFIGHKEBOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFFIGHKEBOB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define IFFIGHKEBOB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C1B260)
#define IFFIGHKEBOB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFFIGHKEBOB_TypeDefinitionIndex = 10052;

struct alignas(4) IFFIGHKEBOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFFIGHKEBOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IFFIGHKEBOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFFIGHKEBOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFFIGHKEBOB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IFFIGHKEBOB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 CBOJINLAEHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_CBOJINLAEHG_OFFSET))(this);
	}

	::System::String* DBKECJLCKBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_DBKECJLCKBP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFIGHKEBOB_HKELPCLHLEC_OFFSET))(this);
	}
};
