#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POGBCJINBHO_AAKGKJINCBL_1_OFFSET UNITYSDK_OFFSET(0x1FD7D9D0)
#define POGBCJINBHO_AAKGKJINCBL_OFFSET UNITYSDK_OFFSET(0x1FD7D8D0)
#define POGBCJINBHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9A3700)
#define POGBCJINBHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POGBCJINBHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POGBCJINBHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9A3740)
#define POGBCJINBHO___INIT_OFFSET UNITYSDK_OFFSET(0x9A36E0)

inline static constexpr unsigned int POGBCJINBHO_TypeDefinitionIndex = 17534;

struct alignas(8) POGBCJINBHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCJINBHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCJINBHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::POGBCJINBHO AAKGKJINCBL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POGBCJINBHO EIFONLCJOPG)
	{
		return ((::POGBCJINBHO(*)(::FlatBuffers::ByteBuffer*, ::POGBCJINBHO))((::PBYTE)hIl2Cpp + POGBCJINBHO_AAKGKJINCBL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::POGBCJINBHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGBCJINBHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCJINBHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCJINBHO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POGBCJINBHO AAKGKJINCBL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGBCJINBHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCJINBHO_AAKGKJINCBL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCJINBHO_GHKKNCCLPAN_OFFSET))(this);
	}
};
