#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GPCIFDNAGNB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDJDLDPBAJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDJDLDPBAJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807280)
#define CDJDLDPBAJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDJDLDPBAJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDJDLDPBAJK_HBCKMKHEONP_1_OFFSET UNITYSDK_OFFSET(0x1ADB80E0)
#define CDJDLDPBAJK_HBCKMKHEONP_OFFSET UNITYSDK_OFFSET(0x1ADB8070)
#define CDJDLDPBAJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807270)
#define CDJDLDPBAJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807260)
#define CDJDLDPBAJK___INIT_OFFSET UNITYSDK_OFFSET(0x807240)

inline static constexpr unsigned int CDJDLDPBAJK_TypeDefinitionIndex = 15679;

struct alignas(8) CDJDLDPBAJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDJDLDPBAJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GPCIFDNAGNB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPCIFDNAGNB&))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CDJDLDPBAJK HBCKMKHEONP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDJDLDPBAJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_HBCKMKHEONP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GPCIFDNAGNB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPCIFDNAGNB&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CDJDLDPBAJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDJDLDPBAJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDJDLDPBAJK HBCKMKHEONP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDJDLDPBAJK EIFONLCJOPG)
	{
		return ((::CDJDLDPBAJK(*)(::FlatBuffers::ByteBuffer*, ::CDJDLDPBAJK))((::PBYTE)hIl2Cpp + CDJDLDPBAJK_HBCKMKHEONP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
