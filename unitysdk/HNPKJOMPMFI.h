#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JONLCNPBKFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNPKJOMPMFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNPKJOMPMFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F86B0)
#define HNPKJOMPMFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNPKJOMPMFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNPKJOMPMFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8700)
#define HNPKJOMPMFI_MGLOENCKIIN_1_OFFSET UNITYSDK_OFFSET(0x1A4F3AD0)
#define HNPKJOMPMFI_MGLOENCKIIN_OFFSET UNITYSDK_OFFSET(0x1A4F3A30)
#define HNPKJOMPMFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F86F0)
#define HNPKJOMPMFI___INIT_OFFSET UNITYSDK_OFFSET(0x7F8690)

inline static constexpr unsigned int HNPKJOMPMFI_TypeDefinitionIndex = 14190;

struct alignas(8) HNPKJOMPMFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNPKJOMPMFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNPKJOMPMFI MGLOENCKIIN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNPKJOMPMFI EIFONLCJOPG)
	{
		return ((::HNPKJOMPMFI(*)(::FlatBuffers::ByteBuffer*, ::HNPKJOMPMFI))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_MGLOENCKIIN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HNPKJOMPMFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNPKJOMPMFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HNPKJOMPMFI MGLOENCKIIN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNPKJOMPMFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_MGLOENCKIIN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JONLCNPBKFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JONLCNPBKFP&))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JONLCNPBKFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JONLCNPBKFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNPKJOMPMFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
