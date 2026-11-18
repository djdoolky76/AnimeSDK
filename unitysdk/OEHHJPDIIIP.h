#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDPPBAEOPPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEHHJPDIIIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEHHJPDIIIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E0E0)
#define OEHHJPDIIIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEHHJPDIIIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEHHJPDIIIP_GPMHOBIPEKC_1_OFFSET UNITYSDK_OFFSET(0x1CCF8CC0)
#define OEHHJPDIIIP_GPMHOBIPEKC_OFFSET UNITYSDK_OFFSET(0x1CCF8C50)
#define OEHHJPDIIIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E0D0)
#define OEHHJPDIIIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E0C0)
#define OEHHJPDIIIP___INIT_OFFSET UNITYSDK_OFFSET(0x85E0A0)

inline static constexpr unsigned int OEHHJPDIIIP_TypeDefinitionIndex = 12501;

struct alignas(8) OEHHJPDIIIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHHJPDIIIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OEHHJPDIIIP GPMHOBIPEKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEHHJPDIIIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_GPMHOBIPEKC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDPPBAEOPPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDPPBAEOPPC&))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDPPBAEOPPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDPPBAEOPPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OEHHJPDIIIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEHHJPDIIIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OEHHJPDIIIP GPMHOBIPEKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEHHJPDIIIP EIFONLCJOPG)
	{
		return ((::OEHHJPDIIIP(*)(::FlatBuffers::ByteBuffer*, ::OEHHJPDIIIP))((::PBYTE)hIl2Cpp + OEHHJPDIIIP_GPMHOBIPEKC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
