#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHPHONLBICA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJGHGMAAIMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJGHGMAAIMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AE8A0)
#define MJGHGMAAIMK_EAKEOOPJIHF_1_OFFSET UNITYSDK_OFFSET(0x1D0B6BE0)
#define MJGHGMAAIMK_EAKEOOPJIHF_OFFSET UNITYSDK_OFFSET(0x1D0B68E0)
#define MJGHGMAAIMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJGHGMAAIMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJGHGMAAIMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AE890)
#define MJGHGMAAIMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AE8E0)
#define MJGHGMAAIMK___INIT_OFFSET UNITYSDK_OFFSET(0x8AE870)

inline static constexpr unsigned int MJGHGMAAIMK_TypeDefinitionIndex = 17088;

struct alignas(8) MJGHGMAAIMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJGHGMAAIMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MJGHGMAAIMK EAKEOOPJIHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJGHGMAAIMK EIFONLCJOPG)
	{
		return ((::MJGHGMAAIMK(*)(::FlatBuffers::ByteBuffer*, ::MJGHGMAAIMK))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_EAKEOOPJIHF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHPHONLBICA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHPHONLBICA&, ::System::Int32&))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHPHONLBICA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHPHONLBICA&))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MJGHGMAAIMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJGHGMAAIMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MJGHGMAAIMK EAKEOOPJIHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJGHGMAAIMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJGHGMAAIMK_EAKEOOPJIHF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
