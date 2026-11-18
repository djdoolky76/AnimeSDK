#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBGCFKGOEFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F27B0)
#define FBGCFKGOEFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBGCFKGOEFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBGCFKGOEFE_JHBGBJFABNN_1_OFFSET UNITYSDK_OFFSET(0x19F51970)
#define FBGCFKGOEFE_JHBGBJFABNN_OFFSET UNITYSDK_OFFSET(0x19F51900)
#define FBGCFKGOEFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F27F0)
#define FBGCFKGOEFE___INIT_OFFSET UNITYSDK_OFFSET(0x7F2790)

inline static constexpr unsigned int FBGCFKGOEFE_TypeDefinitionIndex = 9283;

struct alignas(8) FBGCFKGOEFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGCFKGOEFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FBGCFKGOEFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBGCFKGOEFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FBGCFKGOEFE JHBGBJFABNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBGCFKGOEFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_JHBGBJFABNN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBGCFKGOEFE JHBGBJFABNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBGCFKGOEFE EIFONLCJOPG)
	{
		return ((::FBGCFKGOEFE(*)(::FlatBuffers::ByteBuffer*, ::FBGCFKGOEFE))((::PBYTE)hIl2Cpp + FBGCFKGOEFE_JHBGBJFABNN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
