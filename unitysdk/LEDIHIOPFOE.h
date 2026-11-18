#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LFJJHNGEGKN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEDIHIOPFOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEDIHIOPFOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5150)
#define LEDIHIOPFOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEDIHIOPFOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEDIHIOPFOE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5140)
#define LEDIHIOPFOE_NIOPDFECAGB_1_OFFSET UNITYSDK_OFFSET(0x195641D0)
#define LEDIHIOPFOE_NIOPDFECAGB_OFFSET UNITYSDK_OFFSET(0x19564130)
#define LEDIHIOPFOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5130)
#define LEDIHIOPFOE___INIT_OFFSET UNITYSDK_OFFSET(0x7E5110)

inline static constexpr unsigned int LEDIHIOPFOE_TypeDefinitionIndex = 10841;

struct alignas(8) LEDIHIOPFOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEDIHIOPFOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LFJJHNGEGKN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFJJHNGEGKN&))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LEDIHIOPFOE NIOPDFECAGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEDIHIOPFOE EIFONLCJOPG)
	{
		return ((::LEDIHIOPFOE(*)(::FlatBuffers::ByteBuffer*, ::LEDIHIOPFOE))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_NIOPDFECAGB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LEDIHIOPFOE NIOPDFECAGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEDIHIOPFOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_NIOPDFECAGB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LFJJHNGEGKN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFJJHNGEGKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LEDIHIOPFOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEDIHIOPFOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDIHIOPFOE_GHKKNCCLPAN_OFFSET))(this);
	}
};
