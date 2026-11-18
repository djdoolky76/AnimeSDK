#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PFDCOILIGIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PFDCOILIGIO_EKBEIICFBEE_OFFSET UNITYSDK_OFFSET(0x754970)
#define PFDCOILIGIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFDCOILIGIO_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PFDCOILIGIO_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PFDCOILIGIO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1913FE10)
#define PFDCOILIGIO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PFDCOILIGIO_TypeDefinitionIndex = 13849;

struct alignas(4) PFDCOILIGIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDCOILIGIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDCOILIGIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PFDCOILIGIO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PFDCOILIGIO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PFDCOILIGIO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PFDCOILIGIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFDCOILIGIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFDCOILIGIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDCOILIGIO_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 EKBEIICFBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDCOILIGIO_EKBEIICFBEE_OFFSET))(this);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDCOILIGIO_JBOIMNAPIKG_OFFSET))(this);
	}
};
