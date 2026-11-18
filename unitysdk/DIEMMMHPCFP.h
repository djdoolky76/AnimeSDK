#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DIEMMMHPCFP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIEMMMHPCFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIEMMMHPCFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIEMMMHPCFP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DIEMMMHPCFP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DIEMMMHPCFP_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754920)
#define DIEMMMHPCFP_NLBBPGPLHGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DIEMMMHPCFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADC6890)
#define DIEMMMHPCFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIEMMMHPCFP_TypeDefinitionIndex = 12819;

struct alignas(4) DIEMMMHPCFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIEMMMHPCFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	static ::DIEMMMHPCFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DIEMMMHPCFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 NLBBPGPLHGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_NLBBPGPLHGH_OFFSET))(this);
	}

	/*
	::DIEMMMHPCFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIEMMMHPCFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEMMMHPCFP_LJNBIAFBMIL_OFFSET))(this);
	}
};
