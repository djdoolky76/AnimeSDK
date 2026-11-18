#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHJOLIGACGG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAHIDOICDAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAHIDOICDAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F81E0)
#define HAHIDOICDAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAHIDOICDAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAHIDOICDAB_KPDJMLAAFLA_1_OFFSET UNITYSDK_OFFSET(0x1A4E6C20)
#define HAHIDOICDAB_KPDJMLAAFLA_OFFSET UNITYSDK_OFFSET(0x1A4E6BC0)
#define HAHIDOICDAB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F81C0)
#define HAHIDOICDAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F81D0)
#define HAHIDOICDAB___INIT_OFFSET UNITYSDK_OFFSET(0x7F81A0)

inline static constexpr unsigned int HAHIDOICDAB_TypeDefinitionIndex = 10450;

struct alignas(8) HAHIDOICDAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHIDOICDAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAHIDOICDAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHJOLIGACGG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHJOLIGACGG&))((::PBYTE)hIl2Cpp + HAHIDOICDAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHJOLIGACGG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHJOLIGACGG&, ::System::Int32&))((::PBYTE)hIl2Cpp + HAHIDOICDAB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHIDOICDAB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HAHIDOICDAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAHIDOICDAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAHIDOICDAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HAHIDOICDAB KPDJMLAAFLA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAHIDOICDAB EIFONLCJOPG)
	{
		return ((::HAHIDOICDAB(*)(::FlatBuffers::ByteBuffer*, ::HAHIDOICDAB))((::PBYTE)hIl2Cpp + HAHIDOICDAB_KPDJMLAAFLA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHIDOICDAB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HAHIDOICDAB KPDJMLAAFLA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAHIDOICDAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAHIDOICDAB_KPDJMLAAFLA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
