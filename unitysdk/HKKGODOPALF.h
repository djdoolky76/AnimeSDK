#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKKGODOPALF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EDF0)
#define HKKGODOPALF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKKGODOPALF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKKGODOPALF_KJPBIFLHOGN_1_OFFSET UNITYSDK_OFFSET(0x15A8F3F0)
#define HKKGODOPALF_KJPBIFLHOGN_OFFSET UNITYSDK_OFFSET(0x15A8F330)
#define HKKGODOPALF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EE30)
#define HKKGODOPALF___INIT_OFFSET UNITYSDK_OFFSET(0x76EDD0)

inline static constexpr unsigned int HKKGODOPALF_TypeDefinitionIndex = 9393;

struct alignas(8) HKKGODOPALF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKGODOPALF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKGODOPALF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HKKGODOPALF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKGODOPALF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKGODOPALF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HKKGODOPALF KJPBIFLHOGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKKGODOPALF EIFONLCJOPG)
	{
		return ((::HKKGODOPALF(*)(::FlatBuffers::ByteBuffer*, ::HKKGODOPALF))((::PBYTE)hIl2Cpp + HKKGODOPALF_KJPBIFLHOGN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKGODOPALF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HKKGODOPALF KJPBIFLHOGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKGODOPALF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKGODOPALF_KJPBIFLHOGN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKGODOPALF_PPOMNIFACOL_OFFSET))(this);
	}
};
