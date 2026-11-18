#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCGNFEMGFJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCHNJCFFECF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCHNJCFFECF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8110E0)
#define MCHNJCFFECF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCHNJCFFECF_GHKIMLGKKCG_1_OFFSET UNITYSDK_OFFSET(0x1B65B170)
#define MCHNJCFFECF_GHKIMLGKKCG_OFFSET UNITYSDK_OFFSET(0x1B65B100)
#define MCHNJCFFECF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCHNJCFFECF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8110D0)
#define MCHNJCFFECF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811120)
#define MCHNJCFFECF___INIT_OFFSET UNITYSDK_OFFSET(0x8110B0)

inline static constexpr unsigned int MCHNJCFFECF_TypeDefinitionIndex = 13875;

struct alignas(8) MCHNJCFFECF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNJCFFECF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCHNJCFFECF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNJCFFECF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MCHNJCFFECF GHKIMLGKKCG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCHNJCFFECF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCHNJCFFECF_GHKIMLGKKCG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCGNFEMGFJD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCGNFEMGFJD&, ::System::Int32&))((::PBYTE)hIl2Cpp + MCHNJCFFECF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MCHNJCFFECF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCHNJCFFECF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCHNJCFFECF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNJCFFECF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MCHNJCFFECF GHKIMLGKKCG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCHNJCFFECF EIFONLCJOPG)
	{
		return ((::MCHNJCFFECF(*)(::FlatBuffers::ByteBuffer*, ::MCHNJCFFECF))((::PBYTE)hIl2Cpp + MCHNJCFFECF_GHKIMLGKKCG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCGNFEMGFJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCGNFEMGFJD&))((::PBYTE)hIl2Cpp + MCHNJCFFECF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
