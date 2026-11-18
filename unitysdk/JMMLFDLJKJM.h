#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JMMLFDLJKJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMMLFDLJKJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMMLFDLJKJM_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JMMLFDLJKJM_LNACNEJFIFN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JMMLFDLJKJM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C2DD00)
#define JMMLFDLJKJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMMLFDLJKJM_TypeDefinitionIndex = 13485;

struct alignas(4) JMMLFDLJKJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMLFDLJKJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMMLFDLJKJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JMMLFDLJKJM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JMMLFDLJKJM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JMMLFDLJKJM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNACNEJFIFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMLFDLJKJM_LNACNEJFIFN_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMLFDLJKJM_HMPFPCCBKMJ_OFFSET))(this);
	}

	/*
	::JMMLFDLJKJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMMLFDLJKJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMMLFDLJKJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
