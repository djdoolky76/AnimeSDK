#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPOKJCMPONJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LENMEPBLMJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LENMEPBLMJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A55F0)
#define LENMEPBLMJC_ELPIICLGKKB_1_OFFSET UNITYSDK_OFFSET(0x1732AA30)
#define LENMEPBLMJC_ELPIICLGKKB_OFFSET UNITYSDK_OFFSET(0x1732A930)
#define LENMEPBLMJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LENMEPBLMJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LENMEPBLMJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A55E0)
#define LENMEPBLMJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5630)
#define LENMEPBLMJC___INIT_OFFSET UNITYSDK_OFFSET(0x7A55C0)

inline static constexpr unsigned int LENMEPBLMJC_TypeDefinitionIndex = 17513;

struct alignas(8) LENMEPBLMJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENMEPBLMJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENMEPBLMJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IPOKJCMPONJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPOKJCMPONJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LENMEPBLMJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LENMEPBLMJC ELPIICLGKKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LENMEPBLMJC EIFONLCJOPG)
	{
		return ((::LENMEPBLMJC(*)(::FlatBuffers::ByteBuffer*, ::LENMEPBLMJC))((::PBYTE)hIl2Cpp + LENMEPBLMJC_ELPIICLGKKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LENMEPBLMJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LENMEPBLMJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENMEPBLMJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENMEPBLMJC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENMEPBLMJC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LENMEPBLMJC ELPIICLGKKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LENMEPBLMJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENMEPBLMJC_ELPIICLGKKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPOKJCMPONJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPOKJCMPONJ&))((::PBYTE)hIl2Cpp + LENMEPBLMJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
