#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPPNCNHJCEP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMEPOJHEEPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMEPOJHEEPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C47E0)
#define NMEPOJHEEPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMEPOJHEEPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMEPOJHEEPP_IMJFLILPALA_1_OFFSET UNITYSDK_OFFSET(0x17FD75A0)
#define NMEPOJHEEPP_IMJFLILPALA_OFFSET UNITYSDK_OFFSET(0x17FD74A0)
#define NMEPOJHEEPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C47C0)
#define NMEPOJHEEPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C47D0)
#define NMEPOJHEEPP___INIT_OFFSET UNITYSDK_OFFSET(0x7C47A0)

inline static constexpr unsigned int NMEPOJHEEPP_TypeDefinitionIndex = 13484;

struct alignas(8) NMEPOJHEEPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMEPOJHEEPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NMEPOJHEEPP IMJFLILPALA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMEPOJHEEPP EIFONLCJOPG)
	{
		return ((::NMEPOJHEEPP(*)(::FlatBuffers::ByteBuffer*, ::NMEPOJHEEPP))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_IMJFLILPALA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NMEPOJHEEPP IMJFLILPALA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMEPOJHEEPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_IMJFLILPALA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 OFGKHMJFPEH, ::System::Int32 PGINNMMOFLI, ::LPPNCNHJCEP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::LPPNCNHJCEP&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_LLGCOCLACNA_OFFSET))(this, OFGKHMJFPEH, PGINNMMOFLI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NMEPOJHEEPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMEPOJHEEPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPPNCNHJCEP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPPNCNHJCEP&))((::PBYTE)hIl2Cpp + NMEPOJHEEPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
