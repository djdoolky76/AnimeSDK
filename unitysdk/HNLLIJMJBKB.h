#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HNLLIJMJBKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNLLIJMJBKB_DJNEBKBNGIG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HNLLIJMJBKB_DOMPONFOCMN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HNLLIJMJBKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNLLIJMJBKB_IKLKKJOMOJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HNLLIJMJBKB_LCKOJCDNCAI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HNLLIJMJBKB_MHGKCPOIHPM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HNLLIJMJBKB_OCCECMAEPJF_OFFSET UNITYSDK_OFFSET(0x757290)
#define HNLLIJMJBKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNLLIJMJBKB_TypeDefinitionIndex = 15074;

struct alignas(4) HNLLIJMJBKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLLIJMJBKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HNLLIJMJBKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNLLIJMJBKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IKLKKJOMOJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_IKLKKJOMOJD_OFFSET))(this);
	}

	::System::String* MHGKCPOIHPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_MHGKCPOIHPM_OFFSET))(this);
	}

	::System::Int32 DJNEBKBNGIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_DJNEBKBNGIG_OFFSET))(this);
	}

	::System::String* LCKOJCDNCAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_LCKOJCDNCAI_OFFSET))(this);
	}

	::System::String* DOMPONFOCMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_DOMPONFOCMN_OFFSET))(this);
	}

	::System::String* OCCECMAEPJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLLIJMJBKB_OCCECMAEPJF_OFFSET))(this);
	}
};
