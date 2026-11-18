#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AMFJEECMFOL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KECLBCBDHFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KECLBCBDHFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6B80)
#define KECLBCBDHFG_FELOJMDMLLL_1_OFFSET UNITYSDK_OFFSET(0x18DE3B30)
#define KECLBCBDHFG_FELOJMDMLLL_OFFSET UNITYSDK_OFFSET(0x18DE3AC0)
#define KECLBCBDHFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KECLBCBDHFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KECLBCBDHFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D6BC0)
#define KECLBCBDHFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6B70)
#define KECLBCBDHFG___INIT_OFFSET UNITYSDK_OFFSET(0x7D6B50)

inline static constexpr unsigned int KECLBCBDHFG_TypeDefinitionIndex = 16677;

struct alignas(8) KECLBCBDHFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KECLBCBDHFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KECLBCBDHFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KECLBCBDHFG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KECLBCBDHFG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KECLBCBDHFG FELOJMDMLLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KECLBCBDHFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KECLBCBDHFG_FELOJMDMLLL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KECLBCBDHFG FELOJMDMLLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KECLBCBDHFG EIFONLCJOPG)
	{
		return ((::KECLBCBDHFG(*)(::FlatBuffers::ByteBuffer*, ::KECLBCBDHFG))((::PBYTE)hIl2Cpp + KECLBCBDHFG_FELOJMDMLLL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KECLBCBDHFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KECLBCBDHFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KECLBCBDHFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AMFJEECMFOL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMFJEECMFOL&))((::PBYTE)hIl2Cpp + KECLBCBDHFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AMFJEECMFOL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMFJEECMFOL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KECLBCBDHFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
