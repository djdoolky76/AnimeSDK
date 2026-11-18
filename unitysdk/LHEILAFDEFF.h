#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHEILAFDEFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHEILAFDEFF_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHEILAFDEFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHEILAFDEFF_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHEILAFDEFF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B64EAF0)
#define LHEILAFDEFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHEILAFDEFF_TypeDefinitionIndex = 13305;

struct alignas(4) LHEILAFDEFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEILAFDEFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHEILAFDEFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LHEILAFDEFF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHEILAFDEFF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHEILAFDEFF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LHEILAFDEFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHEILAFDEFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHEILAFDEFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEILAFDEFF_NPAFPHDAPMI_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEILAFDEFF_EHEDNGGDAKF_OFFSET))(this);
	}
};
