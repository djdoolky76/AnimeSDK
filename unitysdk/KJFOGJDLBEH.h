#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KJFOGJDLBEH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KJFOGJDLBEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KJFOGJDLBEH_COAGNEAEAAD_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define KJFOGJDLBEH_DBMDNLFLOHC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KJFOGJDLBEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJFOGJDLBEH_JPHFPNBKPLE_OFFSET UNITYSDK_OFFSET(0x755790)
#define KJFOGJDLBEH_NBCFMMIBLMC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KJFOGJDLBEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KJFOGJDLBEH_TypeDefinitionIndex = 11484;

struct alignas(4) KJFOGJDLBEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJFOGJDLBEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KJFOGJDLBEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJFOGJDLBEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JPHFPNBKPLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_JPHFPNBKPLE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NBCFMMIBLMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_NBCFMMIBLMC_OFFSET))(this);
	}

	::System::Boolean COAGNEAEAAD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_COAGNEAEAAD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DBMDNLFLOHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFOGJDLBEH_DBMDNLFLOHC_OFFSET))(this);
	}
};
