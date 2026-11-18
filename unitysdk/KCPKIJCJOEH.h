#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KCPKIJCJOEH_ACECFFFKEIL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KCPKIJCJOEH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCPKIJCJOEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCPKIJCJOEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCPKIJCJOEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195790E0)
#define KCPKIJCJOEH_ONGFJFGOAAJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KCPKIJCJOEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCPKIJCJOEH_TypeDefinitionIndex = 14481;

struct alignas(4) KCPKIJCJOEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCPKIJCJOEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONGFJFGOAAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_ONGFJFGOAAJ_OFFSET))(this);
	}

	/*
	::KCPKIJCJOEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCPKIJCJOEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::KCPKIJCJOEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KCPKIJCJOEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ACECFFFKEIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPKIJCJOEH_ACECFFFKEIL_OFFSET))(this);
	}
};
