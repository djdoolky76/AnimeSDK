#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEKOAKDHOEM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBDIDFKABMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBDIDFKABMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6D20)
#define PBDIDFKABMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBDIDFKABMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBDIDFKABMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6D60)
#define PBDIDFKABMJ_MMPENKOHPFM_1_OFFSET UNITYSDK_OFFSET(0x17373710)
#define PBDIDFKABMJ_MMPENKOHPFM_OFFSET UNITYSDK_OFFSET(0x173736A0)
#define PBDIDFKABMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6D70)
#define PBDIDFKABMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A6D00)

inline static constexpr unsigned int PBDIDFKABMJ_TypeDefinitionIndex = 17362;

struct alignas(8) PBDIDFKABMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDIDFKABMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PBDIDFKABMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBDIDFKABMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEKOAKDHOEM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEKOAKDHOEM&))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JEKOAKDHOEM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEKOAKDHOEM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PBDIDFKABMJ MMPENKOHPFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBDIDFKABMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_MMPENKOHPFM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBDIDFKABMJ MMPENKOHPFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBDIDFKABMJ EIFONLCJOPG)
	{
		return ((::PBDIDFKABMJ(*)(::FlatBuffers::ByteBuffer*, ::PBDIDFKABMJ))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_MMPENKOHPFM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDIDFKABMJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
