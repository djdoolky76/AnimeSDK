#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LJIIBLMEJCL_APIFDMEONHD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LJIIBLMEJCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJIIBLMEJCL_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LJIIBLMEJCL_CBAPGLCLKDN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJIIBLMEJCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJIIBLMEJCL_HBAHADBPFJC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LJIIBLMEJCL_LBKKONMCFNH_OFFSET UNITYSDK_OFFSET(0x754920)
#define LJIIBLMEJCL_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x757290)
#define LJIIBLMEJCL_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LJIIBLMEJCL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BB0FF40)
#define LJIIBLMEJCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJIIBLMEJCL_TypeDefinitionIndex = 11820;

struct alignas(4) LJIIBLMEJCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJIIBLMEJCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 APIFDMEONHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_APIFDMEONHD_OFFSET))(this);
	}

	::System::Int32 LBKKONMCFNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_LBKKONMCFNH_OFFSET))(this);
	}

	::System::Int32 CBAPGLCLKDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_CBAPGLCLKDN_OFFSET))(this);
	}

	/*
	::LJIIBLMEJCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJIIBLMEJCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HBAHADBPFJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_HBAHADBPFJC_OFFSET))(this);
	}

	::System::String* NEBLIFEABCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_NEBLIFEABCP_OFFSET))(this);
	}

	/*
	static ::LJIIBLMEJCL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LJIIBLMEJCL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIIBLMEJCL_LFPFCAFBOEK_OFFSET))(this);
	}
};
