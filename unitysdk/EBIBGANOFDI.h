#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HEABCBLFCBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBIBGANOFDI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBIBGANOFDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789070)
#define EBIBGANOFDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBIBGANOFDI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBIBGANOFDI_KMHFIIHJNNG_1_OFFSET UNITYSDK_OFFSET(0x16621EE0)
#define EBIBGANOFDI_KMHFIIHJNNG_OFFSET UNITYSDK_OFFSET(0x16621E70)
#define EBIBGANOFDI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789050)
#define EBIBGANOFDI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789060)
#define EBIBGANOFDI___INIT_OFFSET UNITYSDK_OFFSET(0x789030)

inline static constexpr unsigned int EBIBGANOFDI_TypeDefinitionIndex = 15548;

struct alignas(8) EBIBGANOFDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIBGANOFDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBIBGANOFDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EBIBGANOFDI KMHFIIHJNNG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBIBGANOFDI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBIBGANOFDI_KMHFIIHJNNG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIBGANOFDI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HEABCBLFCBK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEABCBLFCBK&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBIBGANOFDI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HEABCBLFCBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEABCBLFCBK&))((::PBYTE)hIl2Cpp + EBIBGANOFDI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIBGANOFDI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EBIBGANOFDI KMHFIIHJNNG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBIBGANOFDI EIFONLCJOPG)
	{
		return ((::EBIBGANOFDI(*)(::FlatBuffers::ByteBuffer*, ::EBIBGANOFDI))((::PBYTE)hIl2Cpp + EBIBGANOFDI_KMHFIIHJNNG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EBIBGANOFDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBIBGANOFDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBIBGANOFDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
