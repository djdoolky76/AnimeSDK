#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JBOGCDEGFKE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JBOGCDEGFKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JBOGCDEGFKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBOGCDEGFKE_IMCLPFDIFOD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JBOGCDEGFKE_NKIKFLIOOFC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JBOGCDEGFKE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7D8830)
#define JBOGCDEGFKE_PGLHDOBJIIN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JBOGCDEGFKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JBOGCDEGFKE_TypeDefinitionIndex = 9428;

struct alignas(4) JBOGCDEGFKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBOGCDEGFKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JBOGCDEGFKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBOGCDEGFKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JBOGCDEGFKE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JBOGCDEGFKE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IMCLPFDIFOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_IMCLPFDIFOD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NKIKFLIOOFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_NKIKFLIOOFC_OFFSET))(this);
	}

	::System::String* PGLHDOBJIIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOGCDEGFKE_PGLHDOBJIIN_OFFSET))(this);
	}
};
