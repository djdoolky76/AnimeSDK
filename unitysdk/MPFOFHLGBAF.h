#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GKJPHOBNMMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPFOFHLGBAF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPFOFHLGBAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4630)
#define MPFOFHLGBAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPFOFHLGBAF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPFOFHLGBAF_GNFPCEFGPGM_1_OFFSET UNITYSDK_OFFSET(0x17FCCCF0)
#define MPFOFHLGBAF_GNFPCEFGPGM_OFFSET UNITYSDK_OFFSET(0x17FCCC50)
#define MPFOFHLGBAF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4620)
#define MPFOFHLGBAF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4610)
#define MPFOFHLGBAF___INIT_OFFSET UNITYSDK_OFFSET(0x7C45F0)

inline static constexpr unsigned int MPFOFHLGBAF_TypeDefinitionIndex = 11469;

struct alignas(8) MPFOFHLGBAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPFOFHLGBAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GKJPHOBNMMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKJPHOBNMMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GKJPHOBNMMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKJPHOBNMMN&))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MPFOFHLGBAF GNFPCEFGPGM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPFOFHLGBAF EIFONLCJOPG)
	{
		return ((::MPFOFHLGBAF(*)(::FlatBuffers::ByteBuffer*, ::MPFOFHLGBAF))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_GNFPCEFGPGM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MPFOFHLGBAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPFOFHLGBAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MPFOFHLGBAF GNFPCEFGPGM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPFOFHLGBAF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_GNFPCEFGPGM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFOFHLGBAF_GHKKNCCLPAN_OFFSET))(this);
	}
};
