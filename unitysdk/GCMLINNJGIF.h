#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIOBJHHNNIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCMLINNJGIF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GCMLINNJGIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE330)
#define GCMLINNJGIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCMLINNJGIF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GCMLINNJGIF_GMIBDCNMJGO_1_OFFSET UNITYSDK_OFFSET(0x19327EF0)
#define GCMLINNJGIF_GMIBDCNMJGO_OFFSET UNITYSDK_OFFSET(0x19327E80)
#define GCMLINNJGIF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DE380)
#define GCMLINNJGIF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE370)
#define GCMLINNJGIF___INIT_OFFSET UNITYSDK_OFFSET(0x7DE310)

inline static constexpr unsigned int GCMLINNJGIF_TypeDefinitionIndex = 11514;

struct alignas(8) GCMLINNJGIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMLINNJGIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCMLINNJGIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMLINNJGIF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIOBJHHNNIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIOBJHHNNIG&))((::PBYTE)hIl2Cpp + GCMLINNJGIF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GCMLINNJGIF GMIBDCNMJGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCMLINNJGIF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCMLINNJGIF_GMIBDCNMJGO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GCMLINNJGIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCMLINNJGIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCMLINNJGIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GCMLINNJGIF GMIBDCNMJGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GCMLINNJGIF EIFONLCJOPG)
	{
		return ((::GCMLINNJGIF(*)(::FlatBuffers::ByteBuffer*, ::GCMLINNJGIF))((::PBYTE)hIl2Cpp + GCMLINNJGIF_GMIBDCNMJGO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMLINNJGIF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DIOBJHHNNIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIOBJHHNNIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GCMLINNJGIF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
