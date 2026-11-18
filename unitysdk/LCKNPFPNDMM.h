#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLBIPAGFCBA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCKNPFPNDMM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCKNPFPNDMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801BD0)
#define LCKNPFPNDMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCKNPFPNDMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCKNPFPNDMM_HIDMCFDBMFI_1_OFFSET UNITYSDK_OFFSET(0x1AAF6470)
#define LCKNPFPNDMM_HIDMCFDBMFI_OFFSET UNITYSDK_OFFSET(0x1AAF6400)
#define LCKNPFPNDMM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x801C20)
#define LCKNPFPNDMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801C10)
#define LCKNPFPNDMM___INIT_OFFSET UNITYSDK_OFFSET(0x801BB0)

inline static constexpr unsigned int LCKNPFPNDMM_TypeDefinitionIndex = 15590;

struct alignas(8) LCKNPFPNDMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKNPFPNDMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LCKNPFPNDMM HIDMCFDBMFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKNPFPNDMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_HIDMCFDBMFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LCKNPFPNDMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKNPFPNDMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LCKNPFPNDMM HIDMCFDBMFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCKNPFPNDMM EIFONLCJOPG)
	{
		return ((::LCKNPFPNDMM(*)(::FlatBuffers::ByteBuffer*, ::LCKNPFPNDMM))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_HIDMCFDBMFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLBIPAGFCBA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLBIPAGFCBA&))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PLBIPAGFCBA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLBIPAGFCBA&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCKNPFPNDMM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
