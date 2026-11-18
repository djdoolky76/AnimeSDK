#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GDPLHDHEFJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAHHIPILMCK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BAHHIPILMCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB180)
#define BAHHIPILMCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAHHIPILMCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAHHIPILMCK_HKPCBCJAJMH_1_OFFSET UNITYSDK_OFFSET(0x1A577350)
#define BAHHIPILMCK_HKPCBCJAJMH_OFFSET UNITYSDK_OFFSET(0x1A5772E0)
#define BAHHIPILMCK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB1C0)
#define BAHHIPILMCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB170)
#define BAHHIPILMCK___INIT_OFFSET UNITYSDK_OFFSET(0x7FB150)

inline static constexpr unsigned int BAHHIPILMCK_TypeDefinitionIndex = 11349;

struct alignas(8) BAHHIPILMCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHIPILMCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAHHIPILMCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BAHHIPILMCK HKPCBCJAJMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAHHIPILMCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAHHIPILMCK_HKPCBCJAJMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BAHHIPILMCK HKPCBCJAJMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAHHIPILMCK EIFONLCJOPG)
	{
		return ((::BAHHIPILMCK(*)(::FlatBuffers::ByteBuffer*, ::BAHHIPILMCK))((::PBYTE)hIl2Cpp + BAHHIPILMCK_HKPCBCJAJMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHIPILMCK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GDPLHDHEFJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDPLHDHEFJM&))((::PBYTE)hIl2Cpp + BAHHIPILMCK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHIPILMCK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BAHHIPILMCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAHHIPILMCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAHHIPILMCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GDPLHDHEFJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDPLHDHEFJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BAHHIPILMCK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
