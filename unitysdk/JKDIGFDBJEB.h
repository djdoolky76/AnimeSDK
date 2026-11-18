#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MHKJLCGGJMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKDIGFDBJEB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKDIGFDBJEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD8E0)
#define JKDIGFDBJEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKDIGFDBJEB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKDIGFDBJEB_KHAKMKBBEFM_1_OFFSET UNITYSDK_OFFSET(0x1A5EF710)
#define JKDIGFDBJEB_KHAKMKBBEFM_OFFSET UNITYSDK_OFFSET(0x1A5EF650)
#define JKDIGFDBJEB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD930)
#define JKDIGFDBJEB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD920)
#define JKDIGFDBJEB___INIT_OFFSET UNITYSDK_OFFSET(0x7FD8C0)

inline static constexpr unsigned int JKDIGFDBJEB_TypeDefinitionIndex = 16897;

struct alignas(8) JKDIGFDBJEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKDIGFDBJEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JKDIGFDBJEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKDIGFDBJEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JKDIGFDBJEB KHAKMKBBEFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKDIGFDBJEB EIFONLCJOPG)
	{
		return ((::JKDIGFDBJEB(*)(::FlatBuffers::ByteBuffer*, ::JKDIGFDBJEB))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_KHAKMKBBEFM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JKDIGFDBJEB KHAKMKBBEFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKDIGFDBJEB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_KHAKMKBBEFM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MHKJLCGGJMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHKJLCGGJMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MHKJLCGGJMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHKJLCGGJMK&))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDIGFDBJEB_GHKKNCCLPAN_OFFSET))(this);
	}
};
