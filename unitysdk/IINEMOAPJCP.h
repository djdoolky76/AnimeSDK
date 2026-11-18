#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IINEMOAPJCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5040)
#define IINEMOAPJCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IINEMOAPJCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IINEMOAPJCP_GOBCFMFBFID_1_OFFSET UNITYSDK_OFFSET(0x18BBCC20)
#define IINEMOAPJCP_GOBCFMFBFID_OFFSET UNITYSDK_OFFSET(0x18BBCBB0)
#define IINEMOAPJCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5080)
#define IINEMOAPJCP___INIT_OFFSET UNITYSDK_OFFSET(0x7D5020)

inline static constexpr unsigned int IINEMOAPJCP_TypeDefinitionIndex = 10639;

struct alignas(8) IINEMOAPJCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEMOAPJCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IINEMOAPJCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IINEMOAPJCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IINEMOAPJCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IINEMOAPJCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEMOAPJCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEMOAPJCP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IINEMOAPJCP GOBCFMFBFID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IINEMOAPJCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IINEMOAPJCP_GOBCFMFBFID_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IINEMOAPJCP GOBCFMFBFID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IINEMOAPJCP EIFONLCJOPG)
	{
		return ((::IINEMOAPJCP(*)(::FlatBuffers::ByteBuffer*, ::IINEMOAPJCP))((::PBYTE)hIl2Cpp + IINEMOAPJCP_GOBCFMFBFID_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
