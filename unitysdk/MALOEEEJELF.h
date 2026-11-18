#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MALOEEEJELF_AEDGKBNLMIL_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define MALOEEEJELF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MALOEEEJELF_BHKKCBOLMBM_OFFSET UNITYSDK_OFFSET(0x757A30)
#define MALOEEEJELF_CLPLPNEMKKF_OFFSET UNITYSDK_OFFSET(0x757290)
#define MALOEEEJELF_DJGAGOBHJCA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MALOEEEJELF_DJNFNHLBBAM_OFFSET UNITYSDK_OFFSET(0x757E20)
#define MALOEEEJELF_DMCBADADGAL_OFFSET UNITYSDK_OFFSET(0x757520)
#define MALOEEEJELF_FKNCOKEFCKD_OFFSET UNITYSDK_OFFSET(0x755890)
#define MALOEEEJELF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MALOEEEJELF_GOCJLAMOGNK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MALOEEEJELF_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define MALOEEEJELF_ILCILIIKIHA_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define MALOEEEJELF_INNIHEHKMKB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MALOEEEJELF_KEOHMHAHIME_OFFSET UNITYSDK_OFFSET(0x755570)
#define MALOEEEJELF_KKAEHKKKBOE_OFFSET UNITYSDK_OFFSET(0x763D90)
#define MALOEEEJELF_MHCBKIHNGOF_OFFSET UNITYSDK_OFFSET(0x755670)
#define MALOEEEJELF_MOLMIBAHJIC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MALOEEEJELF_NCGMDMHLBAL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MALOEEEJELF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19599B40)
#define MALOEEEJELF_OFCFCLJGKFH_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define MALOEEEJELF_OLGBNPKIBJA_OFFSET UNITYSDK_OFFSET(0x761710)
#define MALOEEEJELF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MALOEEEJELF_TypeDefinitionIndex = 14104;

struct alignas(4) MALOEEEJELF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MALOEEEJELF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OLGBNPKIBJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_OLGBNPKIBJA_OFFSET))(this);
	}

	::System::String* KEOHMHAHIME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_KEOHMHAHIME_OFFSET))(this);
	}

	::System::String* MOLMIBAHJIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_MOLMIBAHJIC_OFFSET))(this);
	}

	/*
	::MALOEEEJELF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MALOEEEJELF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MALOEEEJELF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OFCFCLJGKFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_OFCFCLJGKFH_OFFSET))(this);
	}

	::System::String* CLPLPNEMKKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_CLPLPNEMKKF_OFFSET))(this);
	}

	::System::String* DMCBADADGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_DMCBADADGAL_OFFSET))(this);
	}

	::System::Int32 ILCILIIKIHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_ILCILIIKIHA_OFFSET))(this);
	}

	::System::String* DJNFNHLBBAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_DJNFNHLBBAM_OFFSET))(this);
	}

	::System::Int32 DJGAGOBHJCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_DJGAGOBHJCA_OFFSET))(this);
	}

	::System::Boolean KKAEHKKKBOE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MALOEEEJELF_KKAEHKKKBOE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MALOEEEJELF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MALOEEEJELF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MALOEEEJELF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GOCJLAMOGNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_GOCJLAMOGNK_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 INNIHEHKMKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_INNIHEHKMKB_OFFSET))(this);
	}

	::System::Int32 NCGMDMHLBAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_NCGMDMHLBAL_OFFSET))(this);
	}

	::System::Int32 AEDGKBNLMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_AEDGKBNLMIL_OFFSET))(this);
	}

	::System::Int32 MHCBKIHNGOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_MHCBKIHNGOF_OFFSET))(this);
	}

	::System::Int32 FKNCOKEFCKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_FKNCOKEFCKD_OFFSET))(this);
	}

	::System::Int32 BHKKCBOLMBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALOEEEJELF_BHKKCBOLMBM_OFFSET))(this);
	}
};
