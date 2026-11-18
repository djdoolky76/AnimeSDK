#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCNJFELIIAA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFLIALHPGDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFLIALHPGDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1910)
#define BFLIALHPGDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFLIALHPGDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFLIALHPGDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B18F0)
#define BFLIALHPGDK_ODEICAGEFEE_1_OFFSET UNITYSDK_OFFSET(0x17A7AD90)
#define BFLIALHPGDK_ODEICAGEFEE_OFFSET UNITYSDK_OFFSET(0x17A7AD30)
#define BFLIALHPGDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1900)
#define BFLIALHPGDK___INIT_OFFSET UNITYSDK_OFFSET(0x7B18D0)

inline static constexpr unsigned int BFLIALHPGDK_TypeDefinitionIndex = 15589;

struct alignas(8) BFLIALHPGDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLIALHPGDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFLIALHPGDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GCNJFELIIAA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCNJFELIIAA&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFLIALHPGDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLIALHPGDK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GCNJFELIIAA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCNJFELIIAA&))((::PBYTE)hIl2Cpp + BFLIALHPGDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLIALHPGDK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BFLIALHPGDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFLIALHPGDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFLIALHPGDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFLIALHPGDK ODEICAGEFEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFLIALHPGDK EIFONLCJOPG)
	{
		return ((::BFLIALHPGDK(*)(::FlatBuffers::ByteBuffer*, ::BFLIALHPGDK))((::PBYTE)hIl2Cpp + BFLIALHPGDK_ODEICAGEFEE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BFLIALHPGDK ODEICAGEFEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFLIALHPGDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFLIALHPGDK_ODEICAGEFEE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
