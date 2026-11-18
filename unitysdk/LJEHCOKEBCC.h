#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGEDOCMEJFG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJEHCOKEBCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJEHCOKEBCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801F30)
#define LJEHCOKEBCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJEHCOKEBCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJEHCOKEBCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x801F20)
#define LJEHCOKEBCC_OIICNGKBCJE_1_OFFSET UNITYSDK_OFFSET(0x1AAFCFD0)
#define LJEHCOKEBCC_OIICNGKBCJE_OFFSET UNITYSDK_OFFSET(0x1AAFCF10)
#define LJEHCOKEBCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801F70)
#define LJEHCOKEBCC___INIT_OFFSET UNITYSDK_OFFSET(0x801F00)

inline static constexpr unsigned int LJEHCOKEBCC_TypeDefinitionIndex = 17753;

struct alignas(8) LJEHCOKEBCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJEHCOKEBCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGEDOCMEJFG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGEDOCMEJFG&, ::System::Int32&))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LJEHCOKEBCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJEHCOKEBCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LJEHCOKEBCC OIICNGKBCJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJEHCOKEBCC EIFONLCJOPG)
	{
		return ((::LJEHCOKEBCC(*)(::FlatBuffers::ByteBuffer*, ::LJEHCOKEBCC))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_OIICNGKBCJE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LJEHCOKEBCC OIICNGKBCJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJEHCOKEBCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_OIICNGKBCJE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGEDOCMEJFG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGEDOCMEJFG&))((::PBYTE)hIl2Cpp + LJEHCOKEBCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
