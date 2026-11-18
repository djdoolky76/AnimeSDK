#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEDBJCOKBAL_AEILJIKKOCE_1_OFFSET UNITYSDK_OFFSET(0x19500AC0)
#define CEDBJCOKBAL_AEILJIKKOCE_OFFSET UNITYSDK_OFFSET(0x19500A50)
#define CEDBJCOKBAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2580)
#define CEDBJCOKBAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEDBJCOKBAL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEDBJCOKBAL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E25C0)
#define CEDBJCOKBAL___INIT_OFFSET UNITYSDK_OFFSET(0x7E2560)

inline static constexpr unsigned int CEDBJCOKBAL_TypeDefinitionIndex = 13018;

struct alignas(8) CEDBJCOKBAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEDBJCOKBAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CEDBJCOKBAL AEILJIKKOCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEDBJCOKBAL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_AEILJIKKOCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CEDBJCOKBAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEDBJCOKBAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CEDBJCOKBAL AEILJIKKOCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEDBJCOKBAL EIFONLCJOPG)
	{
		return ((::CEDBJCOKBAL(*)(::FlatBuffers::ByteBuffer*, ::CEDBJCOKBAL))((::PBYTE)hIl2Cpp + CEDBJCOKBAL_AEILJIKKOCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
