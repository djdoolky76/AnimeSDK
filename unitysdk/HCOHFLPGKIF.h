#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HCOHFLPGKIF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCOHFLPGKIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCOHFLPGKIF_DNKCABNJIMD_OFFSET UNITYSDK_OFFSET(0x7DEBE0)
#define HCOHFLPGKIF_GBDOMCLBFEE_OFFSET UNITYSDK_OFFSET(0x7DEB90)
#define HCOHFLPGKIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCOHFLPGKIF_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x754970)
#define HCOHFLPGKIF_IEPGHDNFDLN_OFFSET UNITYSDK_OFFSET(0x754920)
#define HCOHFLPGKIF_LPBHIMIGCDI_OFFSET UNITYSDK_OFFSET(0x78A030)
#define HCOHFLPGKIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1933E050)
#define HCOHFLPGKIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCOHFLPGKIF_TypeDefinitionIndex = 16580;

struct alignas(4) HCOHFLPGKIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCOHFLPGKIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HCOHFLPGKIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCOHFLPGKIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HDAGGDKMDAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::HCOHFLPGKIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCOHFLPGKIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::GPJMHAAEIKO GBDOMCLBFEE()
	{
		return ((::GPJMHAAEIKO(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_GBDOMCLBFEE_OFFSET))(this);
	}

	::NCJLKIIGPIC DNKCABNJIMD()
	{
		return ((::NCJLKIIGPIC(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_DNKCABNJIMD_OFFSET))(this);
	}

	::System::Single LPBHIMIGCDI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_LPBHIMIGCDI_OFFSET))(this);
	}

	::System::Int32 IEPGHDNFDLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHFLPGKIF_IEPGHDNFDLN_OFFSET))(this);
	}
};
