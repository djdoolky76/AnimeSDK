#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LLLHIBHFGGK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LLLHIBHFGGK_ACOHPMNKEKE_OFFSET UNITYSDK_OFFSET(0x77B0B0)
#define LLLHIBHFGGK_AEHDIHKJEJH_OFFSET UNITYSDK_OFFSET(0x757190)
#define LLLHIBHFGGK_ANKJIMPCCAC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LLLHIBHFGGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LLLHIBHFGGK_CKHNFDIJKOP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LLLHIBHFGGK_EFFAOAJOJEK_OFFSET UNITYSDK_OFFSET(0x757290)
#define LLLHIBHFGGK_FBCGBEAPDNG_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define LLLHIBHFGGK_FFABPMCJMLI_OFFSET UNITYSDK_OFFSET(0x756280)
#define LLLHIBHFGGK_FMMKAHOKACB_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define LLLHIBHFGGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLLHIBHFGGK_GPNMOLNIPKC_OFFSET UNITYSDK_OFFSET(0x755440)
#define LLLHIBHFGGK_HBJBDOPGOCE_OFFSET UNITYSDK_OFFSET(0x755D70)
#define LLLHIBHFGGK_HCPCBKKKLPL_OFFSET UNITYSDK_OFFSET(0x762C60)
#define LLLHIBHFGGK_HPIFKFDMFKI_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define LLLHIBHFGGK_IMFLJNLLBHC_OFFSET UNITYSDK_OFFSET(0x757330)
#define LLLHIBHFGGK_KHGJMADMHMA_OFFSET UNITYSDK_OFFSET(0x765A30)
#define LLLHIBHFGGK_KJBHPDOHEAE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LLLHIBHFGGK_KJJLMHPAIKM_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define LLLHIBHFGGK_KNAGELGLKIA_OFFSET UNITYSDK_OFFSET(0x757B50)
#define LLLHIBHFGGK_LGBELBMAMHN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LLLHIBHFGGK_LPCBNIKCLLB_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LLLHIBHFGGK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF56DF0)
#define LLLHIBHFGGK_ODDBFGDOFMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LLLHIBHFGGK_PEIPBAMOBPI_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define LLLHIBHFGGK_PFAJOAHBOOA_OFFSET UNITYSDK_OFFSET(0x755320)
#define LLLHIBHFGGK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LLLHIBHFGGK_TypeDefinitionIndex = 17295;

struct alignas(4) LLLHIBHFGGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLLHIBHFGGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean KNAGELGLKIA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_KNAGELGLKIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AEHDIHKJEJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_AEHDIHKJEJH_OFFSET))(this);
	}

	::System::Int32 FMMKAHOKACB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_FMMKAHOKACB_OFFSET))(this);
	}

	::System::Boolean HBJBDOPGOCE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_HBJBDOPGOCE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LLLHIBHFGGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLLHIBHFGGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PFAJOAHBOOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_PFAJOAHBOOA_OFFSET))(this);
	}

	::System::Int32 ANKJIMPCCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_ANKJIMPCCAC_OFFSET))(this);
	}

	::System::Int32 KJJLMHPAIKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_KJJLMHPAIKM_OFFSET))(this);
	}

	::System::String* CKHNFDIJKOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_CKHNFDIJKOP_OFFSET))(this);
	}

	::System::String* LPCBNIKCLLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_LPCBNIKCLLB_OFFSET))(this);
	}

	::System::String* LGBELBMAMHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_LGBELBMAMHN_OFFSET))(this);
	}

	::System::Int32 HPIFKFDMFKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_HPIFKFDMFKI_OFFSET))(this);
	}

	::System::Boolean FBCGBEAPDNG(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_FBCGBEAPDNG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LLLHIBHFGGK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LLLHIBHFGGK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GPNMOLNIPKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_GPNMOLNIPKC_OFFSET))(this);
	}

	::System::String* ODDBFGDOFMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_ODDBFGDOFMF_OFFSET))(this);
	}

	::System::Int32 FFABPMCJMLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_FFABPMCJMLI_OFFSET))(this);
	}

	::System::Int32 KJBHPDOHEAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_KJBHPDOHEAE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IMFLJNLLBHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_IMFLJNLLBHC_OFFSET))(this);
	}

	::System::Boolean KHGJMADMHMA(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_KHGJMADMHMA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HCPCBKKKLPL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_HCPCBKKKLPL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean ACOHPMNKEKE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_ACOHPMNKEKE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PEIPBAMOBPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_PEIPBAMOBPI_OFFSET))(this);
	}

	::System::String* EFFAOAJOJEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLHIBHFGGK_EFFAOAJOJEK_OFFSET))(this);
	}
};
