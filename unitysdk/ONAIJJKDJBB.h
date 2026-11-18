#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COOJDFEMEFO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONAIJJKDJBB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONAIJJKDJBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937020)
#define ONAIJJKDJBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONAIJJKDJBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONAIJJKDJBB_HLOMKDNPIPJ_1_OFFSET UNITYSDK_OFFSET(0x1EDB6BE0)
#define ONAIJJKDJBB_HLOMKDNPIPJ_OFFSET UNITYSDK_OFFSET(0x1EDB6B70)
#define ONAIJJKDJBB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x937010)
#define ONAIJJKDJBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937000)
#define ONAIJJKDJBB___INIT_OFFSET UNITYSDK_OFFSET(0x936FE0)

inline static constexpr unsigned int ONAIJJKDJBB_TypeDefinitionIndex = 15207;

struct alignas(8) ONAIJJKDJBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONAIJJKDJBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COOJDFEMEFO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COOJDFEMEFO&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ONAIJJKDJBB HLOMKDNPIPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONAIJJKDJBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_HLOMKDNPIPJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COOJDFEMEFO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COOJDFEMEFO&))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ONAIJJKDJBB HLOMKDNPIPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONAIJJKDJBB EIFONLCJOPG)
	{
		return ((::ONAIJJKDJBB(*)(::FlatBuffers::ByteBuffer*, ::ONAIJJKDJBB))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_HLOMKDNPIPJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ONAIJJKDJBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONAIJJKDJBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAIJJKDJBB_GHKKNCCLPAN_OFFSET))(this);
	}
};
