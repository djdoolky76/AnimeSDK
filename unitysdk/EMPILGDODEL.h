#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CMEBABJCLCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMPILGDODEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMPILGDODEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE310)
#define EMPILGDODEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMPILGDODEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMPILGDODEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE300)
#define EMPILGDODEL_MBELBIDGOBF_1_OFFSET UNITYSDK_OFFSET(0x19C12850)
#define EMPILGDODEL_MBELBIDGOBF_OFFSET UNITYSDK_OFFSET(0x19C126B0)
#define EMPILGDODEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE2F0)
#define EMPILGDODEL___INIT_OFFSET UNITYSDK_OFFSET(0x7EE2D0)

inline static constexpr unsigned int EMPILGDODEL_TypeDefinitionIndex = 12702;

struct alignas(8) EMPILGDODEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPILGDODEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMPILGDODEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EMPILGDODEL MBELBIDGOBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMPILGDODEL EIFONLCJOPG)
	{
		return ((::EMPILGDODEL(*)(::FlatBuffers::ByteBuffer*, ::EMPILGDODEL))((::PBYTE)hIl2Cpp + EMPILGDODEL_MBELBIDGOBF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPILGDODEL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CMEBABJCLCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMEBABJCLCI&))((::PBYTE)hIl2Cpp + EMPILGDODEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPILGDODEL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EMPILGDODEL MBELBIDGOBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMPILGDODEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMPILGDODEL_MBELBIDGOBF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CMEBABJCLCI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMEBABJCLCI&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMPILGDODEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EMPILGDODEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMPILGDODEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMPILGDODEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
