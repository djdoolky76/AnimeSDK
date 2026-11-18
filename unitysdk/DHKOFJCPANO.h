#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DHKOFJCPANO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DHKOFJCPANO_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DHKOFJCPANO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DHKOFJCPANO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DHKOFJCPANO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHKOFJCPANO_HOBFMMLPLGD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DHKOFJCPANO_NPEDOGCFCOJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define DHKOFJCPANO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F3A200)
#define DHKOFJCPANO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DHKOFJCPANO_TypeDefinitionIndex = 15171;

struct alignas(4) DHKOFJCPANO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHKOFJCPANO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::DHKOFJCPANO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHKOFJCPANO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHKOFJCPANO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::String* HOBFMMLPLGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_HOBFMMLPLGD_OFFSET))(this);
	}

	/*
	static ::DHKOFJCPANO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DHKOFJCPANO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DHKOFJCPANO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NPEDOGCFCOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKOFJCPANO_NPEDOGCFCOJ_OFFSET))(this);
	}
};
