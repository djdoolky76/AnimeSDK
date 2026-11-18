#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/KBAMEMJALCF.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PGDOGKAPDDF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PGDOGKAPDDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PGDOGKAPDDF_BJLOCCLAGIC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PGDOGKAPDDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGDOGKAPDDF_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PGDOGKAPDDF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE00AA0)
#define PGDOGKAPDDF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PGDOGKAPDDF_TypeDefinitionIndex = 12403;

struct alignas(4) PGDOGKAPDDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGDOGKAPDDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PGDOGKAPDDF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PGDOGKAPDDF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PGDOGKAPDDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGDOGKAPDDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_GPBFENDAJMF_OFFSET))(this);
	}

	::KBAMEMJALCF BJLOCCLAGIC()
	{
		return ((::KBAMEMJALCF(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_BJLOCCLAGIC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDOGKAPDDF_ACOEONABOJL_OFFSET))(this);
	}
};
