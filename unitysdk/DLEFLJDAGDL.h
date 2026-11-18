#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEFECHKGJDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLEFLJDAGDL_AJIPHJHOMCL_1_OFFSET UNITYSDK_OFFSET(0x1A593BF0)
#define DLEFLJDAGDL_AJIPHJHOMCL_OFFSET UNITYSDK_OFFSET(0x1A593A90)
#define DLEFLJDAGDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DLEFLJDAGDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB9F0)
#define DLEFLJDAGDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLEFLJDAGDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DLEFLJDAGDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBA30)
#define DLEFLJDAGDL___INIT_OFFSET UNITYSDK_OFFSET(0x7FB9D0)

inline static constexpr unsigned int DLEFLJDAGDL_TypeDefinitionIndex = 10072;

struct alignas(8) DLEFLJDAGDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEFLJDAGDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DLEFLJDAGDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLEFLJDAGDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DLEFLJDAGDL AJIPHJHOMCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DLEFLJDAGDL EIFONLCJOPG)
	{
		return ((::DLEFLJDAGDL(*)(::FlatBuffers::ByteBuffer*, ::DLEFLJDAGDL))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_AJIPHJHOMCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEFECHKGJDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEFECHKGJDC&))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DLEFLJDAGDL AJIPHJHOMCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLEFLJDAGDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEFLJDAGDL_AJIPHJHOMCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
