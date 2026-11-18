#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HLKHNNFPGDC_ALMFFBNKHOI_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define HLKHNNFPGDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLKHNNFPGDC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x761980)
#define HLKHNNFPGDC_DGNLLFEJCNJ_OFFSET UNITYSDK_OFFSET(0x762A90)
#define HLKHNNFPGDC_EMLIKHBDBMH_OFFSET UNITYSDK_OFFSET(0x7555F0)
#define HLKHNNFPGDC_FOGOLEKFJAD_OFFSET UNITYSDK_OFFSET(0x762F60)
#define HLKHNNFPGDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLKHNNFPGDC_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLKHNNFPGDC_NPCOIKGLMNF_OFFSET UNITYSDK_OFFSET(0x755140)
#define HLKHNNFPGDC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4F2E90)
#define HLKHNNFPGDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLKHNNFPGDC_TypeDefinitionIndex = 10947;

struct alignas(4) HLKHNNFPGDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKHNNFPGDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HLKHNNFPGDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLKHNNFPGDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DGNLLFEJCNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_DGNLLFEJCNJ_OFFSET))(this);
	}

	::System::String* EMLIKHBDBMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_EMLIKHBDBMH_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* FOGOLEKFJAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_FOGOLEKFJAD_OFFSET))(this);
	}

	::System::Int32 NPCOIKGLMNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_NPCOIKGLMNF_OFFSET))(this);
	}

	/*
	static ::HLKHNNFPGDC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLKHNNFPGDC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ALMFFBNKHOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_ALMFFBNKHOI_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKHNNFPGDC_NFKFHJBEPGD_OFFSET))(this);
	}
};
