#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GGOKBDNIDDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJGKEJALPJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJGKEJALPJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8050)
#define GJGKEJALPJO_EGBOOAFGAOO_1_OFFSET UNITYSDK_OFFSET(0x1A4DC490)
#define GJGKEJALPJO_EGBOOAFGAOO_OFFSET UNITYSDK_OFFSET(0x1A4DC3F0)
#define GJGKEJALPJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJGKEJALPJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJGKEJALPJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8030)
#define GJGKEJALPJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8040)
#define GJGKEJALPJO___INIT_OFFSET UNITYSDK_OFFSET(0x7F8010)

inline static constexpr unsigned int GJGKEJALPJO_TypeDefinitionIndex = 16172;

struct alignas(8) GJGKEJALPJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGKEJALPJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJGKEJALPJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GGOKBDNIDDC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGOKBDNIDDC&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJGKEJALPJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GJGKEJALPJO EGBOOAFGAOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJGKEJALPJO EIFONLCJOPG)
	{
		return ((::GJGKEJALPJO(*)(::FlatBuffers::ByteBuffer*, ::GJGKEJALPJO))((::PBYTE)hIl2Cpp + GJGKEJALPJO_EGBOOAFGAOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GJGKEJALPJO EGBOOAFGAOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJGKEJALPJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJGKEJALPJO_EGBOOAFGAOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GGOKBDNIDDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGOKBDNIDDC&))((::PBYTE)hIl2Cpp + GJGKEJALPJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGKEJALPJO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGKEJALPJO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GJGKEJALPJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJGKEJALPJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJGKEJALPJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
