#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDOEMNHNKBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECFA0)
#define BDOEMNHNKBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDOEMNHNKBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDOEMNHNKBB_IFNAKOIMPMC_1_OFFSET UNITYSDK_OFFSET(0x19BE45E0)
#define BDOEMNHNKBB_IFNAKOIMPMC_OFFSET UNITYSDK_OFFSET(0x19BE4570)
#define BDOEMNHNKBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECFE0)
#define BDOEMNHNKBB___INIT_OFFSET UNITYSDK_OFFSET(0x7ECF80)

inline static constexpr unsigned int BDOEMNHNKBB_TypeDefinitionIndex = 13532;

struct alignas(8) BDOEMNHNKBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOEMNHNKBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDOEMNHNKBB IFNAKOIMPMC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDOEMNHNKBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_IFNAKOIMPMC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BDOEMNHNKBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDOEMNHNKBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BDOEMNHNKBB IFNAKOIMPMC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDOEMNHNKBB EIFONLCJOPG)
	{
		return ((::BDOEMNHNKBB(*)(::FlatBuffers::ByteBuffer*, ::BDOEMNHNKBB))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_IFNAKOIMPMC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOEMNHNKBB_PPOMNIFACOL_OFFSET))(this);
	}
};
