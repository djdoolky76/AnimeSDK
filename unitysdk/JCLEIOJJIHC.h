#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JCLEIOJJIHC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCLEIOJJIHC_AKHLPKCMLBM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JCLEIOJJIHC_BAPPIEGOKKL_OFFSET UNITYSDK_OFFSET(0x757330)
#define JCLEIOJJIHC_BGFKJAGIGOI_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define JCLEIOJJIHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCLEIOJJIHC_BMFBHBMLMAA_OFFSET UNITYSDK_OFFSET(0x755D70)
#define JCLEIOJJIHC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JCLEIOJJIHC_DMLPEFAMFBB_OFFSET UNITYSDK_OFFSET(0x754D50)
#define JCLEIOJJIHC_EEAGGIBHBNC_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define JCLEIOJJIHC_ENDCPENOHNC_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define JCLEIOJJIHC_FIDLGHCJDCM_OFFSET UNITYSDK_OFFSET(0x758590)
#define JCLEIOJJIHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCLEIOJJIHC_IBCPIGHFHNF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define JCLEIOJJIHC_INMJBECLBKF_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define JCLEIOJJIHC_JDNFAKBAFPF_OFFSET UNITYSDK_OFFSET(0x763920)
#define JCLEIOJJIHC_KLACEKAKNAB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JCLEIOJJIHC_MEMDPLKHNPH_OFFSET UNITYSDK_OFFSET(0x755190)
#define JCLEIOJJIHC_NFBICDDOCEB_OFFSET UNITYSDK_OFFSET(0x760960)
#define JCLEIOJJIHC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A501330)
#define JCLEIOJJIHC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCLEIOJJIHC_TypeDefinitionIndex = 9939;

struct alignas(4) JCLEIOJJIHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLEIOJJIHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MEMDPLKHNPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_MEMDPLKHNPH_OFFSET))(this);
	}

	::System::Int32 IBCPIGHFHNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_IBCPIGHFHNF_OFFSET))(this);
	}

	::System::Int32 DMLPEFAMFBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_DMLPEFAMFBB_OFFSET))(this);
	}

	::System::Boolean FIDLGHCJDCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_FIDLGHCJDCM_OFFSET))(this);
	}

	/*
	::JCLEIOJJIHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCLEIOJJIHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::JCLEIOJJIHC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCLEIOJJIHC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BMFBHBMLMAA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_BMFBHBMLMAA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JDNFAKBAFPF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_JDNFAKBAFPF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean NFBICDDOCEB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_NFBICDDOCEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BAPPIEGOKKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_BAPPIEGOKKL_OFFSET))(this);
	}

	::System::Int32 AKHLPKCMLBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_AKHLPKCMLBM_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean ENDCPENOHNC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_ENDCPENOHNC_OFFSET))(this);
	}

	::System::String* KLACEKAKNAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_KLACEKAKNAB_OFFSET))(this);
	}

	::System::Boolean INMJBECLBKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_INMJBECLBKF_OFFSET))(this);
	}

	::System::Boolean BGFKJAGIGOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_BGFKJAGIGOI_OFFSET))(this);
	}

	::System::Int32 EEAGGIBHBNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLEIOJJIHC_EEAGGIBHBNC_OFFSET))(this);
	}
};
