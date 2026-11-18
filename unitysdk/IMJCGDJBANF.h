#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IMJCGDJBANF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMJCGDJBANF_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IMJCGDJBANF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMJCGDJBANF_GJCLOMGJKIB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMJCGDJBANF_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IMJCGDJBANF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5E29D0)
#define IMJCGDJBANF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMJCGDJBANF_TypeDefinitionIndex = 16290;

struct alignas(4) IMJCGDJBANF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJCGDJBANF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJCGDJBANF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJCGDJBANF_MHKKOFEKPHI_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJCGDJBANF_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	static ::IMJCGDJBANF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IMJCGDJBANF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IMJCGDJBANF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::IMJCGDJBANF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMJCGDJBANF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJCGDJBANF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GJCLOMGJKIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJCGDJBANF_GJCLOMGJKIB_OFFSET))(this);
	}
};
