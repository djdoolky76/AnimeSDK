#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONDAJPOPKPB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIFGJALMCIG_ANPAFBJGBHH_1_OFFSET UNITYSDK_OFFSET(0x18DE87E0)
#define KIFGJALMCIG_ANPAFBJGBHH_OFFSET UNITYSDK_OFFSET(0x18DE8580)
#define KIFGJALMCIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KIFGJALMCIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6DD0)
#define KIFGJALMCIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIFGJALMCIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KIFGJALMCIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D6DC0)
#define KIFGJALMCIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6DB0)
#define KIFGJALMCIG___INIT_OFFSET UNITYSDK_OFFSET(0x7D6D90)

inline static constexpr unsigned int KIFGJALMCIG_TypeDefinitionIndex = 11641;

struct alignas(8) KIFGJALMCIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFGJALMCIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFGJALMCIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONDAJPOPKPB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONDAJPOPKPB&))((::PBYTE)hIl2Cpp + KIFGJALMCIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KIFGJALMCIG ANPAFBJGBHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KIFGJALMCIG EIFONLCJOPG)
	{
		return ((::KIFGJALMCIG(*)(::FlatBuffers::ByteBuffer*, ::KIFGJALMCIG))((::PBYTE)hIl2Cpp + KIFGJALMCIG_ANPAFBJGBHH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFGJALMCIG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFGJALMCIG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONDAJPOPKPB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONDAJPOPKPB&, ::System::Int32&))((::PBYTE)hIl2Cpp + KIFGJALMCIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KIFGJALMCIG ANPAFBJGBHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIFGJALMCIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFGJALMCIG_ANPAFBJGBHH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KIFGJALMCIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIFGJALMCIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFGJALMCIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
