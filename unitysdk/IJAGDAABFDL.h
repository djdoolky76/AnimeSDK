#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IHDECIJIPAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJAGDAABFDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IJAGDAABFDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BED40)
#define IJAGDAABFDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJAGDAABFDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJAGDAABFDL_OMLDCBEJDOE_1_OFFSET UNITYSDK_OFFSET(0x17C1CB90)
#define IJAGDAABFDL_OMLDCBEJDOE_OFFSET UNITYSDK_OFFSET(0x17C1CAF0)
#define IJAGDAABFDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BED80)
#define IJAGDAABFDL___INIT_OFFSET UNITYSDK_OFFSET(0x7BED20)

inline static constexpr unsigned int IJAGDAABFDL_TypeDefinitionIndex = 12512;

struct alignas(8) IJAGDAABFDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGDAABFDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGDAABFDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IHDECIJIPAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IHDECIJIPAE&))((::PBYTE)hIl2Cpp + IJAGDAABFDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IJAGDAABFDL OMLDCBEJDOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJAGDAABFDL EIFONLCJOPG)
	{
		return ((::IJAGDAABFDL(*)(::FlatBuffers::ByteBuffer*, ::IJAGDAABFDL))((::PBYTE)hIl2Cpp + IJAGDAABFDL_OMLDCBEJDOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IJAGDAABFDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJAGDAABFDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGDAABFDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJAGDAABFDL OMLDCBEJDOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJAGDAABFDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGDAABFDL_OMLDCBEJDOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGDAABFDL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGDAABFDL_GHKKNCCLPAN_OFFSET))(this);
	}
};
