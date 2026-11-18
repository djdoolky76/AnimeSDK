#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FAEJGDEGEFP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FAEJGDEGEFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FAEJGDEGEFP_CPHFPGPNHGK_OFFSET UNITYSDK_OFFSET(0x755790)
#define FAEJGDEGEFP_DBLOJMIEOEJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FAEJGDEGEFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAEJGDEGEFP_JCOAGIKHDJH_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define FAEJGDEGEFP_KANHKDKJKIM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FAEJGDEGEFP_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FAEJGDEGEFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FAEJGDEGEFP_TypeDefinitionIndex = 12714;

struct alignas(4) FAEJGDEGEFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAEJGDEGEFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KANHKDKJKIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_KANHKDKJKIM_OFFSET))(this);
	}

	/*
	::FAEJGDEGEFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAEJGDEGEFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DBLOJMIEOEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_DBLOJMIEOEJ_OFFSET))(this);
	}

	::System::Boolean JCOAGIKHDJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_JCOAGIKHDJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CPHFPGPNHGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_CPHFPGPNHGK_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEJGDEGEFP_LPFMNKEFPMM_OFFSET))(this);
	}
};
