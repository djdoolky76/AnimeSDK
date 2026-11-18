#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDJPCLCGHCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6AF0)
#define KDJPCLCGHCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDJPCLCGHCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDJPCLCGHCJ_ODNGAAEBHNE_1_OFFSET UNITYSDK_OFFSET(0x18DE35D0)
#define KDJPCLCGHCJ_ODNGAAEBHNE_OFFSET UNITYSDK_OFFSET(0x18DE3570)
#define KDJPCLCGHCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6AE0)
#define KDJPCLCGHCJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D6AC0)

inline static constexpr unsigned int KDJPCLCGHCJ_TypeDefinitionIndex = 15358;

struct alignas(8) KDJPCLCGHCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KDJPCLCGHCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJPCLCGHCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KDJPCLCGHCJ ODNGAAEBHNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDJPCLCGHCJ EIFONLCJOPG)
	{
		return ((::KDJPCLCGHCJ(*)(::FlatBuffers::ByteBuffer*, ::KDJPCLCGHCJ))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_ODNGAAEBHNE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KDJPCLCGHCJ ODNGAAEBHNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJPCLCGHCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPCLCGHCJ_ODNGAAEBHNE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
