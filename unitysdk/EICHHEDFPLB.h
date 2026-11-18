#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EICHHEDFPLB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EICHHEDFPLB_ANKJIMPCCAC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EICHHEDFPLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EICHHEDFPLB_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x754970)
#define EICHHEDFPLB_DCDMEGDHFHL_OFFSET UNITYSDK_OFFSET(0x754920)
#define EICHHEDFPLB_FOCAPMBKPDH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EICHHEDFPLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EICHHEDFPLB_GGDEHDIMLKF_OFFSET UNITYSDK_OFFSET(0x756220)
#define EICHHEDFPLB_IKMJJNECFGP_OFFSET UNITYSDK_OFFSET(0x758780)
#define EICHHEDFPLB_JOPODLMCDAM_OFFSET UNITYSDK_OFFSET(0x757190)
#define EICHHEDFPLB_KOMKAPMCPCC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EICHHEDFPLB_LECHECGGPHA_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define EICHHEDFPLB_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EICHHEDFPLB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EICHHEDFPLB_TypeDefinitionIndex = 12475;

struct alignas(4) EICHHEDFPLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EICHHEDFPLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean LECHECGGPHA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EICHHEDFPLB_LECHECGGPHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KOMKAPMCPCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_KOMKAPMCPCC_OFFSET))(this);
	}

	::System::Int32 DCDMEGDHFHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_DCDMEGDHFHL_OFFSET))(this);
	}

	::System::Int32 LFPFCAFBOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 ANKJIMPCCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_ANKJIMPCCAC_OFFSET))(this);
	}

	::System::String* JOPODLMCDAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_JOPODLMCDAM_OFFSET))(this);
	}

	/*
	::EICHHEDFPLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EICHHEDFPLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EICHHEDFPLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GGDEHDIMLKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_GGDEHDIMLKF_OFFSET))(this);
	}

	::System::Int32 FOCAPMBKPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_FOCAPMBKPDH_OFFSET))(this);
	}

	::System::Int32 IKMJJNECFGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICHHEDFPLB_IKMJJNECFGP_OFFSET))(this);
	}
};
