#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKKNFBCMKJO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEHLIOGLIHH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FEHLIOGLIHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE660)
#define FEHLIOGLIHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEHLIOGLIHH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEHLIOGLIHH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE6B0)
#define FEHLIOGLIHH_PIKOGGDKNFO_1_OFFSET UNITYSDK_OFFSET(0x19C02780)
#define FEHLIOGLIHH_PIKOGGDKNFO_OFFSET UNITYSDK_OFFSET(0x19C1D560)
#define FEHLIOGLIHH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE6A0)
#define FEHLIOGLIHH___INIT_OFFSET UNITYSDK_OFFSET(0x7EE640)

inline static constexpr unsigned int FEHLIOGLIHH_TypeDefinitionIndex = 9780;

struct alignas(8) FEHLIOGLIHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHLIOGLIHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FEHLIOGLIHH PIKOGGDKNFO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FEHLIOGLIHH EIFONLCJOPG)
	{
		return ((::FEHLIOGLIHH(*)(::FlatBuffers::ByteBuffer*, ::FEHLIOGLIHH))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_PIKOGGDKNFO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FEHLIOGLIHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHLIOGLIHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKKNFBCMKJO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKKNFBCMKJO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKKNFBCMKJO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKKNFBCMKJO&))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FEHLIOGLIHH PIKOGGDKNFO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHLIOGLIHH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHLIOGLIHH_PIKOGGDKNFO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
