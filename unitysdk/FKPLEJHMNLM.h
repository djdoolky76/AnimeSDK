#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FKPLEJHMNLM_AKHLPKCMLBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FKPLEJHMNLM_ALPMFCHBCIA_OFFSET UNITYSDK_OFFSET(0x779440)
#define FKPLEJHMNLM_BGFKJAGIGOI_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define FKPLEJHMNLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FKPLEJHMNLM_BPJLDJLOKEK_OFFSET UNITYSDK_OFFSET(0x758320)
#define FKPLEJHMNLM_CEDKJOIDDEL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FKPLEJHMNLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKPLEJHMNLM_HPKEHNPPKAG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FKPLEJHMNLM_INPCJFKCLHE_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define FKPLEJHMNLM_KLACEKAKNAB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FKPLEJHMNLM_LBHFCGKJCBP_OFFSET UNITYSDK_OFFSET(0x757290)
#define FKPLEJHMNLM_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FKPLEJHMNLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1952E240)
#define FKPLEJHMNLM_OPFDJLPDHJC_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define FKPLEJHMNLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FKPLEJHMNLM_TypeDefinitionIndex = 10500;

struct alignas(4) FKPLEJHMNLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKPLEJHMNLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OPFDJLPDHJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_OPFDJLPDHJC_OFFSET))(this);
	}

	::System::String* BPJLDJLOKEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_BPJLDJLOKEK_OFFSET))(this);
	}

	::System::Int32 AKHLPKCMLBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_AKHLPKCMLBM_OFFSET))(this);
	}

	::System::Int32 CEDKJOIDDEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_CEDKJOIDDEL_OFFSET))(this);
	}

	::System::String* LBHFCGKJCBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_LBHFCGKJCBP_OFFSET))(this);
	}

	/*
	static ::FKPLEJHMNLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FKPLEJHMNLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean ALPMFCHBCIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_ALPMFCHBCIA_OFFSET))(this);
	}

	::System::Int32 INPCJFKCLHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_INPCJFKCLHE_OFFSET))(this);
	}

	/*
	::FKPLEJHMNLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKPLEJHMNLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BGFKJAGIGOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_BGFKJAGIGOI_OFFSET))(this);
	}

	::System::String* HPKEHNPPKAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_HPKEHNPPKAG_OFFSET))(this);
	}

	::System::String* KLACEKAKNAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_KLACEKAKNAB_OFFSET))(this);
	}

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPLEJHMNLM_LHCHCKNBFBL_OFFSET))(this);
	}
};
