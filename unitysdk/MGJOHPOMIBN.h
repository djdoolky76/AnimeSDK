#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOIEJGKMICA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGJOHPOMIBN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGJOHPOMIBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9D20)
#define MGJOHPOMIBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGJOHPOMIBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGJOHPOMIBN_IFDNIDFAOJC_1_OFFSET UNITYSDK_OFFSET(0x1910AC00)
#define MGJOHPOMIBN_IFDNIDFAOJC_OFFSET UNITYSDK_OFFSET(0x1910AB90)
#define MGJOHPOMIBN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9D10)
#define MGJOHPOMIBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9D00)
#define MGJOHPOMIBN___INIT_OFFSET UNITYSDK_OFFSET(0x7D9CE0)

inline static constexpr unsigned int MGJOHPOMIBN_TypeDefinitionIndex = 10311;

struct alignas(8) MGJOHPOMIBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJOHPOMIBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MGJOHPOMIBN IFDNIDFAOJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGJOHPOMIBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_IFDNIDFAOJC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MGJOHPOMIBN IFDNIDFAOJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGJOHPOMIBN EIFONLCJOPG)
	{
		return ((::MGJOHPOMIBN(*)(::FlatBuffers::ByteBuffer*, ::MGJOHPOMIBN))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_IFDNIDFAOJC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KOIEJGKMICA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOIEJGKMICA&, ::System::Int32&))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MGJOHPOMIBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGJOHPOMIBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOIEJGKMICA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOIEJGKMICA&))((::PBYTE)hIl2Cpp + MGJOHPOMIBN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
