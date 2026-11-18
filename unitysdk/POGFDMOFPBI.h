#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define POGFDMOFPBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POGFDMOFPBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POGFDMOFPBI_JFDHOHJBKMI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define POGFDMOFPBI_LDJFMFMFLEN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define POGFDMOFPBI_LKPJHNGIDNI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POGFDMOFPBI_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define POGFDMOFPBI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF93F70)
#define POGFDMOFPBI_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define POGFDMOFPBI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POGFDMOFPBI_TypeDefinitionIndex = 13960;

struct alignas(4) POGFDMOFPBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGFDMOFPBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JFDHOHJBKMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_JFDHOHJBKMI_OFFSET))(this);
	}

	::System::Int32 LDJFMFMFLEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_LDJFMFMFLEN_OFFSET))(this);
	}

	::System::Single LNHLCEJBOIN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_LNHLCEJBOIN_OFFSET))(this);
	}

	::System::Int32 LKPJHNGIDNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_LKPJHNGIDNI_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POGFDMOFPBI_PDAADHDFGKP_OFFSET))(this);
	}

	/*
	static ::POGFDMOFPBI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POGFDMOFPBI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POGFDMOFPBI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::POGFDMOFPBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGFDMOFPBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGFDMOFPBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
