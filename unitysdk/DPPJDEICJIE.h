#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PHHNINAEJBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPPJDEICJIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPPJDEICJIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2FD0)
#define DPPJDEICJIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPPJDEICJIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPPJDEICJIE_JENDBEKLCJO_1_OFFSET UNITYSDK_OFFSET(0x19516EF0)
#define DPPJDEICJIE_JENDBEKLCJO_OFFSET UNITYSDK_OFFSET(0x19516E80)
#define DPPJDEICJIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2FC0)
#define DPPJDEICJIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3010)
#define DPPJDEICJIE___INIT_OFFSET UNITYSDK_OFFSET(0x7E2FA0)

inline static constexpr unsigned int DPPJDEICJIE_TypeDefinitionIndex = 17269;

struct alignas(8) DPPJDEICJIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPJDEICJIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPJDEICJIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PHHNINAEJBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHHNINAEJBJ&))((::PBYTE)hIl2Cpp + DPPJDEICJIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PHHNINAEJBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHHNINAEJBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPPJDEICJIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPPJDEICJIE JENDBEKLCJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPPJDEICJIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPJDEICJIE_JENDBEKLCJO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DPPJDEICJIE JENDBEKLCJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPPJDEICJIE EIFONLCJOPG)
	{
		return ((::DPPJDEICJIE(*)(::FlatBuffers::ByteBuffer*, ::DPPJDEICJIE))((::PBYTE)hIl2Cpp + DPPJDEICJIE_JENDBEKLCJO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DPPJDEICJIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPPJDEICJIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPJDEICJIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPJDEICJIE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPJDEICJIE_GHKKNCCLPAN_OFFSET))(this);
	}
};
