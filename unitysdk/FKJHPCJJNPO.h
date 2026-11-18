#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNGBDJEOFKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKJHPCJJNPO_ABNAHIOBFPO_1_OFFSET UNITYSDK_OFFSET(0x1A4C7B10)
#define FKJHPCJJNPO_ABNAHIOBFPO_OFFSET UNITYSDK_OFFSET(0x1A4C7870)
#define FKJHPCJJNPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FKJHPCJJNPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7B70)
#define FKJHPCJJNPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKJHPCJJNPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKJHPCJJNPO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7B60)
#define FKJHPCJJNPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7BB0)
#define FKJHPCJJNPO___INIT_OFFSET UNITYSDK_OFFSET(0x7F7B40)

inline static constexpr unsigned int FKJHPCJJNPO_TypeDefinitionIndex = 9626;

struct alignas(8) FKJHPCJJNPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJHPCJJNPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FKJHPCJJNPO ABNAHIOBFPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKJHPCJJNPO EIFONLCJOPG)
	{
		return ((::FKJHPCJJNPO(*)(::FlatBuffers::ByteBuffer*, ::FKJHPCJJNPO))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_ABNAHIOBFPO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNGBDJEOFKL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNGBDJEOFKL&, ::System::Int32&))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FKJHPCJJNPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKJHPCJJNPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKJHPCJJNPO ABNAHIOBFPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKJHPCJJNPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_ABNAHIOBFPO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNGBDJEOFKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNGBDJEOFKL&))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJHPCJJNPO_PPOMNIFACOL_OFFSET))(this);
	}
};
