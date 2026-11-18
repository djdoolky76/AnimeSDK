#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EAFKALGKOLK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBMJGIIDPOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBMJGIIDPOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF500)
#define MBMJGIIDPOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBMJGIIDPOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBMJGIIDPOE_LIGPNKOEIGG_1_OFFSET UNITYSDK_OFFSET(0x19DAF2F0)
#define MBMJGIIDPOE_LIGPNKOEIGG_OFFSET UNITYSDK_OFFSET(0x19DAF290)
#define MBMJGIIDPOE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF540)
#define MBMJGIIDPOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF4F0)
#define MBMJGIIDPOE___INIT_OFFSET UNITYSDK_OFFSET(0x7EF4D0)

inline static constexpr unsigned int MBMJGIIDPOE_TypeDefinitionIndex = 11300;

struct alignas(8) MBMJGIIDPOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBMJGIIDPOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EAFKALGKOLK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EAFKALGKOLK&))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MBMJGIIDPOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBMJGIIDPOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MBMJGIIDPOE LIGPNKOEIGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBMJGIIDPOE EIFONLCJOPG)
	{
		return ((::MBMJGIIDPOE(*)(::FlatBuffers::ByteBuffer*, ::MBMJGIIDPOE))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_LIGPNKOEIGG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MBMJGIIDPOE LIGPNKOEIGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBMJGIIDPOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_LIGPNKOEIGG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EAFKALGKOLK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EAFKALGKOLK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBMJGIIDPOE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
