#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LIPALAIEECF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LIPALAIEECF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LIPALAIEECF_DGCLDCALFMI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LIPALAIEECF_DNJPHNAOBDF_OFFSET UNITYSDK_OFFSET(0x754920)
#define LIPALAIEECF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIPALAIEECF_IEMIFEOMGPD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LIPALAIEECF_KFDJDPLPIOI_OFFSET UNITYSDK_OFFSET(0x754970)
#define LIPALAIEECF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BB0FA30)
#define LIPALAIEECF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LIPALAIEECF_TypeDefinitionIndex = 10713;

struct alignas(4) LIPALAIEECF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIPALAIEECF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::LIPALAIEECF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LIPALAIEECF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LIPALAIEECF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNJPHNAOBDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_DNJPHNAOBDF_OFFSET))(this);
	}

	::System::Int32 IEMIFEOMGPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_IEMIFEOMGPD_OFFSET))(this);
	}

	/*
	::LIPALAIEECF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIPALAIEECF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIPALAIEECF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KFDJDPLPIOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_KFDJDPLPIOI_OFFSET))(this);
	}

	::System::Int32 DGCLDCALFMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPALAIEECF_DGCLDCALFMI_OFFSET))(this);
	}
};
