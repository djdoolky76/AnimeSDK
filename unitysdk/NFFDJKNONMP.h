#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKOMBLAGKLA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFFDJKNONMP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFFDJKNONMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820520)
#define NFFDJKNONMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFFDJKNONMP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFFDJKNONMP_KKILOINIJPI_1_OFFSET UNITYSDK_OFFSET(0x1C18D600)
#define NFFDJKNONMP_KKILOINIJPI_OFFSET UNITYSDK_OFFSET(0x1C18D5A0)
#define NFFDJKNONMP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820510)
#define NFFDJKNONMP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820500)
#define NFFDJKNONMP___INIT_OFFSET UNITYSDK_OFFSET(0x8204E0)

inline static constexpr unsigned int NFFDJKNONMP_TypeDefinitionIndex = 11523;

struct alignas(8) NFFDJKNONMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFDJKNONMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFFDJKNONMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFDJKNONMP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFDJKNONMP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DKOMBLAGKLA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKOMBLAGKLA&, ::System::Int32&))((::PBYTE)hIl2Cpp + NFFDJKNONMP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKOMBLAGKLA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKOMBLAGKLA&))((::PBYTE)hIl2Cpp + NFFDJKNONMP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NFFDJKNONMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFFDJKNONMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFFDJKNONMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NFFDJKNONMP KKILOINIJPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFFDJKNONMP EIFONLCJOPG)
	{
		return ((::NFFDJKNONMP(*)(::FlatBuffers::ByteBuffer*, ::NFFDJKNONMP))((::PBYTE)hIl2Cpp + NFFDJKNONMP_KKILOINIJPI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NFFDJKNONMP KKILOINIJPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFFDJKNONMP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFFDJKNONMP_KKILOINIJPI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
