#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFCLMCGLMOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFIGBOLNIKE_AFMGHEMIHCP_1_OFFSET UNITYSDK_OFFSET(0x17768AD0)
#define CFIGBOLNIKE_AFMGHEMIHCP_OFFSET UNITYSDK_OFFSET(0x17768A60)
#define CFIGBOLNIKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFIGBOLNIKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACF40)
#define CFIGBOLNIKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFIGBOLNIKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFIGBOLNIKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACF30)
#define CFIGBOLNIKE___INIT_OFFSET UNITYSDK_OFFSET(0x7ACF10)

inline static constexpr unsigned int CFIGBOLNIKE_TypeDefinitionIndex = 9527;

struct alignas(8) CFIGBOLNIKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFIGBOLNIKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFCLMCGLMOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFCLMCGLMOP&))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CFIGBOLNIKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFIGBOLNIKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CFIGBOLNIKE AFMGHEMIHCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFIGBOLNIKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_AFMGHEMIHCP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CFIGBOLNIKE AFMGHEMIHCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFIGBOLNIKE EIFONLCJOPG)
	{
		return ((::CFIGBOLNIKE(*)(::FlatBuffers::ByteBuffer*, ::CFIGBOLNIKE))((::PBYTE)hIl2Cpp + CFIGBOLNIKE_AFMGHEMIHCP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
