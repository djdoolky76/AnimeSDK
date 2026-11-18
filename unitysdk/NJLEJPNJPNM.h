#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NJLEJPNJPNM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NJLEJPNJPNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NJLEJPNJPNM_DBPHNEBEJHN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define NJLEJPNJPNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJLEJPNJPNM_HAMHDOHDPOI_OFFSET UNITYSDK_OFFSET(0x761240)
#define NJLEJPNJPNM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1911DAE0)
#define NJLEJPNJPNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NJLEJPNJPNM_TypeDefinitionIndex = 14009;

struct alignas(4) NJLEJPNJPNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLEJPNJPNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NJLEJPNJPNM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NJLEJPNJPNM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HAMHDOHDPOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_HAMHDOHDPOI_OFFSET))(this);
	}

	/*
	::NJLEJPNJPNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLEJPNJPNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DBPHNEBEJHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NJLEJPNJPNM_DBPHNEBEJHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
