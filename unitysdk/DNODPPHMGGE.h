#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DNODPPHMGGE_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNODPPHMGGE_BEKPAPICPAM_OFFSET UNITYSDK_OFFSET(0x754970)
#define DNODPPHMGGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNODPPHMGGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNODPPHMGGE_JIAMCPIGBND_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DNODPPHMGGE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9AC650)
#define DNODPPHMGGE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNODPPHMGGE_TypeDefinitionIndex = 13072;

struct alignas(4) DNODPPHMGGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNODPPHMGGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNODPPHMGGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DNODPPHMGGE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DNODPPHMGGE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DNODPPHMGGE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNODPPHMGGE_AEAJPKILALJ_OFFSET))(this);
	}

	::System::String* JIAMCPIGBND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNODPPHMGGE_JIAMCPIGBND_OFFSET))(this);
	}

	/*
	::DNODPPHMGGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNODPPHMGGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNODPPHMGGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEKPAPICPAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNODPPHMGGE_BEKPAPICPAM_OFFSET))(this);
	}
};
