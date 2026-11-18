#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BGDKDJKKNIC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEADGFGPDIJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEADGFGPDIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF140)
#define LEADGFGPDIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEADGFGPDIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEADGFGPDIJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF120)
#define LEADGFGPDIJ_LNJIKBEPNHK_1_OFFSET UNITYSDK_OFFSET(0x19DA3DB0)
#define LEADGFGPDIJ_LNJIKBEPNHK_OFFSET UNITYSDK_OFFSET(0x19DA3CB0)
#define LEADGFGPDIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF130)
#define LEADGFGPDIJ___INIT_OFFSET UNITYSDK_OFFSET(0x7EF100)

inline static constexpr unsigned int LEADGFGPDIJ_TypeDefinitionIndex = 14958;

struct alignas(8) LEADGFGPDIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEADGFGPDIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BGDKDJKKNIC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGDKDJKKNIC&, ::System::Int32&))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LEADGFGPDIJ LNJIKBEPNHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEADGFGPDIJ EIFONLCJOPG)
	{
		return ((::LEADGFGPDIJ(*)(::FlatBuffers::ByteBuffer*, ::LEADGFGPDIJ))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_LNJIKBEPNHK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LEADGFGPDIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEADGFGPDIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BGDKDJKKNIC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGDKDJKKNIC&))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LEADGFGPDIJ LNJIKBEPNHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEADGFGPDIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEADGFGPDIJ_LNJIKBEPNHK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
