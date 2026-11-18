#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNGMFNIGLOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNAELFNMNCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNAELFNMNCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED2C0)
#define BNAELFNMNCJ_EJCGPDGGBMM_1_OFFSET UNITYSDK_OFFSET(0x19BEE7A0)
#define BNAELFNMNCJ_EJCGPDGGBMM_OFFSET UNITYSDK_OFFSET(0x19BEE730)
#define BNAELFNMNCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNAELFNMNCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNAELFNMNCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ED2B0)
#define BNAELFNMNCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED300)
#define BNAELFNMNCJ___INIT_OFFSET UNITYSDK_OFFSET(0x7ED290)

inline static constexpr unsigned int BNAELFNMNCJ_TypeDefinitionIndex = 16972;

struct alignas(8) BNAELFNMNCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNAELFNMNCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BNAELFNMNCJ EJCGPDGGBMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNAELFNMNCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_EJCGPDGGBMM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BNAELFNMNCJ EJCGPDGGBMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNAELFNMNCJ EIFONLCJOPG)
	{
		return ((::BNAELFNMNCJ(*)(::FlatBuffers::ByteBuffer*, ::BNAELFNMNCJ))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_EJCGPDGGBMM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNGMFNIGLOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNGMFNIGLOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BNAELFNMNCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNAELFNMNCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNGMFNIGLOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNGMFNIGLOD&))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAELFNMNCJ_PPOMNIFACOL_OFFSET))(this);
	}
};
