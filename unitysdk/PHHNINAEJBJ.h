#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PHHNINAEJBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PHHNINAEJBJ_BLAOPFBIGGK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PHHNINAEJBJ_CIPEAPIILHP_OFFSET UNITYSDK_OFFSET(0x761930)
#define PHHNINAEJBJ_DELJMMAHFPD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PHHNINAEJBJ_FBCEODKNNIN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PHHNINAEJBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHHNINAEJBJ_JFLGCOEHGNO_OFFSET UNITYSDK_OFFSET(0x758780)
#define PHHNINAEJBJ_JJDKPDEMAPH_OFFSET UNITYSDK_OFFSET(0x754970)
#define PHHNINAEJBJ_LFHGEGFGHLM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PHHNINAEJBJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C1ACDA0)
#define PHHNINAEJBJ_PAGPCJDNMNM_OFFSET UNITYSDK_OFFSET(0x779440)
#define PHHNINAEJBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PHHNINAEJBJ_TypeDefinitionIndex = 10123;

struct alignas(4) PHHNINAEJBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHHNINAEJBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BLAOPFBIGGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_BLAOPFBIGGK_OFFSET))(this);
	}

	::System::Int32 DELJMMAHFPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_DELJMMAHFPD_OFFSET))(this);
	}

	::System::Boolean PAGPCJDNMNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_PAGPCJDNMNM_OFFSET))(this);
	}

	::System::Boolean CIPEAPIILHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_CIPEAPIILHP_OFFSET))(this);
	}

	::System::Int32 JFLGCOEHGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_JFLGCOEHGNO_OFFSET))(this);
	}

	::System::Int32 JJDKPDEMAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_JJDKPDEMAPH_OFFSET))(this);
	}

	::System::String* FBCEODKNNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_FBCEODKNNIN_OFFSET))(this);
	}

	::System::String* LFHGEGFGHLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_LFHGEGFGHLM_OFFSET))(this);
	}

	/*
	static ::PHHNINAEJBJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PHHNINAEJBJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PHHNINAEJBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHHNINAEJBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHHNINAEJBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
