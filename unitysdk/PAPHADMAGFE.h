#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDACPCOCLEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAPHADMAGFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PAPHADMAGFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABB00)
#define PAPHADMAGFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAPHADMAGFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PAPHADMAGFE_LGNLPEEKAJC_1_OFFSET UNITYSDK_OFFSET(0x1D000830)
#define PAPHADMAGFE_LGNLPEEKAJC_OFFSET UNITYSDK_OFFSET(0x1D000790)
#define PAPHADMAGFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABAF0)
#define PAPHADMAGFE___INIT_OFFSET UNITYSDK_OFFSET(0x8ABAD0)

inline static constexpr unsigned int PAPHADMAGFE_TypeDefinitionIndex = 14501;

struct alignas(8) PAPHADMAGFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPHADMAGFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAPHADMAGFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PAPHADMAGFE LGNLPEEKAJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PAPHADMAGFE EIFONLCJOPG)
	{
		return ((::PAPHADMAGFE(*)(::FlatBuffers::ByteBuffer*, ::PAPHADMAGFE))((::PBYTE)hIl2Cpp + PAPHADMAGFE_LGNLPEEKAJC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PAPHADMAGFE LGNLPEEKAJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAPHADMAGFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAPHADMAGFE_LGNLPEEKAJC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPHADMAGFE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPHADMAGFE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDACPCOCLEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDACPCOCLEL&))((::PBYTE)hIl2Cpp + PAPHADMAGFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PAPHADMAGFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAPHADMAGFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAPHADMAGFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
