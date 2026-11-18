#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPDFHBFPFDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMLDDHBJCKI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GMLDDHBJCKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B50B0)
#define GMLDDHBJCKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMLDDHBJCKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GMLDDHBJCKI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B50F0)
#define GMLDDHBJCKI_PHPLANFJEKG_1_OFFSET UNITYSDK_OFFSET(0x17BF3AF0)
#define GMLDDHBJCKI_PHPLANFJEKG_OFFSET UNITYSDK_OFFSET(0x17BF3A80)
#define GMLDDHBJCKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B50A0)
#define GMLDDHBJCKI___INIT_OFFSET UNITYSDK_OFFSET(0x7B5080)

inline static constexpr unsigned int GMLDDHBJCKI_TypeDefinitionIndex = 17164;

struct alignas(8) GMLDDHBJCKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMLDDHBJCKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GMLDDHBJCKI PHPLANFJEKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMLDDHBJCKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_PHPLANFJEKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GMLDDHBJCKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMLDDHBJCKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IPDFHBFPFDC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPDFHBFPFDC&, ::System::Int32&))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPDFHBFPFDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPDFHBFPFDC&))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GMLDDHBJCKI PHPLANFJEKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GMLDDHBJCKI EIFONLCJOPG)
	{
		return ((::GMLDDHBJCKI(*)(::FlatBuffers::ByteBuffer*, ::GMLDDHBJCKI))((::PBYTE)hIl2Cpp + GMLDDHBJCKI_PHPLANFJEKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
