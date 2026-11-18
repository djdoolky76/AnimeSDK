#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EIIHIBHAPKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHOCBLAMLKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHOCBLAMLKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCE60)
#define HHOCBLAMLKA_DHLFBNMIOBM_1_OFFSET UNITYSDK_OFFSET(0x1A5C9DC0)
#define HHOCBLAMLKA_DHLFBNMIOBM_OFFSET UNITYSDK_OFFSET(0x1A5C9D20)
#define HHOCBLAMLKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHOCBLAMLKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHOCBLAMLKA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FCEA0)
#define HHOCBLAMLKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCEB0)
#define HHOCBLAMLKA___INIT_OFFSET UNITYSDK_OFFSET(0x7FCE40)

inline static constexpr unsigned int HHOCBLAMLKA_TypeDefinitionIndex = 13327;

struct alignas(8) HHOCBLAMLKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHOCBLAMLKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EIIHIBHAPKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EIIHIBHAPKE&))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HHOCBLAMLKA DHLFBNMIOBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHOCBLAMLKA EIFONLCJOPG)
	{
		return ((::HHOCBLAMLKA(*)(::FlatBuffers::ByteBuffer*, ::HHOCBLAMLKA))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_DHLFBNMIOBM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HHOCBLAMLKA DHLFBNMIOBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHOCBLAMLKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_DHLFBNMIOBM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HHOCBLAMLKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHOCBLAMLKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EIIHIBHAPKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EIIHIBHAPKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOCBLAMLKA_PPOMNIFACOL_OFFSET))(this);
	}
};
