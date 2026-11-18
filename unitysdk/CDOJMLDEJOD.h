#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CDOJMLDEJOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDOJMLDEJOD_CAMOPELDCGC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDOJMLDEJOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDOJMLDEJOD_LCAHMDAHBAK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CDOJMLDEJOD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A84950)
#define CDOJMLDEJOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDOJMLDEJOD_TypeDefinitionIndex = 16783;

struct alignas(4) CDOJMLDEJOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOJMLDEJOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDOJMLDEJOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LCAHMDAHBAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOJMLDEJOD_LCAHMDAHBAK_OFFSET))(this);
	}

	/*
	::CDOJMLDEJOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDOJMLDEJOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDOJMLDEJOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDOJMLDEJOD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDOJMLDEJOD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDOJMLDEJOD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CAMOPELDCGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOJMLDEJOD_CAMOPELDCGC_OFFSET))(this);
	}
};
