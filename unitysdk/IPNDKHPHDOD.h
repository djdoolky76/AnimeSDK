#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPNDKHPHDOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPNDKHPHDOD_CPICMBJBLNN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPNDKHPHDOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPNDKHPHDOD_GJFJEMEFDIC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IPNDKHPHDOD_LNFFOBFGKEE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IPNDKHPHDOD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19545250)
#define IPNDKHPHDOD_OBBOKGCPPPH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IPNDKHPHDOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPNDKHPHDOD_TypeDefinitionIndex = 16595;

struct alignas(4) IPNDKHPHDOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPNDKHPHDOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CPICMBJBLNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_CPICMBJBLNN_OFFSET))(this);
	}

	/*
	static ::IPNDKHPHDOD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 IJPOILCBKEL, ::System::Int32 KEMLJBIKNPF, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IPNDKHPHDOD(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, IJPOILCBKEL, KEMLJBIKNPF, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GJFJEMEFDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_GJFJEMEFDIC_OFFSET))(this);
	}

	::System::String* LNFFOBFGKEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_LNFFOBFGKEE_OFFSET))(this);
	}

	::System::Int32 OBBOKGCPPPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_OBBOKGCPPPH_OFFSET))(this);
	}

	/*
	::IPNDKHPHDOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPNDKHPHDOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPNDKHPHDOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
