#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHIDKNOBNBI_ACBAKIPCMLJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NHIDKNOBNBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHIDKNOBNBI_BHPCKBLDFPP_OFFSET UNITYSDK_OFFSET(0x7EA2E0)
#define NHIDKNOBNBI_CMEMDMGMLGF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NHIDKNOBNBI_FGNHGIONNLM_OFFSET UNITYSDK_OFFSET(0x7D74A0)
#define NHIDKNOBNBI_FHNJELHKDHG_OFFSET UNITYSDK_OFFSET(0x757290)
#define NHIDKNOBNBI_FNKLFLMINBB_OFFSET UNITYSDK_OFFSET(0x7A5BD0)
#define NHIDKNOBNBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHIDKNOBNBI_GOEONMJDACM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NHIDKNOBNBI_HEKBGIDIFKN_OFFSET UNITYSDK_OFFSET(0x7E4710)
#define NHIDKNOBNBI_KMCFAAOJMBA_OFFSET UNITYSDK_OFFSET(0x7B51B0)
#define NHIDKNOBNBI_KNFCIOCPFAG_OFFSET UNITYSDK_OFFSET(0x7577E0)
#define NHIDKNOBNBI_KONGPFFCKLC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NHIDKNOBNBI_LAEFBBNMGPK_OFFSET UNITYSDK_OFFSET(0x7A7F80)
#define NHIDKNOBNBI_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NHIDKNOBNBI_LOGCMEHMAAI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NHIDKNOBNBI_NKIKMBPEFEI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NHIDKNOBNBI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB177A0)
#define NHIDKNOBNBI_OKLAOKBFANM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHIDKNOBNBI_PCKINKNFKCK_OFFSET UNITYSDK_OFFSET(0x7A5C20)
#define NHIDKNOBNBI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHIDKNOBNBI_TypeDefinitionIndex = 14514;

struct alignas(4) NHIDKNOBNBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHIDKNOBNBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FHNJELHKDHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_FHNJELHKDHG_OFFSET))(this);
	}

	::System::Int32 NKIKMBPEFEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_NKIKMBPEFEI_OFFSET))(this);
	}

	::System::Single LAEFBBNMGPK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_LAEFBBNMGPK_OFFSET))(this);
	}

	::System::Single FGNHGIONNLM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_FGNHGIONNLM_OFFSET))(this);
	}

	/*
	static ::NHIDKNOBNBI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHIDKNOBNBI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GOEONMJDACM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_GOEONMJDACM_OFFSET))(this);
	}

	::System::Single FNKLFLMINBB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_FNKLFLMINBB_OFFSET))(this);
	}

	::System::String* KONGPFFCKLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_KONGPFFCKLC_OFFSET))(this);
	}

	::System::Int32 OKLAOKBFANM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_OKLAOKBFANM_OFFSET))(this);
	}

	::System::Single PCKINKNFKCK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_PCKINKNFKCK_OFFSET))(this);
	}

	/*
	::NHIDKNOBNBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHIDKNOBNBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single HEKBGIDIFKN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_HEKBGIDIFKN_OFFSET))(this);
	}

	::System::String* LOGCMEHMAAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_LOGCMEHMAAI_OFFSET))(this);
	}

	::System::String* LGMMAGPFDMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::Single BHPCKBLDFPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_BHPCKBLDFPP_OFFSET))(this);
	}

	::System::Single KNFCIOCPFAG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_KNFCIOCPFAG_OFFSET))(this);
	}

	::System::Single KMCFAAOJMBA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_KMCFAAOJMBA_OFFSET))(this);
	}

	::System::String* ACBAKIPCMLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_ACBAKIPCMLJ_OFFSET))(this);
	}

	::System::String* CMEMDMGMLGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIDKNOBNBI_CMEMDMGMLGF_OFFSET))(this);
	}
};
