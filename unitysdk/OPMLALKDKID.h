#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEGGHLKEPMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPMLALKDKID_AKLLBJIBEKG_1_OFFSET UNITYSDK_OFFSET(0x1736FDC0)
#define OPMLALKDKID_AKLLBJIBEKG_OFFSET UNITYSDK_OFFSET(0x1736FD00)
#define OPMLALKDKID_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OPMLALKDKID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6B70)
#define OPMLALKDKID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPMLALKDKID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPMLALKDKID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6BB0)
#define OPMLALKDKID___INIT_OFFSET UNITYSDK_OFFSET(0x7A6B50)

inline static constexpr unsigned int OPMLALKDKID_TypeDefinitionIndex = 10089;

struct alignas(8) OPMLALKDKID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMLALKDKID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPMLALKDKID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OPMLALKDKID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPMLALKDKID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPMLALKDKID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OPMLALKDKID AKLLBJIBEKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPMLALKDKID EIFONLCJOPG)
	{
		return ((::OPMLALKDKID(*)(::FlatBuffers::ByteBuffer*, ::OPMLALKDKID))((::PBYTE)hIl2Cpp + OPMLALKDKID_AKLLBJIBEKG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMLALKDKID_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OPMLALKDKID AKLLBJIBEKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPMLALKDKID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPMLALKDKID_AKLLBJIBEKG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMLALKDKID_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEGGHLKEPMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEGGHLKEPMB&))((::PBYTE)hIl2Cpp + OPMLALKDKID_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
