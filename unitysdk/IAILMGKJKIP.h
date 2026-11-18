#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHNDLJDJIDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IAILMGKJKIP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IAILMGKJKIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IAILMGKJKIP_CLIKLGDDMAB_OFFSET UNITYSDK_OFFSET(0x756220)
#define IAILMGKJKIP_DEAEEKEOMPA_OFFSET UNITYSDK_OFFSET(0x756570)
#define IAILMGKJKIP_DMBECHGPNOH_OFFSET UNITYSDK_OFFSET(0x757190)
#define IAILMGKJKIP_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define IAILMGKJKIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAILMGKJKIP_HOKCKBPCLAE_OFFSET UNITYSDK_OFFSET(0x755790)
#define IAILMGKJKIP_IAFHMBGCFHB_OFFSET UNITYSDK_OFFSET(0x757210)
#define IAILMGKJKIP_KKNMDJCPHJK_OFFSET UNITYSDK_OFFSET(0x754C20)
#define IAILMGKJKIP_NBGCOBJANJL_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IAILMGKJKIP_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IAILMGKJKIP_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IAILMGKJKIP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152DE380)
#define IAILMGKJKIP_ODNOCEHGPMF_OFFSET UNITYSDK_OFFSET(0x757290)
#define IAILMGKJKIP_OGLHPPLIAIE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define IAILMGKJKIP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IAILMGKJKIP_TypeDefinitionIndex = 10297;

struct alignas(4) IAILMGKJKIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAILMGKJKIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_NPAFPHDAPMI_OFFSET))(this);
	}

	/*
	static ::IAILMGKJKIP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IAILMGKJKIP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IAILMGKJKIP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NBGCOBJANJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_NBGCOBJANJL_OFFSET))(this);
	}

	::System::Int32 HOKCKBPCLAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_HOKCKBPCLAE_OFFSET))(this);
	}

	::System::String* DMBECHGPNOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_DMBECHGPNOH_OFFSET))(this);
	}

	::System::Int32 CLIKLGDDMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_CLIKLGDDMAB_OFFSET))(this);
	}

	::System::Boolean IAFHMBGCFHB(::System::Int32 HPMEONKHFGG, ::OHNDLJDJIDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHNDLJDJIDC&))((::PBYTE)hIl2Cpp + IAILMGKJKIP_IAFHMBGCFHB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::IAILMGKJKIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAILMGKJKIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAILMGKJKIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KKNMDJCPHJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_KKNMDJCPHJK_OFFSET))(this);
	}

	::System::String* ODNOCEHGPMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_ODNOCEHGPMF_OFFSET))(this);
	}

	::System::Boolean OGLHPPLIAIE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IAILMGKJKIP_OGLHPPLIAIE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FFKHDOBKMDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAILMGKJKIP_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::Boolean DEAEEKEOMPA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IAILMGKJKIP_DEAEEKEOMPA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
