#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDOCNGIOANC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGABLGOHHID_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NGABLGOHHID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF0D0)
#define NGABLGOHHID_BIONDMNCNAE_1_OFFSET UNITYSDK_OFFSET(0x1D0C6830)
#define NGABLGOHHID_BIONDMNCNAE_OFFSET UNITYSDK_OFFSET(0x1D0C66F0)
#define NGABLGOHHID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGABLGOHHID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGABLGOHHID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF110)
#define NGABLGOHHID___INIT_OFFSET UNITYSDK_OFFSET(0x8AF0B0)

inline static constexpr unsigned int NGABLGOHHID_TypeDefinitionIndex = 16915;

struct alignas(8) NGABLGOHHID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGABLGOHHID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGABLGOHHID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NGABLGOHHID BIONDMNCNAE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGABLGOHHID EIFONLCJOPG)
	{
		return ((::NGABLGOHHID(*)(::FlatBuffers::ByteBuffer*, ::NGABLGOHHID))((::PBYTE)hIl2Cpp + NGABLGOHHID_BIONDMNCNAE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDOCNGIOANC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDOCNGIOANC&))((::PBYTE)hIl2Cpp + NGABLGOHHID_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NGABLGOHHID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGABLGOHHID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGABLGOHHID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGABLGOHHID BIONDMNCNAE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGABLGOHHID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGABLGOHHID_BIONDMNCNAE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGABLGOHHID_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGABLGOHHID_PPOMNIFACOL_OFFSET))(this);
	}
};
