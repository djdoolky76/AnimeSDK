#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHKMCGIHMGB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJCGNPOGCDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJCGNPOGCDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2AD0)
#define FJCGNPOGCDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJCGNPOGCDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJCGNPOGCDK_LPBIPAKPOMK_1_OFFSET UNITYSDK_OFFSET(0x19F59F50)
#define FJCGNPOGCDK_LPBIPAKPOMK_OFFSET UNITYSDK_OFFSET(0x19F59EB0)
#define FJCGNPOGCDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2AC0)
#define FJCGNPOGCDK___INIT_OFFSET UNITYSDK_OFFSET(0x7F2AA0)

inline static constexpr unsigned int FJCGNPOGCDK_TypeDefinitionIndex = 12789;

struct alignas(8) FJCGNPOGCDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCGNPOGCDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FJCGNPOGCDK LPBIPAKPOMK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJCGNPOGCDK EIFONLCJOPG)
	{
		return ((::FJCGNPOGCDK(*)(::FlatBuffers::ByteBuffer*, ::FJCGNPOGCDK))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_LPBIPAKPOMK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FJCGNPOGCDK LPBIPAKPOMK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJCGNPOGCDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_LPBIPAKPOMK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHKMCGIHMGB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHKMCGIHMGB&))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FJCGNPOGCDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJCGNPOGCDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCGNPOGCDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
