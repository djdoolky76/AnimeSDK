#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCGKHMABOCG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPPHJAKKGIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CPPHJAKKGIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816D70)
#define CPPHJAKKGIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPPHJAKKGIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CPPHJAKKGIH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816D50)
#define CPPHJAKKGIH_MLLBHNGFICG_1_OFFSET UNITYSDK_OFFSET(0x1B9A0730)
#define CPPHJAKKGIH_MLLBHNGFICG_OFFSET UNITYSDK_OFFSET(0x1B9A06C0)
#define CPPHJAKKGIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816D60)
#define CPPHJAKKGIH___INIT_OFFSET UNITYSDK_OFFSET(0x816D30)

inline static constexpr unsigned int CPPHJAKKGIH_TypeDefinitionIndex = 16252;

struct alignas(8) CPPHJAKKGIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPPHJAKKGIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DCGKHMABOCG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCGKHMABOCG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CPPHJAKKGIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPPHJAKKGIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CPPHJAKKGIH MLLBHNGFICG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPPHJAKKGIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_MLLBHNGFICG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CPPHJAKKGIH MLLBHNGFICG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CPPHJAKKGIH EIFONLCJOPG)
	{
		return ((::CPPHJAKKGIH(*)(::FlatBuffers::ByteBuffer*, ::CPPHJAKKGIH))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_MLLBHNGFICG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCGKHMABOCG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCGKHMABOCG&))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHJAKKGIH_GHKKNCCLPAN_OFFSET))(this);
	}
};
