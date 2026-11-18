#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMMNEEJLCIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAFHNLMMHKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KAFHNLMMHKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812DB0)
#define KAFHNLMMHKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KAFHNLMMHKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KAFHNLMMHKB_JPNGJBCPFHA_1_OFFSET UNITYSDK_OFFSET(0x1B7DFC30)
#define KAFHNLMMHKB_JPNGJBCPFHA_OFFSET UNITYSDK_OFFSET(0x1B7DFBC0)
#define KAFHNLMMHKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812D90)
#define KAFHNLMMHKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812DA0)
#define KAFHNLMMHKB___INIT_OFFSET UNITYSDK_OFFSET(0x812D70)

inline static constexpr unsigned int KAFHNLMMHKB_TypeDefinitionIndex = 10269;

struct alignas(8) KAFHNLMMHKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAFHNLMMHKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KAFHNLMMHKB JPNGJBCPFHA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAFHNLMMHKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_JPNGJBCPFHA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KAFHNLMMHKB JPNGJBCPFHA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KAFHNLMMHKB EIFONLCJOPG)
	{
		return ((::KAFHNLMMHKB(*)(::FlatBuffers::ByteBuffer*, ::KAFHNLMMHKB))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_JPNGJBCPFHA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMMNEEJLCIL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMMNEEJLCIL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KAFHNLMMHKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAFHNLMMHKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMMNEEJLCIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMMNEEJLCIL&))((::PBYTE)hIl2Cpp + KAFHNLMMHKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
