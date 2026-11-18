#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEPEOOIOMKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJKJNFGDJKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJKJNFGDJKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B24B0)
#define DJKJNFGDJKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJKJNFGDJKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJKJNFGDJKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2490)
#define DJKJNFGDJKO_OBFGHAMMDOM_1_OFFSET UNITYSDK_OFFSET(0x17A9C330)
#define DJKJNFGDJKO_OBFGHAMMDOM_OFFSET UNITYSDK_OFFSET(0x17A9C290)
#define DJKJNFGDJKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B24A0)
#define DJKJNFGDJKO___INIT_OFFSET UNITYSDK_OFFSET(0x7B2470)

inline static constexpr unsigned int DJKJNFGDJKO_TypeDefinitionIndex = 17744;

struct alignas(8) DJKJNFGDJKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJKJNFGDJKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEPEOOIOMKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEPEOOIOMKL&))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AEPEOOIOMKL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEPEOOIOMKL&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DJKJNFGDJKO OBFGHAMMDOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJKJNFGDJKO EIFONLCJOPG)
	{
		return ((::DJKJNFGDJKO(*)(::FlatBuffers::ByteBuffer*, ::DJKJNFGDJKO))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_OBFGHAMMDOM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DJKJNFGDJKO OBFGHAMMDOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJKJNFGDJKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_OBFGHAMMDOM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DJKJNFGDJKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJKJNFGDJKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJKJNFGDJKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
