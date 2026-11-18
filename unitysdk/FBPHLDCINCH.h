#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FBPHLDCINCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FBPHLDCINCH_EKAKMBAEOPP_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FBPHLDCINCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBPHLDCINCH_LDCLEFCBMIF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FBPHLDCINCH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AAF6B0)
#define FBPHLDCINCH_PCDCCNLBFOM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FBPHLDCINCH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FBPHLDCINCH_TypeDefinitionIndex = 15082;

struct alignas(4) FBPHLDCINCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPHLDCINCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBPHLDCINCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PCDCCNLBFOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPHLDCINCH_PCDCCNLBFOM_OFFSET))(this);
	}

	::System::Boolean LDCLEFCBMIF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FBPHLDCINCH_LDCLEFCBMIF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EKAKMBAEOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPHLDCINCH_EKAKMBAEOPP_OFFSET))(this);
	}

	/*
	::FBPHLDCINCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBPHLDCINCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBPHLDCINCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBPHLDCINCH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FBPHLDCINCH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FBPHLDCINCH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
