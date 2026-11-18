#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHIEAACIFNE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACAHKCDCCOI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ACAHKCDCCOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9080)
#define ACAHKCDCCOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACAHKCDCCOI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACAHKCDCCOI_HHPHLBCAFPD_1_OFFSET UNITYSDK_OFFSET(0x1A510EA0)
#define ACAHKCDCCOI_HHPHLBCAFPD_OFFSET UNITYSDK_OFFSET(0x1A510E00)
#define ACAHKCDCCOI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F90C0)
#define ACAHKCDCCOI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9070)
#define ACAHKCDCCOI___INIT_OFFSET UNITYSDK_OFFSET(0x7F9050)

inline static constexpr unsigned int ACAHKCDCCOI_TypeDefinitionIndex = 13208;

struct alignas(8) ACAHKCDCCOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACAHKCDCCOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ACAHKCDCCOI HHPHLBCAFPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACAHKCDCCOI EIFONLCJOPG)
	{
		return ((::ACAHKCDCCOI(*)(::FlatBuffers::ByteBuffer*, ::ACAHKCDCCOI))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_HHPHLBCAFPD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ACAHKCDCCOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACAHKCDCCOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ACAHKCDCCOI HHPHLBCAFPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACAHKCDCCOI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_HHPHLBCAFPD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHIEAACIFNE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHIEAACIFNE&))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHIEAACIFNE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHIEAACIFNE&, ::System::Int32&))((::PBYTE)hIl2Cpp + ACAHKCDCCOI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
