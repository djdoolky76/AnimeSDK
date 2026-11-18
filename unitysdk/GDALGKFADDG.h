#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJGMGCJHGPJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDALGKFADDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDALGKFADDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB2E0)
#define GDALGKFADDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDALGKFADDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDALGKFADDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EB330)
#define GDALGKFADDG_PNEOLKBKCHN_1_OFFSET UNITYSDK_OFFSET(0x19AF8980)
#define GDALGKFADDG_PNEOLKBKCHN_OFFSET UNITYSDK_OFFSET(0x19AF87E0)
#define GDALGKFADDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB320)
#define GDALGKFADDG___INIT_OFFSET UNITYSDK_OFFSET(0x7EB2C0)

inline static constexpr unsigned int GDALGKFADDG_TypeDefinitionIndex = 17130;

struct alignas(8) GDALGKFADDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDALGKFADDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDALGKFADDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDALGKFADDG PNEOLKBKCHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDALGKFADDG EIFONLCJOPG)
	{
		return ((::GDALGKFADDG(*)(::FlatBuffers::ByteBuffer*, ::GDALGKFADDG))((::PBYTE)hIl2Cpp + GDALGKFADDG_PNEOLKBKCHN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJGMGCJHGPJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGMGCJHGPJ&))((::PBYTE)hIl2Cpp + GDALGKFADDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GDALGKFADDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDALGKFADDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDALGKFADDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDALGKFADDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GDALGKFADDG PNEOLKBKCHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDALGKFADDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDALGKFADDG_PNEOLKBKCHN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDALGKFADDG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJGMGCJHGPJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGMGCJHGPJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDALGKFADDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
