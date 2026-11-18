#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LCDEELEFKPB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCDEELEFKPB_AFHFMAEHIAN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define LCDEELEFKPB_BCPPFBPEDAM_OFFSET UNITYSDK_OFFSET(0x766400)
#define LCDEELEFKPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCDEELEFKPB_CDHGKKODAKF_OFFSET UNITYSDK_OFFSET(0x755790)
#define LCDEELEFKPB_FGOKNAJONOI_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define LCDEELEFKPB_GEPAFIGCIHP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LCDEELEFKPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCDEELEFKPB_GLEIIDKNKDF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LCDEELEFKPB_HEDHLNCPMNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LCDEELEFKPB_KCJAGJGEAFF_OFFSET UNITYSDK_OFFSET(0x754970)
#define LCDEELEFKPB_NGMMMHEOOEA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LCDEELEFKPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FADCD0)
#define LCDEELEFKPB_PGPIPGAOINM_OFFSET UNITYSDK_OFFSET(0x758780)
#define LCDEELEFKPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCDEELEFKPB_TypeDefinitionIndex = 17009;

struct alignas(4) LCDEELEFKPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCDEELEFKPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GEPAFIGCIHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_GEPAFIGCIHP_OFFSET))(this);
	}

	::System::Int32 CDHGKKODAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_CDHGKKODAKF_OFFSET))(this);
	}

	::System::Int32 KCJAGJGEAFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_KCJAGJGEAFF_OFFSET))(this);
	}

	::System::Int32 HEDHLNCPMNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_HEDHLNCPMNC_OFFSET))(this);
	}

	/*
	static ::LCDEELEFKPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCDEELEFKPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCDEELEFKPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FGOKNAJONOI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LCDEELEFKPB_FGOKNAJONOI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BCPPFBPEDAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_BCPPFBPEDAM_OFFSET))(this);
	}

	::System::Int32 GLEIIDKNKDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_GLEIIDKNKDF_OFFSET))(this);
	}

	::System::Int32 PGPIPGAOINM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_PGPIPGAOINM_OFFSET))(this);
	}

	/*
	::LCDEELEFKPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCDEELEFKPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCDEELEFKPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AFHFMAEHIAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_AFHFMAEHIAN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NGMMMHEOOEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDEELEFKPB_NGMMMHEOOEA_OFFSET))(this);
	}
};
