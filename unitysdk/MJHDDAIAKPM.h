#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJHDDAIAKPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802560)
#define MJHDDAIAKPM_CPILKPKMBMM_1_OFFSET UNITYSDK_OFFSET(0x1AB0D200)
#define MJHDDAIAKPM_CPILKPKMBMM_OFFSET UNITYSDK_OFFSET(0x1AB0D1A0)
#define MJHDDAIAKPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJHDDAIAKPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJHDDAIAKPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8025A0)
#define MJHDDAIAKPM___INIT_OFFSET UNITYSDK_OFFSET(0x802540)

inline static constexpr unsigned int MJHDDAIAKPM_TypeDefinitionIndex = 10611;

struct alignas(8) MJHDDAIAKPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHDDAIAKPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MJHDDAIAKPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJHDDAIAKPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MJHDDAIAKPM CPILKPKMBMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJHDDAIAKPM EIFONLCJOPG)
	{
		return ((::MJHDDAIAKPM(*)(::FlatBuffers::ByteBuffer*, ::MJHDDAIAKPM))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_CPILKPKMBMM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MJHDDAIAKPM CPILKPKMBMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJHDDAIAKPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJHDDAIAKPM_CPILKPKMBMM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
