#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PECDMLGABBM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLAKGDMMNNF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLAKGDMMNNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E300)
#define OLAKGDMMNNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLAKGDMMNNF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLAKGDMMNNF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E340)
#define OLAKGDMMNNF_MIOBPIBBAOC_1_OFFSET UNITYSDK_OFFSET(0x1CD00A20)
#define OLAKGDMMNNF_MIOBPIBBAOC_OFFSET UNITYSDK_OFFSET(0x1CD00960)
#define OLAKGDMMNNF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E350)
#define OLAKGDMMNNF___INIT_OFFSET UNITYSDK_OFFSET(0x85E2E0)

inline static constexpr unsigned int OLAKGDMMNNF_TypeDefinitionIndex = 12103;

struct alignas(8) OLAKGDMMNNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLAKGDMMNNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OLAKGDMMNNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLAKGDMMNNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PECDMLGABBM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PECDMLGABBM&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OLAKGDMMNNF MIOBPIBBAOC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLAKGDMMNNF EIFONLCJOPG)
	{
		return ((::OLAKGDMMNNF(*)(::FlatBuffers::ByteBuffer*, ::OLAKGDMMNNF))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_MIOBPIBBAOC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OLAKGDMMNNF MIOBPIBBAOC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLAKGDMMNNF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_MIOBPIBBAOC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PECDMLGABBM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PECDMLGABBM&))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAKGDMMNNF_PPOMNIFACOL_OFFSET))(this);
	}
};
