#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PHEHHNIDLBF_ABJBALKOCOP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PHEHHNIDLBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PHEHHNIDLBF_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PHEHHNIDLBF_DEHMEKHOEEP_OFFSET UNITYSDK_OFFSET(0x77A750)
#define PHEHHNIDLBF_FBPDDKPBBPB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PHEHHNIDLBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHEHHNIDLBF_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754920)
#define PHEHHNIDLBF_HOCEKPGMCPF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PHEHHNIDLBF_MGKONPMFAGD_OFFSET UNITYSDK_OFFSET(0x757290)
#define PHEHHNIDLBF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE01730)
#define PHEHHNIDLBF_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PHEHHNIDLBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PHEHHNIDLBF_TypeDefinitionIndex = 10483;

struct alignas(4) PHEHHNIDLBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHEHHNIDLBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* MGKONPMFAGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_MGKONPMFAGD_OFFSET))(this);
	}

	::System::String* FBPDDKPBBPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_FBPDDKPBBPB_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_GKBAJJACIEA_OFFSET))(this);
	}

	::System::UInt64 DEHMEKHOEEP()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_DEHMEKHOEEP_OFFSET))(this);
	}

	::System::Int32 ABJBALKOCOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_ABJBALKOCOP_OFFSET))(this);
	}

	/*
	::PHEHHNIDLBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHEHHNIDLBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHEHHNIDLBF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PHEHHNIDLBF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HOCEKPGMCPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_HOCEKPGMCPF_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHHNIDLBF_BLFKNELJFFB_OFFSET))(this);
	}
};
