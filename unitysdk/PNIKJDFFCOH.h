#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNIKJDFFCOH_AINPNKMAAJL_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PNIKJDFFCOH_BHCDFCAIBFL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PNIKJDFFCOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNIKJDFFCOH_EOHACGGOFJF_OFFSET UNITYSDK_OFFSET(0x761240)
#define PNIKJDFFCOH_FBJKHJMHCLL_OFFSET UNITYSDK_OFFSET(0x754970)
#define PNIKJDFFCOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNIKJDFFCOH_IOOACJPAGDJ_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define PNIKJDFFCOH_KPCIPEEDPDM_OFFSET UNITYSDK_OFFSET(0x754920)
#define PNIKJDFFCOH_MIBBANDBGPH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define PNIKJDFFCOH_NIFBJKELLCE_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PNIKJDFFCOH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1FC234D0)
#define PNIKJDFFCOH_PCIGKALFGOI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNIKJDFFCOH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNIKJDFFCOH_TypeDefinitionIndex = 10367;

struct alignas(4) PNIKJDFFCOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIKJDFFCOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PCIGKALFGOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_PCIGKALFGOI_OFFSET))(this);
	}

	::System::Int32 BHCDFCAIBFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_BHCDFCAIBFL_OFFSET))(this);
	}

	::System::Int32 KPCIPEEDPDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_KPCIPEEDPDM_OFFSET))(this);
	}

	::System::Int32 MIBBANDBGPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_MIBBANDBGPH_OFFSET))(this);
	}

	/*
	::PNIKJDFFCOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNIKJDFFCOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EOHACGGOFJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_EOHACGGOFJF_OFFSET))(this);
	}

	::System::String* NIFBJKELLCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_NIFBJKELLCE_OFFSET))(this);
	}

	::System::Boolean IOOACJPAGDJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_IOOACJPAGDJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PNIKJDFFCOH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNIKJDFFCOH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FBJKHJMHCLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_FBJKHJMHCLL_OFFSET))(this);
	}

	::System::Boolean AINPNKMAAJL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIKJDFFCOH_AINPNKMAAJL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
