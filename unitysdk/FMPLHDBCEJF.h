#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FMPLHDBCEJF_AFOGBDCMPNF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FMPLHDBCEJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMPLHDBCEJF_DDKKJOFODIP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FMPLHDBCEJF_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMPLHDBCEJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMPLHDBCEJF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B8639C0)
#define FMPLHDBCEJF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMPLHDBCEJF_TypeDefinitionIndex = 13561;

struct alignas(4) FMPLHDBCEJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMPLHDBCEJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DDKKJOFODIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_DDKKJOFODIP_OFFSET))(this);
	}

	/*
	::FMPLHDBCEJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMPLHDBCEJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FMPLHDBCEJF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMPLHDBCEJF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* AFOGBDCMPNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_AFOGBDCMPNF_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPLHDBCEJF_FJPGCNGHHCC_OFFSET))(this);
	}
};
