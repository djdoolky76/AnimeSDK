#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELENHPEGALH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLGFNICJOFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLGFNICJOFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x821030)
#define PLGFNICJOFI_EDEAKKKIBFA_1_OFFSET UNITYSDK_OFFSET(0x1C1AE7F0)
#define PLGFNICJOFI_EDEAKKKIBFA_OFFSET UNITYSDK_OFFSET(0x1C1AE6F0)
#define PLGFNICJOFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLGFNICJOFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLGFNICJOFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x821020)
#define PLGFNICJOFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x821010)
#define PLGFNICJOFI___INIT_OFFSET UNITYSDK_OFFSET(0x820FF0)

inline static constexpr unsigned int PLGFNICJOFI_TypeDefinitionIndex = 9316;

struct alignas(8) PLGFNICJOFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGFNICJOFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGFNICJOFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PLGFNICJOFI EDEAKKKIBFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLGFNICJOFI EIFONLCJOPG)
	{
		return ((::PLGFNICJOFI(*)(::FlatBuffers::ByteBuffer*, ::PLGFNICJOFI))((::PBYTE)hIl2Cpp + PLGFNICJOFI_EDEAKKKIBFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGFNICJOFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PLGFNICJOFI EDEAKKKIBFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLGFNICJOFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGFNICJOFI_EDEAKKKIBFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELENHPEGALH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELENHPEGALH&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLGFNICJOFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGFNICJOFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PLGFNICJOFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLGFNICJOFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGFNICJOFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELENHPEGALH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELENHPEGALH&))((::PBYTE)hIl2Cpp + PLGFNICJOFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
