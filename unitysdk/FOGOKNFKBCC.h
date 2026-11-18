#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OGIABCCPDCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOGOKNFKBCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FOGOKNFKBCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D44A0)
#define FOGOKNFKBCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOGOKNFKBCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FOGOKNFKBCC_JBLFEMBKPJJ_1_OFFSET UNITYSDK_OFFSET(0x18B9DB60)
#define FOGOKNFKBCC_JBLFEMBKPJJ_OFFSET UNITYSDK_OFFSET(0x18B9DAF0)
#define FOGOKNFKBCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4490)
#define FOGOKNFKBCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D44E0)
#define FOGOKNFKBCC___INIT_OFFSET UNITYSDK_OFFSET(0x7D4470)

inline static constexpr unsigned int FOGOKNFKBCC_TypeDefinitionIndex = 11436;

struct alignas(8) FOGOKNFKBCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOGOKNFKBCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FOGOKNFKBCC JBLFEMBKPJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOGOKNFKBCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_JBLFEMBKPJJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OGIABCCPDCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGIABCCPDCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OGIABCCPDCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGIABCCPDCK&))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FOGOKNFKBCC JBLFEMBKPJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FOGOKNFKBCC EIFONLCJOPG)
	{
		return ((::FOGOKNFKBCC(*)(::FlatBuffers::ByteBuffer*, ::FOGOKNFKBCC))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_JBLFEMBKPJJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FOGOKNFKBCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOGOKNFKBCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGOKNFKBCC_PPOMNIFACOL_OFFSET))(this);
	}
};
