#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLCILBHPLAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INFGLIHLMIJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define INFGLIHLMIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A960)
#define INFGLIHLMIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INFGLIHLMIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INFGLIHLMIJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A9B0)
#define INFGLIHLMIJ_OBGCKBGIFNF_1_OFFSET UNITYSDK_OFFSET(0x1B132E60)
#define INFGLIHLMIJ_OBGCKBGIFNF_OFFSET UNITYSDK_OFFSET(0x1B132E00)
#define INFGLIHLMIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A9A0)
#define INFGLIHLMIJ___INIT_OFFSET UNITYSDK_OFFSET(0x80A940)

inline static constexpr unsigned int INFGLIHLMIJ_TypeDefinitionIndex = 16653;

struct alignas(8) INFGLIHLMIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INFGLIHLMIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::INFGLIHLMIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INFGLIHLMIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FLCILBHPLAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLCILBHPLAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::INFGLIHLMIJ OBGCKBGIFNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INFGLIHLMIJ EIFONLCJOPG)
	{
		return ((::INFGLIHLMIJ(*)(::FlatBuffers::ByteBuffer*, ::INFGLIHLMIJ))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_OBGCKBGIFNF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::INFGLIHLMIJ OBGCKBGIFNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INFGLIHLMIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_OBGCKBGIFNF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLCILBHPLAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLCILBHPLAE&))((::PBYTE)hIl2Cpp + INFGLIHLMIJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
