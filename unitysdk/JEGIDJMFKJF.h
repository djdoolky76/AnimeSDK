#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IELJMPHBOEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEGIDJMFKJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEGIDJMFKJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5570)
#define JEGIDJMFKJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEGIDJMFKJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEGIDJMFKJF_JDCCEKDIOBN_1_OFFSET UNITYSDK_OFFSET(0x18BC7DA0)
#define JEGIDJMFKJF_JDCCEKDIOBN_OFFSET UNITYSDK_OFFSET(0x18BC7D30)
#define JEGIDJMFKJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D55B0)
#define JEGIDJMFKJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D55C0)
#define JEGIDJMFKJF___INIT_OFFSET UNITYSDK_OFFSET(0x7D5550)

inline static constexpr unsigned int JEGIDJMFKJF_TypeDefinitionIndex = 11970;

struct alignas(8) JEGIDJMFKJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEGIDJMFKJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JEGIDJMFKJF JDCCEKDIOBN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEGIDJMFKJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_JDCCEKDIOBN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JEGIDJMFKJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEGIDJMFKJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JEGIDJMFKJF JDCCEKDIOBN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEGIDJMFKJF EIFONLCJOPG)
	{
		return ((::JEGIDJMFKJF(*)(::FlatBuffers::ByteBuffer*, ::JEGIDJMFKJF))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_JDCCEKDIOBN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IELJMPHBOEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IELJMPHBOEN&))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IELJMPHBOEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IELJMPHBOEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGIDJMFKJF_PPOMNIFACOL_OFFSET))(this);
	}
};
