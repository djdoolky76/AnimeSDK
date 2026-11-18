#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DCKMBDMCHHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DCKMBDMCHHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCKMBDMCHHF_HCIPFKPLNLA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DCKMBDMCHHF_IPOBNOEHJND_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DCKMBDMCHHF_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DCKMBDMCHHF_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DCKMBDMCHHF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18795F20)
#define DCKMBDMCHHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DCKMBDMCHHF_TypeDefinitionIndex = 15203;

struct alignas(4) DCKMBDMCHHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCKMBDMCHHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HCIPFKPLNLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_HCIPFKPLNLA_OFFSET))(this);
	}

	/*
	::DCKMBDMCHHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCKMBDMCHHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IPOBNOEHJND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_IPOBNOEHJND_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_MFPMIFLLCAJ_OFFSET))(this);
	}

	/*
	static ::DCKMBDMCHHF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DCKMBDMCHHF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKMBDMCHHF_NGKOPBCHFOP_OFFSET))(this);
	}
};
