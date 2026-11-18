#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CBCBKJPCKHB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CBCBKJPCKHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CBCBKJPCKHB_GCENMFDGAJO_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define CBCBKJPCKHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBCBKJPCKHB_GLCBONEKFKK_OFFSET UNITYSDK_OFFSET(0x754D50)
#define CBCBKJPCKHB_HGMFIGENDLO_OFFSET UNITYSDK_OFFSET(0x758200)
#define CBCBKJPCKHB_IACNHHNKJJC_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define CBCBKJPCKHB_IDCJOFONNBE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define CBCBKJPCKHB_JBNGECCEOIG_OFFSET UNITYSDK_OFFSET(0x754A70)
#define CBCBKJPCKHB_LEPEDJGOMHG_OFFSET UNITYSDK_OFFSET(0x756720)
#define CBCBKJPCKHB_LFFJFMNPKFJ_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define CBCBKJPCKHB_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CBCBKJPCKHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CBCBKJPCKHB_TypeDefinitionIndex = 10732;

struct alignas(4) CBCBKJPCKHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBCBKJPCKHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LEPEDJGOMHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_LEPEDJGOMHG_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 IDCJOFONNBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_IDCJOFONNBE_OFFSET))(this);
	}

	::System::Int32 LFFJFMNPKFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_LFFJFMNPKFJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GLCBONEKFKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_GLCBONEKFKK_OFFSET))(this);
	}

	::System::Boolean HGMFIGENDLO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_HGMFIGENDLO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JBNGECCEOIG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_JBNGECCEOIG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IACNHHNKJJC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_IACNHHNKJJC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GCENMFDGAJO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_GCENMFDGAJO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CBCBKJPCKHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBCBKJPCKHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBCBKJPCKHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
