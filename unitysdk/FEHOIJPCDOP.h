#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AGIFCFDPJPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEHOIJPCDOP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FEHOIJPCDOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8082E0)
#define FEHOIJPCDOP_DELIMICJHJN_1_OFFSET UNITYSDK_OFFSET(0x1ADE0D40)
#define FEHOIJPCDOP_DELIMICJHJN_OFFSET UNITYSDK_OFFSET(0x1ADE0CD0)
#define FEHOIJPCDOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEHOIJPCDOP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEHOIJPCDOP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x808320)
#define FEHOIJPCDOP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8082D0)
#define FEHOIJPCDOP___INIT_OFFSET UNITYSDK_OFFSET(0x8082B0)

inline static constexpr unsigned int FEHOIJPCDOP_TypeDefinitionIndex = 9378;

struct alignas(8) FEHOIJPCDOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHOIJPCDOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FEHOIJPCDOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHOIJPCDOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FEHOIJPCDOP DELIMICJHJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHOIJPCDOP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_DELIMICJHJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AGIFCFDPJPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGIFCFDPJPM&))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AGIFCFDPJPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGIFCFDPJPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FEHOIJPCDOP DELIMICJHJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FEHOIJPCDOP EIFONLCJOPG)
	{
		return ((::FEHOIJPCDOP(*)(::FlatBuffers::ByteBuffer*, ::FEHOIJPCDOP))((::PBYTE)hIl2Cpp + FEHOIJPCDOP_DELIMICJHJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
