#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJJIFMDJKCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KODHEMGHJLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KODHEMGHJLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D70D0)
#define KODHEMGHJLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KODHEMGHJLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KODHEMGHJLP_IDPOIAGIFON_1_OFFSET UNITYSDK_OFFSET(0x18DF0D70)
#define KODHEMGHJLP_IDPOIAGIFON_OFFSET UNITYSDK_OFFSET(0x18DF0D10)
#define KODHEMGHJLP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7110)
#define KODHEMGHJLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7120)
#define KODHEMGHJLP___INIT_OFFSET UNITYSDK_OFFSET(0x7D70B0)

inline static constexpr unsigned int KODHEMGHJLP_TypeDefinitionIndex = 9373;

struct alignas(8) KODHEMGHJLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHEMGHJLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KODHEMGHJLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KODHEMGHJLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KODHEMGHJLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KODHEMGHJLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJJIFMDJKCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJJIFMDJKCN&))((::PBYTE)hIl2Cpp + KODHEMGHJLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHEMGHJLP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LJJIFMDJKCN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJJIFMDJKCN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KODHEMGHJLP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KODHEMGHJLP IDPOIAGIFON(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KODHEMGHJLP EIFONLCJOPG)
	{
		return ((::KODHEMGHJLP(*)(::FlatBuffers::ByteBuffer*, ::KODHEMGHJLP))((::PBYTE)hIl2Cpp + KODHEMGHJLP_IDPOIAGIFON_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KODHEMGHJLP IDPOIAGIFON_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KODHEMGHJLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KODHEMGHJLP_IDPOIAGIFON_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHEMGHJLP_PPOMNIFACOL_OFFSET))(this);
	}
};
