#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGCGDGHJKMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPMDCJAGCHO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPMDCJAGCHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B26F0)
#define DPMDCJAGCHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPMDCJAGCHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPMDCJAGCHO_HJOBDMOEBLD_1_OFFSET UNITYSDK_OFFSET(0x17A9FE20)
#define DPMDCJAGCHO_HJOBDMOEBLD_OFFSET UNITYSDK_OFFSET(0x17A9FDB0)
#define DPMDCJAGCHO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2740)
#define DPMDCJAGCHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2730)
#define DPMDCJAGCHO___INIT_OFFSET UNITYSDK_OFFSET(0x7B26D0)

inline static constexpr unsigned int DPMDCJAGCHO_TypeDefinitionIndex = 16039;

struct alignas(8) DPMDCJAGCHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMDCJAGCHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DPMDCJAGCHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPMDCJAGCHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DPMDCJAGCHO HJOBDMOEBLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPMDCJAGCHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_HJOBDMOEBLD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CGCGDGHJKMD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGCGDGHJKMD&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPMDCJAGCHO HJOBDMOEBLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPMDCJAGCHO EIFONLCJOPG)
	{
		return ((::DPMDCJAGCHO(*)(::FlatBuffers::ByteBuffer*, ::DPMDCJAGCHO))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_HJOBDMOEBLD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGCGDGHJKMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGCGDGHJKMD&))((::PBYTE)hIl2Cpp + DPMDCJAGCHO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
