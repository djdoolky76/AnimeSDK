#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJBNPGMKJBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKPNMIAGBMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KKPNMIAGBMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E49E0)
#define KKPNMIAGBMA_FKDJJGFMEBO_1_OFFSET UNITYSDK_OFFSET(0x1955D460)
#define KKPNMIAGBMA_FKDJJGFMEBO_OFFSET UNITYSDK_OFFSET(0x1955D400)
#define KKPNMIAGBMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKPNMIAGBMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKPNMIAGBMA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E49C0)
#define KKPNMIAGBMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E49D0)
#define KKPNMIAGBMA___INIT_OFFSET UNITYSDK_OFFSET(0x7E49A0)

inline static constexpr unsigned int KKPNMIAGBMA_TypeDefinitionIndex = 16944;

struct alignas(8) KKPNMIAGBMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPNMIAGBMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KJBNPGMKJBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJBNPGMKJBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KKPNMIAGBMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKPNMIAGBMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KKPNMIAGBMA FKDJJGFMEBO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKPNMIAGBMA EIFONLCJOPG)
	{
		return ((::KKPNMIAGBMA(*)(::FlatBuffers::ByteBuffer*, ::KKPNMIAGBMA))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_FKDJJGFMEBO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KKPNMIAGBMA FKDJJGFMEBO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKPNMIAGBMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_FKDJJGFMEBO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJBNPGMKJBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJBNPGMKJBJ&))((::PBYTE)hIl2Cpp + KKPNMIAGBMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
