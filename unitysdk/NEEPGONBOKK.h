#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NEEPGONBOKK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NEEPGONBOKK_AMOHKOCODBC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NEEPGONBOKK_BEBANDLCFLF_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define NEEPGONBOKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NEEPGONBOKK_BNHODOINJOI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NEEPGONBOKK_CEHBNJICMFE_OFFSET UNITYSDK_OFFSET(0x758320)
#define NEEPGONBOKK_GADDBMKINOP_OFFSET UNITYSDK_OFFSET(0x7794D0)
#define NEEPGONBOKK_GAPDJOAAOLM_OFFSET UNITYSDK_OFFSET(0x756440)
#define NEEPGONBOKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEEPGONBOKK_HDDPEIDHEIN_OFFSET UNITYSDK_OFFSET(0x757F20)
#define NEEPGONBOKK_IMNOCFNADLE_OFFSET UNITYSDK_OFFSET(0x757190)
#define NEEPGONBOKK_JIHMFICCBNG_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define NEEPGONBOKK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFE7A00)
#define NEEPGONBOKK_PCMHAOJCPMH_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NEEPGONBOKK_PFNOJOKGKFC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NEEPGONBOKK_PPFJPHAMGJI_OFFSET UNITYSDK_OFFSET(0x754920)
#define NEEPGONBOKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NEEPGONBOKK_TypeDefinitionIndex = 13726;

struct alignas(4) NEEPGONBOKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEPGONBOKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CEHBNJICMFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_CEHBNJICMFE_OFFSET))(this);
	}

	::System::String* IMNOCFNADLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_IMNOCFNADLE_OFFSET))(this);
	}

	::System::Boolean HDDPEIDHEIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_HDDPEIDHEIN_OFFSET))(this);
	}

	::System::String* AMOHKOCODBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_AMOHKOCODBC_OFFSET))(this);
	}

	::System::Int32 GAPDJOAAOLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_GAPDJOAAOLM_OFFSET))(this);
	}

	::System::Boolean BEBANDLCFLF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_BEBANDLCFLF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PFNOJOKGKFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_PFNOJOKGKFC_OFFSET))(this);
	}

	/*
	static ::NEEPGONBOKK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NEEPGONBOKK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NEEPGONBOKK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PCMHAOJCPMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_PCMHAOJCPMH_OFFSET))(this);
	}

	/*
	::NEEPGONBOKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEEPGONBOKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEPGONBOKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GADDBMKINOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_GADDBMKINOP_OFFSET))(this);
	}

	::System::String* BNHODOINJOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_BNHODOINJOI_OFFSET))(this);
	}

	::System::Int32 PPFJPHAMGJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_PPFJPHAMGJI_OFFSET))(this);
	}

	::System::Int32 JIHMFICCBNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEPGONBOKK_JIHMFICCBNG_OFFSET))(this);
	}
};
