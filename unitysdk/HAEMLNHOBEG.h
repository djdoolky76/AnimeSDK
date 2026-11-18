#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HAEMLNHOBEG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HAEMLNHOBEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HAEMLNHOBEG_EPDEAFAAIOK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HAEMLNHOBEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAEMLNHOBEG_LEKDFNIFOFO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HAEMLNHOBEG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAD3B30)
#define HAEMLNHOBEG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HAEMLNHOBEG_TypeDefinitionIndex = 12319;

struct alignas(4) HAEMLNHOBEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAEMLNHOBEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LEKDFNIFOFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_LEKDFNIFOFO_OFFSET))(this);
	}

	/*
	static ::HAEMLNHOBEG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HAEMLNHOBEG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HAEMLNHOBEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAEMLNHOBEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EPDEAFAAIOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEMLNHOBEG_EPDEAFAAIOK_OFFSET))(this);
	}
};
