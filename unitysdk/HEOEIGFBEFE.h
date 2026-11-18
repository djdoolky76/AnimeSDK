#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEOEIGFBEFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809FD0)
#define HEOEIGFBEFE_BPJECOOCCCG_1_OFFSET UNITYSDK_OFFSET(0x1B121A20)
#define HEOEIGFBEFE_BPJECOOCCCG_OFFSET UNITYSDK_OFFSET(0x1B1219C0)
#define HEOEIGFBEFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEOEIGFBEFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEOEIGFBEFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A010)
#define HEOEIGFBEFE___INIT_OFFSET UNITYSDK_OFFSET(0x809FB0)

inline static constexpr unsigned int HEOEIGFBEFE_TypeDefinitionIndex = 14549;

struct alignas(8) HEOEIGFBEFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEOEIGFBEFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HEOEIGFBEFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEOEIGFBEFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HEOEIGFBEFE BPJECOOCCCG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEOEIGFBEFE EIFONLCJOPG)
	{
		return ((::HEOEIGFBEFE(*)(::FlatBuffers::ByteBuffer*, ::HEOEIGFBEFE))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_BPJECOOCCCG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HEOEIGFBEFE BPJECOOCCCG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEOEIGFBEFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_BPJECOOCCCG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOEIGFBEFE_GHKKNCCLPAN_OFFSET))(this);
	}
};
