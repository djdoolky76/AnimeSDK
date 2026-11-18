#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCHPDECIDHL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELKPKHMEBDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELKPKHMEBDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A72D0)
#define ELKPKHMEBDK_CGLJNNKNNMJ_1_OFFSET UNITYSDK_OFFSET(0x1744F8C0)
#define ELKPKHMEBDK_CGLJNNKNNMJ_OFFSET UNITYSDK_OFFSET(0x1744F850)
#define ELKPKHMEBDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELKPKHMEBDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELKPKHMEBDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A72B0)
#define ELKPKHMEBDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A72C0)
#define ELKPKHMEBDK___INIT_OFFSET UNITYSDK_OFFSET(0x7A7290)

inline static constexpr unsigned int ELKPKHMEBDK_TypeDefinitionIndex = 12254;

struct alignas(8) ELKPKHMEBDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELKPKHMEBDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BCHPDECIDHL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCHPDECIDHL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ELKPKHMEBDK CGLJNNKNNMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELKPKHMEBDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_CGLJNNKNNMJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BCHPDECIDHL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCHPDECIDHL&))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ELKPKHMEBDK CGLJNNKNNMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELKPKHMEBDK EIFONLCJOPG)
	{
		return ((::ELKPKHMEBDK(*)(::FlatBuffers::ByteBuffer*, ::ELKPKHMEBDK))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_CGLJNNKNNMJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ELKPKHMEBDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELKPKHMEBDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELKPKHMEBDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
