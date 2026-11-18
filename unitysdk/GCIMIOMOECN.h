#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCIMIOMOECN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC840)
#define GCIMIOMOECN_CPFLDLAJOKC_1_OFFSET UNITYSDK_OFFSET(0x1A5B9C40)
#define GCIMIOMOECN_CPFLDLAJOKC_OFFSET UNITYSDK_OFFSET(0x1A5B9B40)
#define GCIMIOMOECN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCIMIOMOECN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GCIMIOMOECN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC880)
#define GCIMIOMOECN___INIT_OFFSET UNITYSDK_OFFSET(0x7FC820)

inline static constexpr unsigned int GCIMIOMOECN_TypeDefinitionIndex = 15982;

struct alignas(8) GCIMIOMOECN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIMIOMOECN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIMIOMOECN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GCIMIOMOECN CPFLDLAJOKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GCIMIOMOECN EIFONLCJOPG)
	{
		return ((::GCIMIOMOECN(*)(::FlatBuffers::ByteBuffer*, ::GCIMIOMOECN))((::PBYTE)hIl2Cpp + GCIMIOMOECN_CPFLDLAJOKC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GCIMIOMOECN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCIMIOMOECN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIMIOMOECN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIMIOMOECN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIMIOMOECN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GCIMIOMOECN CPFLDLAJOKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCIMIOMOECN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIMIOMOECN_CPFLDLAJOKC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
