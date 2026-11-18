#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNPNNNNFIFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4400)
#define FNPNNNNFIFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNPNNNNFIFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNPNNNNFIFN_MPOOJLLMGOK_1_OFFSET UNITYSDK_OFFSET(0x18B9D5D0)
#define FNPNNNNFIFN_MPOOJLLMGOK_OFFSET UNITYSDK_OFFSET(0x18B9D560)
#define FNPNNNNFIFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4440)
#define FNPNNNNFIFN___INIT_OFFSET UNITYSDK_OFFSET(0x7D43E0)

inline static constexpr unsigned int FNPNNNNFIFN_TypeDefinitionIndex = 11530;

struct alignas(8) FNPNNNNFIFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPNNNNFIFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FNPNNNNFIFN MPOOJLLMGOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNPNNNNFIFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_MPOOJLLMGOK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FNPNNNNFIFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNPNNNNFIFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FNPNNNNFIFN MPOOJLLMGOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNPNNNNFIFN EIFONLCJOPG)
	{
		return ((::FNPNNNNFIFN(*)(::FlatBuffers::ByteBuffer*, ::FNPNNNNFIFN))((::PBYTE)hIl2Cpp + FNPNNNNFIFN_MPOOJLLMGOK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
