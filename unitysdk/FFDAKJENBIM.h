#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MFFJPOBJPDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFDAKJENBIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FFDAKJENBIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2E70)
#define FFDAKJENBIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFDAKJENBIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FFDAKJENBIM_ILIINONAGOK_1_OFFSET UNITYSDK_OFFSET(0x17AB28E0)
#define FFDAKJENBIM_ILIINONAGOK_OFFSET UNITYSDK_OFFSET(0x17AB27E0)
#define FFDAKJENBIM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2E50)
#define FFDAKJENBIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2E60)
#define FFDAKJENBIM___INIT_OFFSET UNITYSDK_OFFSET(0x7B2E30)

inline static constexpr unsigned int FFDAKJENBIM_TypeDefinitionIndex = 17673;

struct alignas(8) FFDAKJENBIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDAKJENBIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDAKJENBIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MFFJPOBJPDM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFFJPOBJPDM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FFDAKJENBIM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FFDAKJENBIM ILIINONAGOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FFDAKJENBIM EIFONLCJOPG)
	{
		return ((::FFDAKJENBIM(*)(::FlatBuffers::ByteBuffer*, ::FFDAKJENBIM))((::PBYTE)hIl2Cpp + FFDAKJENBIM_ILIINONAGOK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDAKJENBIM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MFFJPOBJPDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFFJPOBJPDM&))((::PBYTE)hIl2Cpp + FFDAKJENBIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDAKJENBIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FFDAKJENBIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFDAKJENBIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDAKJENBIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FFDAKJENBIM ILIINONAGOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFDAKJENBIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFDAKJENBIM_ILIINONAGOK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
