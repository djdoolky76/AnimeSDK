#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AOFJOKGBFNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDODOKOAEJM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDODOKOAEJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805510)
#define NDODOKOAEJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDODOKOAEJM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDODOKOAEJM_HEEGLMMNNMJ_1_OFFSET UNITYSDK_OFFSET(0x1AD7CB80)
#define NDODOKOAEJM_HEEGLMMNNMJ_OFFSET UNITYSDK_OFFSET(0x1AD7CA80)
#define NDODOKOAEJM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805560)
#define NDODOKOAEJM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805550)
#define NDODOKOAEJM___INIT_OFFSET UNITYSDK_OFFSET(0x8054F0)

inline static constexpr unsigned int NDODOKOAEJM_TypeDefinitionIndex = 13307;

struct alignas(8) NDODOKOAEJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDODOKOAEJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDODOKOAEJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NDODOKOAEJM HEEGLMMNNMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDODOKOAEJM EIFONLCJOPG)
	{
		return ((::NDODOKOAEJM(*)(::FlatBuffers::ByteBuffer*, ::NDODOKOAEJM))((::PBYTE)hIl2Cpp + NDODOKOAEJM_HEEGLMMNNMJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDODOKOAEJM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NDODOKOAEJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDODOKOAEJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDODOKOAEJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDODOKOAEJM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NDODOKOAEJM HEEGLMMNNMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDODOKOAEJM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDODOKOAEJM_HEEGLMMNNMJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AOFJOKGBFNK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOFJOKGBFNK&, ::System::Int32&))((::PBYTE)hIl2Cpp + NDODOKOAEJM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AOFJOKGBFNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOFJOKGBFNK&))((::PBYTE)hIl2Cpp + NDODOKOAEJM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
