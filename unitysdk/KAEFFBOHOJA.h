#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEGKKMMJJKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAEFFBOHOJA_BENINLONHAK_1_OFFSET UNITYSDK_OFFSET(0x17490620)
#define KAEFFBOHOJA_BENINLONHAK_OFFSET UNITYSDK_OFFSET(0x174905B0)
#define KAEFFBOHOJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KAEFFBOHOJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8D20)
#define KAEFFBOHOJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KAEFFBOHOJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KAEFFBOHOJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8D00)
#define KAEFFBOHOJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8D10)
#define KAEFFBOHOJA___INIT_OFFSET UNITYSDK_OFFSET(0x7A8CE0)

inline static constexpr unsigned int KAEFFBOHOJA_TypeDefinitionIndex = 17660;

struct alignas(8) KAEFFBOHOJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAEFFBOHOJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEGKKMMJJKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEGKKMMJJKH&))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JEGKKMMJJKH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEGKKMMJJKH&, ::System::Int32&))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KAEFFBOHOJA BENINLONHAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAEFFBOHOJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_BENINLONHAK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KAEFFBOHOJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAEFFBOHOJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KAEFFBOHOJA BENINLONHAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KAEFFBOHOJA EIFONLCJOPG)
	{
		return ((::KAEFFBOHOJA(*)(::FlatBuffers::ByteBuffer*, ::KAEFFBOHOJA))((::PBYTE)hIl2Cpp + KAEFFBOHOJA_BENINLONHAK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
