#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHHHAGKDKIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCPFBBMKEBK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CCPFBBMKEBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1CB0)
#define CCPFBBMKEBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCPFBBMKEBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCPFBBMKEBK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1CA0)
#define CCPFBBMKEBK_NGNIPCEECOL_1_OFFSET UNITYSDK_OFFSET(0x19F28DB0)
#define CCPFBBMKEBK_NGNIPCEECOL_OFFSET UNITYSDK_OFFSET(0x19F28D10)
#define CCPFBBMKEBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1C90)
#define CCPFBBMKEBK___INIT_OFFSET UNITYSDK_OFFSET(0x7F1C70)

inline static constexpr unsigned int CCPFBBMKEBK_TypeDefinitionIndex = 12511;

struct alignas(8) CCPFBBMKEBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCPFBBMKEBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CCPFBBMKEBK NGNIPCEECOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCPFBBMKEBK EIFONLCJOPG)
	{
		return ((::CCPFBBMKEBK(*)(::FlatBuffers::ByteBuffer*, ::CCPFBBMKEBK))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_NGNIPCEECOL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CCPFBBMKEBK NGNIPCEECOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCPFBBMKEBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_NGNIPCEECOL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHHHAGKDKIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHHHAGKDKIE&))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 AJDICOALDFO, ::System::Int32 BDPKPPDHFDH, ::FHHHAGKDKIE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::FHHHAGKDKIE&, ::System::Int32&))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_LLGCOCLACNA_OFFSET))(this, AJDICOALDFO, BDPKPPDHFDH, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CCPFBBMKEBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCPFBBMKEBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCPFBBMKEBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
