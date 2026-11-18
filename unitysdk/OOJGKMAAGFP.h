#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGOIHNKKCIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOJGKMAAGFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OOJGKMAAGFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB9D0)
#define OOJGKMAAGFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOJGKMAAGFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OOJGKMAAGFP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB9C0)
#define OOJGKMAAGFP_PGDEOPDPEPA_1_OFFSET UNITYSDK_OFFSET(0x1CFFFB60)
#define OOJGKMAAGFP_PGDEOPDPEPA_OFFSET UNITYSDK_OFFSET(0x1CFFFAC0)
#define OOJGKMAAGFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB9B0)
#define OOJGKMAAGFP___INIT_OFFSET UNITYSDK_OFFSET(0x8AB990)

inline static constexpr unsigned int OOJGKMAAGFP_TypeDefinitionIndex = 10144;

struct alignas(8) OOJGKMAAGFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOJGKMAAGFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGOIHNKKCIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGOIHNKKCIL&))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGOIHNKKCIL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGOIHNKKCIL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OOJGKMAAGFP PGDEOPDPEPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OOJGKMAAGFP EIFONLCJOPG)
	{
		return ((::OOJGKMAAGFP(*)(::FlatBuffers::ByteBuffer*, ::OOJGKMAAGFP))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_PGDEOPDPEPA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OOJGKMAAGFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOJGKMAAGFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OOJGKMAAGFP PGDEOPDPEPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOJGKMAAGFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOJGKMAAGFP_PGDEOPDPEPA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
