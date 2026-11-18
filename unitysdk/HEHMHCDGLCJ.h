#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDNEFPBDKII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEHMHCDGLCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HEHMHCDGLCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B790)
#define HEHMHCDGLCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEHMHCDGLCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEHMHCDGLCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B7D0)
#define HEHMHCDGLCJ_OKMFOIJHJOP_1_OFFSET UNITYSDK_OFFSET(0x16657B20)
#define HEHMHCDGLCJ_OKMFOIJHJOP_OFFSET UNITYSDK_OFFSET(0x16657AB0)
#define HEHMHCDGLCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B780)
#define HEHMHCDGLCJ___INIT_OFFSET UNITYSDK_OFFSET(0x78B760)

inline static constexpr unsigned int HEHMHCDGLCJ_TypeDefinitionIndex = 13365;

struct alignas(8) HEHMHCDGLCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HEHMHCDGLCJ OKMFOIJHJOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEHMHCDGLCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_OKMFOIJHJOP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HEHMHCDGLCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEHMHCDGLCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HEHMHCDGLCJ OKMFOIJHJOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEHMHCDGLCJ EIFONLCJOPG)
	{
		return ((::HEHMHCDGLCJ(*)(::FlatBuffers::ByteBuffer*, ::HEHMHCDGLCJ))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_OKMFOIJHJOP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LDNEFPBDKII& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDNEFPBDKII&, ::System::Int32&))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDNEFPBDKII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDNEFPBDKII&))((::PBYTE)hIl2Cpp + HEHMHCDGLCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
