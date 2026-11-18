#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JNNMFODGJBO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JNNMFODGJBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JNNMFODGJBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNNMFODGJBO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1611C740)
#define JNNMFODGJBO_OJEOOEJLLLA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JNNMFODGJBO_PHBKIDJMCIE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JNNMFODGJBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JNNMFODGJBO_TypeDefinitionIndex = 13863;

struct alignas(4) JNNMFODGJBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNMFODGJBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNNMFODGJBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNMFODGJBO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* OJEOOEJLLLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNMFODGJBO_OJEOOEJLLLA_OFFSET))(this);
	}

	/*
	::JNNMFODGJBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNNMFODGJBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNNMFODGJBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JNNMFODGJBO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JNNMFODGJBO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JNNMFODGJBO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PHBKIDJMCIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNMFODGJBO_PHBKIDJMCIE_OFFSET))(this);
	}
};
