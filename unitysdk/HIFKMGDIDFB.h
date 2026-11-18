#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HIFKMGDIDFB_ABFDPJJPNHD_OFFSET UNITYSDK_OFFSET(0x755710)
#define HIFKMGDIDFB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HIFKMGDIDFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HIFKMGDIDFB_CAKCFDAMCHF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HIFKMGDIDFB_CLIDOAGHCPD_OFFSET UNITYSDK_OFFSET(0x756440)
#define HIFKMGDIDFB_DCHJEMNCNBL_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define HIFKMGDIDFB_EEKCNJCBDJH_OFFSET UNITYSDK_OFFSET(0x755890)
#define HIFKMGDIDFB_FFBLGBPKKBA_OFFSET UNITYSDK_OFFSET(0x755320)
#define HIFKMGDIDFB_FLFCCAJBNNN_OFFSET UNITYSDK_OFFSET(0x755E40)
#define HIFKMGDIDFB_FOAJEDBKJAD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HIFKMGDIDFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIFKMGDIDFB_GLBGBIGMNFN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HIFKMGDIDFB_HGFMMBKHCAF_OFFSET UNITYSDK_OFFSET(0x754920)
#define HIFKMGDIDFB_HHGPCIBNNOP_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define HIFKMGDIDFB_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define HIFKMGDIDFB_NIFFBLEAELM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HIFKMGDIDFB_NOFMNPNPPAC_OFFSET UNITYSDK_OFFSET(0x757290)
#define HIFKMGDIDFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17475650)
#define HIFKMGDIDFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HIFKMGDIDFB_TypeDefinitionIndex = 13523;

struct alignas(4) HIFKMGDIDFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIFKMGDIDFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FFBLGBPKKBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_FFBLGBPKKBA_OFFSET))(this);
	}

	::System::String* NOFMNPNPPAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_NOFMNPNPPAC_OFFSET))(this);
	}

	/*
	::HIFKMGDIDFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIFKMGDIDFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FOAJEDBKJAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_FOAJEDBKJAD_OFFSET))(this);
	}

	::System::Int32 DCHJEMNCNBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_DCHJEMNCNBL_OFFSET))(this);
	}

	::System::Int32 EEKCNJCBDJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_EEKCNJCBDJH_OFFSET))(this);
	}

	::System::Int32 CLIDOAGHCPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_CLIDOAGHCPD_OFFSET))(this);
	}

	::System::Int32 CAKCFDAMCHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_CAKCFDAMCHF_OFFSET))(this);
	}

	::System::Int32 HGFMMBKHCAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_HGFMMBKHCAF_OFFSET))(this);
	}

	::System::Int32 GLBGBIGMNFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_GLBGBIGMNFN_OFFSET))(this);
	}

	::System::Int32 FLFCCAJBNNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_FLFCCAJBNNN_OFFSET))(this);
	}

	/*
	static ::HIFKMGDIDFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HIFKMGDIDFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HHGPCIBNNOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_HHGPCIBNNOP_OFFSET))(this);
	}

	::System::String* ABFDPJJPNHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_ABFDPJJPNHD_OFFSET))(this);
	}

	::System::Int32 NIFFBLEAELM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_NIFFBLEAELM_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFKMGDIDFB_IOIENACFPEP_OFFSET))(this);
	}
};
