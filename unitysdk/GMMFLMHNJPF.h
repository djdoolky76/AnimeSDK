#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GMMFLMHNJPF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GMMFLMHNJPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GMMFLMHNJPF_DKNGKPHGCEL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define GMMFLMHNJPF_FBHFDGPJAKD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GMMFLMHNJPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMMFLMHNJPF_HGMEEMPBFBG_OFFSET UNITYSDK_OFFSET(0x754C20)
#define GMMFLMHNJPF_IOBKOMIMHBL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GMMFLMHNJPF_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GMMFLMHNJPF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAD0710)
#define GMMFLMHNJPF_PIHGHHFEHED_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GMMFLMHNJPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GMMFLMHNJPF_TypeDefinitionIndex = 12135;

struct alignas(4) GMMFLMHNJPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMMFLMHNJPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PIHGHHFEHED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_PIHGHHFEHED_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* IOBKOMIMHBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_IOBKOMIMHBL_OFFSET))(this);
	}

	::System::Boolean DKNGKPHGCEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_DKNGKPHGCEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FBHFDGPJAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_FBHFDGPJAKD_OFFSET))(this);
	}

	/*
	static ::GMMFLMHNJPF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GMMFLMHNJPF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HGMEEMPBFBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_HGMEEMPBFBG_OFFSET))(this);
	}

	/*
	::GMMFLMHNJPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMMFLMHNJPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMMFLMHNJPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
