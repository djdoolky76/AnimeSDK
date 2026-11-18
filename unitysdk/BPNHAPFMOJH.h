#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BPNHAPFMOJH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BPNHAPFMOJH_APEDOOABNHP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BPNHAPFMOJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BPNHAPFMOJH_BPJHHGMJACP_OFFSET UNITYSDK_OFFSET(0x757190)
#define BPNHAPFMOJH_EMGAGJKEHBE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BPNHAPFMOJH_FOFDJDFAKNK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BPNHAPFMOJH_FPKEBNEDAKL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define BPNHAPFMOJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPNHAPFMOJH_JGKOECCLKBI_OFFSET UNITYSDK_OFFSET(0x754970)
#define BPNHAPFMOJH_LDKFEHOHPDM_OFFSET UNITYSDK_OFFSET(0x757290)
#define BPNHAPFMOJH_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754920)
#define BPNHAPFMOJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BPNHAPFMOJH_TypeDefinitionIndex = 17128;

struct alignas(4) BPNHAPFMOJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPNHAPFMOJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_ONFGLHFDEED_OFFSET))(this);
	}

	::System::String* FPKEBNEDAKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_FPKEBNEDAKL_OFFSET))(this);
	}

	::System::Int32 JGKOECCLKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_JGKOECCLKBI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* EMGAGJKEHBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_EMGAGJKEHBE_OFFSET))(this);
	}

	::System::Int32 FOFDJDFAKNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_FOFDJDFAKNK_OFFSET))(this);
	}

	::System::String* LDKFEHOHPDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_LDKFEHOHPDM_OFFSET))(this);
	}

	::System::String* BPJHHGMJACP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_BPJHHGMJACP_OFFSET))(this);
	}

	::System::Int32 APEDOOABNHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_APEDOOABNHP_OFFSET))(this);
	}

	/*
	::BPNHAPFMOJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPNHAPFMOJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPNHAPFMOJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
