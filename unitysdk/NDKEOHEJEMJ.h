#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NDKEOHEJEMJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDKEOHEJEMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDKEOHEJEMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDKEOHEJEMJ_GLDAHKGLMHJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NDKEOHEJEMJ_HBNKNBKLDAJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NDKEOHEJEMJ_ILJJKAPDFJF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NDKEOHEJEMJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCE9110)
#define NDKEOHEJEMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDKEOHEJEMJ_TypeDefinitionIndex = 15627;

struct alignas(4) NDKEOHEJEMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ILJJKAPDFJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_ILJJKAPDFJF_OFFSET))(this);
	}

	::System::String* HBNKNBKLDAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_HBNKNBKLDAJ_OFFSET))(this);
	}

	/*
	::NDKEOHEJEMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDKEOHEJEMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GLDAHKGLMHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_GLDAHKGLMHJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::NDKEOHEJEMJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDKEOHEJEMJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDKEOHEJEMJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
