#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GFDPJKFGDDK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFDPJKFGDDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFDPJKFGDDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFDPJKFGDDK_GNACEPCGEHE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define GFDPJKFGDDK_LDAKKMIJLOG_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GFDPJKFGDDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1932D0E0)
#define GFDPJKFGDDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFDPJKFGDDK_TypeDefinitionIndex = 10479;

struct alignas(4) GFDPJKFGDDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDPJKFGDDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GFDPJKFGDDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDPJKFGDDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFDPJKFGDDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFDPJKFGDDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean GNACEPCGEHE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_GNACEPCGEHE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LDAKKMIJLOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDPJKFGDDK_LDAKKMIJLOG_OFFSET))(this);
	}
};
