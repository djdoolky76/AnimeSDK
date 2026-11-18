#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFHFBKMAKGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HONKHJJLHJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HONKHJJLHJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A130)
#define HONKHJJLHJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HONKHJJLHJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HONKHJJLHJG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A170)
#define HONKHJJLHJG_MHOMBEFEIGG_1_OFFSET UNITYSDK_OFFSET(0x161003F0)
#define HONKHJJLHJG_MHOMBEFEIGG_OFFSET UNITYSDK_OFFSET(0x161002B0)
#define HONKHJJLHJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A120)
#define HONKHJJLHJG___INIT_OFFSET UNITYSDK_OFFSET(0x77A100)

inline static constexpr unsigned int HONKHJJLHJG_TypeDefinitionIndex = 15881;

struct alignas(8) HONKHJJLHJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONKHJJLHJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HONKHJJLHJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONKHJJLHJG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HONKHJJLHJG MHOMBEFEIGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HONKHJJLHJG EIFONLCJOPG)
	{
		return ((::HONKHJJLHJG(*)(::FlatBuffers::ByteBuffer*, ::HONKHJJLHJG))((::PBYTE)hIl2Cpp + HONKHJJLHJG_MHOMBEFEIGG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HONKHJJLHJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HONKHJJLHJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HONKHJJLHJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IFHFBKMAKGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFHFBKMAKGK&))((::PBYTE)hIl2Cpp + HONKHJJLHJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HONKHJJLHJG MHOMBEFEIGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HONKHJJLHJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HONKHJJLHJG_MHOMBEFEIGG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HONKHJJLHJG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IFHFBKMAKGK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFHFBKMAKGK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HONKHJJLHJG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
