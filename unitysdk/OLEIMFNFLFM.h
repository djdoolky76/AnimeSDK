#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLEIMFNFLFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6ED0)
#define OLEIMFNFLFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLEIMFNFLFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLEIMFNFLFM_LOKNODGEABC_1_OFFSET UNITYSDK_OFFSET(0x195C8240)
#define OLEIMFNFLFM_LOKNODGEABC_OFFSET UNITYSDK_OFFSET(0x195C81E0)
#define OLEIMFNFLFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6F10)
#define OLEIMFNFLFM___INIT_OFFSET UNITYSDK_OFFSET(0x7E6EB0)

inline static constexpr unsigned int OLEIMFNFLFM_TypeDefinitionIndex = 14839;

struct alignas(8) OLEIMFNFLFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLEIMFNFLFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OLEIMFNFLFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLEIMFNFLFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OLEIMFNFLFM LOKNODGEABC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLEIMFNFLFM EIFONLCJOPG)
	{
		return ((::OLEIMFNFLFM(*)(::FlatBuffers::ByteBuffer*, ::OLEIMFNFLFM))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_LOKNODGEABC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OLEIMFNFLFM LOKNODGEABC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLEIMFNFLFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLEIMFNFLFM_LOKNODGEABC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
