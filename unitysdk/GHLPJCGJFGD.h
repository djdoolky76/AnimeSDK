#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHLPJCGJFGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE6F0)
#define GHLPJCGJFGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHLPJCGJFGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHLPJCGJFGD_IPNCOJODJJJ_1_OFFSET UNITYSDK_OFFSET(0x19331470)
#define GHLPJCGJFGD_IPNCOJODJJJ_OFFSET UNITYSDK_OFFSET(0x193313D0)
#define GHLPJCGJFGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE6E0)
#define GHLPJCGJFGD___INIT_OFFSET UNITYSDK_OFFSET(0x7DE6C0)

inline static constexpr unsigned int GHLPJCGJFGD_TypeDefinitionIndex = 15703;

struct alignas(8) GHLPJCGJFGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLPJCGJFGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GHLPJCGJFGD IPNCOJODJJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHLPJCGJFGD EIFONLCJOPG)
	{
		return ((::GHLPJCGJFGD(*)(::FlatBuffers::ByteBuffer*, ::GHLPJCGJFGD))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_IPNCOJODJJJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GHLPJCGJFGD IPNCOJODJJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLPJCGJFGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_IPNCOJODJJJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GHLPJCGJFGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHLPJCGJFGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHLPJCGJFGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
