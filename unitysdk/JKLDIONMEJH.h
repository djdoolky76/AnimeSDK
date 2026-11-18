#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JKLDIONMEJH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JKLDIONMEJH_BGEHLLEOCLD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JKLDIONMEJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JKLDIONMEJH_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JKLDIONMEJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKLDIONMEJH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JKLDIONMEJH_HNIGCPICDEB_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define JKLDIONMEJH_IMKKBFBMDHN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JKLDIONMEJH_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x754970)
#define JKLDIONMEJH_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JKLDIONMEJH_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JKLDIONMEJH_LKKNEICIFGJ_OFFSET UNITYSDK_OFFSET(0x757A90)
#define JKLDIONMEJH_PLCIANIOHOA_OFFSET UNITYSDK_OFFSET(0x754920)
#define JKLDIONMEJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JKLDIONMEJH_TypeDefinitionIndex = 12593;

struct alignas(4) JKLDIONMEJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKLDIONMEJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_LEHJFMAMFJO_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 JLGPJGAOOPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_LFJJJKJAJKN_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::JKLDIONMEJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKLDIONMEJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKLDIONMEJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LKKNEICIFGJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JKLDIONMEJH_LKKNEICIFGJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HNIGCPICDEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_HNIGCPICDEB_OFFSET))(this);
	}

	::System::Int32 BGEHLLEOCLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_BGEHLLEOCLD_OFFSET))(this);
	}

	::System::Int32 PLCIANIOHOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_PLCIANIOHOA_OFFSET))(this);
	}

	::System::String* IMKKBFBMDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLDIONMEJH_IMKKBFBMDHN_OFFSET))(this);
	}
};
