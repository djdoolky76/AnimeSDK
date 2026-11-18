#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGOONPLGFHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNFJLPCNBFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNFJLPCNBFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB1A0)
#define MNFJLPCNBFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNFJLPCNBFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNFJLPCNBFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB1E0)
#define MNFJLPCNBFN_MHHCPBGHIMO_1_OFFSET UNITYSDK_OFFSET(0x1CFE5150)
#define MNFJLPCNBFN_MHHCPBGHIMO_OFFSET UNITYSDK_OFFSET(0x1CFE50F0)
#define MNFJLPCNBFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB1F0)
#define MNFJLPCNBFN___INIT_OFFSET UNITYSDK_OFFSET(0x8AB180)

inline static constexpr unsigned int MNFJLPCNBFN_TypeDefinitionIndex = 13955;

struct alignas(8) MNFJLPCNBFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFJLPCNBFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MNFJLPCNBFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNFJLPCNBFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGOONPLGFHF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGOONPLGFHF&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGOONPLGFHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGOONPLGFHF&))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MNFJLPCNBFN MHHCPBGHIMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNFJLPCNBFN EIFONLCJOPG)
	{
		return ((::MNFJLPCNBFN(*)(::FlatBuffers::ByteBuffer*, ::MNFJLPCNBFN))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_MHHCPBGHIMO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MNFJLPCNBFN MHHCPBGHIMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNFJLPCNBFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNFJLPCNBFN_MHHCPBGHIMO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
