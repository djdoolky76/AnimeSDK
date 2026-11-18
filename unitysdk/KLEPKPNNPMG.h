#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLEPKPNNPMG_APGFEBFMHLB_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KLEPKPNNPMG_BBILMFKDBJO_OFFSET UNITYSDK_OFFSET(0x757190)
#define KLEPKPNNPMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLEPKPNNPMG_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KLEPKPNNPMG_DCMBPPOOHIE_OFFSET UNITYSDK_OFFSET(0x754970)
#define KLEPKPNNPMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLEPKPNNPMG_HDAEHHAFABK_OFFSET UNITYSDK_OFFSET(0x754920)
#define KLEPKPNNPMG_ICPDPKGCNDC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLEPKPNNPMG_LKPOJEGGLCL_OFFSET UNITYSDK_OFFSET(0x754A70)
#define KLEPKPNNPMG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1955D7B0)
#define KLEPKPNNPMG_OFPHMADLNIK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KLEPKPNNPMG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLEPKPNNPMG_TypeDefinitionIndex = 12933;

struct alignas(4) KLEPKPNNPMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLEPKPNNPMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LKPOJEGGLCL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_LKPOJEGGLCL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HDAEHHAFABK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_HDAEHHAFABK_OFFSET))(this);
	}

	::System::String* BBILMFKDBJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_BBILMFKDBJO_OFFSET))(this);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_CNIMPNICLOH_OFFSET))(this);
	}

	::System::Int32 ICPDPKGCNDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_ICPDPKGCNDC_OFFSET))(this);
	}

	/*
	::KLEPKPNNPMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLEPKPNNPMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DCMBPPOOHIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_DCMBPPOOHIE_OFFSET))(this);
	}

	::System::Int32 APGFEBFMHLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_APGFEBFMHLB_OFFSET))(this);
	}

	/*
	static ::KLEPKPNNPMG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLEPKPNNPMG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OFPHMADLNIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPKPNNPMG_OFPHMADLNIK_OFFSET))(this);
	}
};
