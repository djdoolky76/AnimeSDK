#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NAOEFCOHFMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAOEFCOHFMJ_BJJANBJKBAM_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define NAOEFCOHFMJ_BLNBFLKNOJG_OFFSET UNITYSDK_OFFSET(0x77A4E0)
#define NAOEFCOHFMJ_EDPOACHLNID_OFFSET UNITYSDK_OFFSET(0x761500)
#define NAOEFCOHFMJ_EPJBMAKJKCF_OFFSET UNITYSDK_OFFSET(0x754920)
#define NAOEFCOHFMJ_FNALOIAMCJG_OFFSET UNITYSDK_OFFSET(0x756720)
#define NAOEFCOHFMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAOEFCOHFMJ_KHKGFHDMPMF_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NAOEFCOHFMJ_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NAOEFCOHFMJ_NEOMHLGLJPI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NAOEFCOHFMJ_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NAOEFCOHFMJ_NOGHKKEBCNB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NAOEFCOHFMJ_OPIDMHLDAII_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAOEFCOHFMJ_PKALDJGLPOK_OFFSET UNITYSDK_OFFSET(0x77A420)
#define NAOEFCOHFMJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAOEFCOHFMJ_TypeDefinitionIndex = 11813;

struct alignas(4) NAOEFCOHFMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NAOEFCOHFMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAOEFCOHFMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean EDPOACHLNID(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_EDPOACHLNID_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BLNBFLKNOJG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_BLNBFLKNOJG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 OPIDMHLDAII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_OPIDMHLDAII_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* NEOMHLGLJPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_NEOMHLGLJPI_OFFSET))(this);
	}

	::System::Int32 BJJANBJKBAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_BJJANBJKBAM_OFFSET))(this);
	}

	::System::Int32 FNALOIAMCJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_FNALOIAMCJG_OFFSET))(this);
	}

	::System::Int32 KHKGFHDMPMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_KHKGFHDMPMF_OFFSET))(this);
	}

	::System::String* NOGHKKEBCNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_NOGHKKEBCNB_OFFSET))(this);
	}

	::System::Boolean PKALDJGLPOK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_PKALDJGLPOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EPJBMAKJKCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFCOHFMJ_EPJBMAKJKCF_OFFSET))(this);
	}
};
