#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDANFNMCABA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHKIFCNNOPN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHKIFCNNOPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E7C0)
#define OHKIFCNNOPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHKIFCNNOPN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHKIFCNNOPN_KMEGFNJEGHC_1_OFFSET UNITYSDK_OFFSET(0x1BF7B590)
#define OHKIFCNNOPN_KMEGFNJEGHC_OFFSET UNITYSDK_OFFSET(0x1BF7B4F0)
#define OHKIFCNNOPN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E7B0)
#define OHKIFCNNOPN___INIT_OFFSET UNITYSDK_OFFSET(0x81E790)

inline static constexpr unsigned int OHKIFCNNOPN_TypeDefinitionIndex = 9558;

struct alignas(8) OHKIFCNNOPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHKIFCNNOPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDANFNMCABA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDANFNMCABA&))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OHKIFCNNOPN KMEGFNJEGHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHKIFCNNOPN EIFONLCJOPG)
	{
		return ((::OHKIFCNNOPN(*)(::FlatBuffers::ByteBuffer*, ::OHKIFCNNOPN))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_KMEGFNJEGHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OHKIFCNNOPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHKIFCNNOPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OHKIFCNNOPN KMEGFNJEGHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHKIFCNNOPN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHKIFCNNOPN_KMEGFNJEGHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
