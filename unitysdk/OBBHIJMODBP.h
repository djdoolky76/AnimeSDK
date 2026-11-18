#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OBBHIJMODBP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBBHIJMODBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBBHIJMODBP_CDJJPNEPGMO_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OBBHIJMODBP_DBKCLDCIDHH_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OBBHIJMODBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBBHIJMODBP_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OBBHIJMODBP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBBHIJMODBP_TypeDefinitionIndex = 14621;

struct alignas(4) OBBHIJMODBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBHIJMODBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBBHIJMODBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBHIJMODBP_IMFELMMICNE_OFFSET))(this);
	}

	/*
	::OBBHIJMODBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBBHIJMODBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBBHIJMODBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBHIJMODBP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean CDJJPNEPGMO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OBBHIJMODBP_CDJJPNEPGMO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DBKCLDCIDHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBHIJMODBP_DBKCLDCIDHH_OFFSET))(this);
	}
};
