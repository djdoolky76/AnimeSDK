#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHFHLMDFIBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812ED0)
#define KHFHLMDFIBB_CEJCKHOMFOH_1_OFFSET UNITYSDK_OFFSET(0x1B7E2C80)
#define KHFHLMDFIBB_CEJCKHOMFOH_OFFSET UNITYSDK_OFFSET(0x1B7E2C10)
#define KHFHLMDFIBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHFHLMDFIBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHFHLMDFIBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812F10)
#define KHFHLMDFIBB___INIT_OFFSET UNITYSDK_OFFSET(0x812EB0)

inline static constexpr unsigned int KHFHLMDFIBB_TypeDefinitionIndex = 15482;

struct alignas(8) KHFHLMDFIBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHFHLMDFIBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KHFHLMDFIBB CEJCKHOMFOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHFHLMDFIBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_CEJCKHOMFOH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KHFHLMDFIBB CEJCKHOMFOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHFHLMDFIBB EIFONLCJOPG)
	{
		return ((::KHFHLMDFIBB(*)(::FlatBuffers::ByteBuffer*, ::KHFHLMDFIBB))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_CEJCKHOMFOH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KHFHLMDFIBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHFHLMDFIBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHLMDFIBB_PPOMNIFACOL_OFFSET))(this);
	}
};
