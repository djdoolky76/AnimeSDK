#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLDKGPADHFC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBDMJJODMAG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBDMJJODMAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813600)
#define MBDMJJODMAG_CEJBIHMIAHL_1_OFFSET UNITYSDK_OFFSET(0x1B7F6610)
#define MBDMJJODMAG_CEJBIHMIAHL_OFFSET UNITYSDK_OFFSET(0x1B7F6350)
#define MBDMJJODMAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBDMJJODMAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBDMJJODMAG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8135F0)
#define MBDMJJODMAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8135E0)
#define MBDMJJODMAG___INIT_OFFSET UNITYSDK_OFFSET(0x8135C0)

inline static constexpr unsigned int MBDMJJODMAG_TypeDefinitionIndex = 10774;

struct alignas(8) MBDMJJODMAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDMJJODMAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDMJJODMAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDMJJODMAG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MBDMJJODMAG CEJBIHMIAHL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBDMJJODMAG EIFONLCJOPG)
	{
		return ((::MBDMJJODMAG(*)(::FlatBuffers::ByteBuffer*, ::MBDMJJODMAG))((::PBYTE)hIl2Cpp + MBDMJJODMAG_CEJBIHMIAHL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 OKCHBNGAINC, ::System::Int32 DADIDBMHLOI, ::HLDKGPADHFC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::HLDKGPADHFC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBDMJJODMAG_LLGCOCLACNA_OFFSET))(this, OKCHBNGAINC, DADIDBMHLOI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MBDMJJODMAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBDMJJODMAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDMJJODMAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDMJJODMAG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLDKGPADHFC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLDKGPADHFC&))((::PBYTE)hIl2Cpp + MBDMJJODMAG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MBDMJJODMAG CEJBIHMIAHL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBDMJJODMAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDMJJODMAG_CEJBIHMIAHL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
