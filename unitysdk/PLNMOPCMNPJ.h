#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNJJALCAFAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLNMOPCMNPJ_BBHGLLHDHNO_1_OFFSET UNITYSDK_OFFSET(0x1FC22A20)
#define PLNMOPCMNPJ_BBHGLLHDHNO_OFFSET UNITYSDK_OFFSET(0x1FC229B0)
#define PLNMOPCMNPJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLNMOPCMNPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B490)
#define PLNMOPCMNPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLNMOPCMNPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLNMOPCMNPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B480)
#define PLNMOPCMNPJ___INIT_OFFSET UNITYSDK_OFFSET(0x99B460)

inline static constexpr unsigned int PLNMOPCMNPJ_TypeDefinitionIndex = 10088;

struct alignas(8) PLNMOPCMNPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HNJJALCAFAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNJJALCAFAN&))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PLNMOPCMNPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLNMOPCMNPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PLNMOPCMNPJ BBHGLLHDHNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLNMOPCMNPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_BBHGLLHDHNO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PLNMOPCMNPJ BBHGLLHDHNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLNMOPCMNPJ EIFONLCJOPG)
	{
		return ((::PLNMOPCMNPJ(*)(::FlatBuffers::ByteBuffer*, ::PLNMOPCMNPJ))((::PBYTE)hIl2Cpp + PLNMOPCMNPJ_BBHGLLHDHNO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
