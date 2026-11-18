#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GFGCJJJMENN_AAIIBMMJFLD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define GFGCJJJMENN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFGCJJJMENN_BHFNKHLLIFK_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define GFGCJJJMENN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFGCJJJMENN_BPNDHBJOIEN_OFFSET UNITYSDK_OFFSET(0x77A420)
#define GFGCJJJMENN_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GFGCJJJMENN_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GFGCJJJMENN_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GFGCJJJMENN_FKMLEDFPBIL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define GFGCJJJMENN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFGCJJJMENN_HFJFBBBNLOB_OFFSET UNITYSDK_OFFSET(0x760960)
#define GFGCJJJMENN_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GFGCJJJMENN_MIEEJLOFGLF_OFFSET UNITYSDK_OFFSET(0x756720)
#define GFGCJJJMENN_NGPGMOBHLAP_OFFSET UNITYSDK_OFFSET(0x754A70)
#define GFGCJJJMENN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4D5570)
#define GFGCJJJMENN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFGCJJJMENN_TypeDefinitionIndex = 12871;

struct alignas(4) GFGCJJJMENN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFGCJJJMENN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FKMLEDFPBIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_FKMLEDFPBIL_OFFSET))(this);
	}

	::System::Int32 MIEEJLOFGLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_MIEEJLOFGLF_OFFSET))(this);
	}

	::System::Int32 AAIIBMMJFLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_AAIIBMMJFLD_OFFSET))(this);
	}

	::System::Boolean NGPGMOBHLAP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GFGCJJJMENN_NGPGMOBHLAP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_LEHJFMAMFJO_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	::GFGCJJJMENN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFGCJJJMENN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFGCJJJMENN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean HFJFBBBNLOB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GFGCJJJMENN_HFJFBBBNLOB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean BHFNKHLLIFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_BHFNKHLLIFK_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGCJJJMENN_FELDILHMMIK_OFFSET))(this);
	}

	/*
	static ::GFGCJJJMENN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFGCJJJMENN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFGCJJJMENN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BPNDHBJOIEN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GFGCJJJMENN_BPNDHBJOIEN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
