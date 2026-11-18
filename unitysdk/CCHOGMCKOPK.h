#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIJPBFINKHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCHOGMCKOPK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CCHOGMCKOPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x761ED0)
#define CCHOGMCKOPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCHOGMCKOPK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCHOGMCKOPK_LCCEFEADOHC_1_OFFSET UNITYSDK_OFFSET(0x1573ADA0)
#define CCHOGMCKOPK_LCCEFEADOHC_OFFSET UNITYSDK_OFFSET(0x1573ACA0)
#define CCHOGMCKOPK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761EC0)
#define CCHOGMCKOPK___INIT_OFFSET UNITYSDK_OFFSET(0x761EA0)

inline static constexpr unsigned int CCHOGMCKOPK_TypeDefinitionIndex = 10391;

struct alignas(8) CCHOGMCKOPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCHOGMCKOPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIJPBFINKHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIJPBFINKHN&))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CCHOGMCKOPK LCCEFEADOHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCHOGMCKOPK EIFONLCJOPG)
	{
		return ((::CCHOGMCKOPK(*)(::FlatBuffers::ByteBuffer*, ::CCHOGMCKOPK))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_LCCEFEADOHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CCHOGMCKOPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCHOGMCKOPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCHOGMCKOPK LCCEFEADOHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCHOGMCKOPK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCHOGMCKOPK_LCCEFEADOHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
