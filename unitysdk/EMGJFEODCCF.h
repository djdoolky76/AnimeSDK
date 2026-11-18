#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OOMGMONOILC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMGJFEODCCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMGJFEODCCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3300)
#define EMGJFEODCCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMGJFEODCCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMGJFEODCCF_LEEJGGOACGC_1_OFFSET UNITYSDK_OFFSET(0x19523EB0)
#define EMGJFEODCCF_LEEJGGOACGC_OFFSET UNITYSDK_OFFSET(0x19523E40)
#define EMGJFEODCCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E32F0)
#define EMGJFEODCCF___INIT_OFFSET UNITYSDK_OFFSET(0x7E32D0)

inline static constexpr unsigned int EMGJFEODCCF_TypeDefinitionIndex = 13309;

struct alignas(8) EMGJFEODCCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGJFEODCCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGJFEODCCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGJFEODCCF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGJFEODCCF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EMGJFEODCCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGJFEODCCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGJFEODCCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OOMGMONOILC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OOMGMONOILC&))((::PBYTE)hIl2Cpp + EMGJFEODCCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EMGJFEODCCF LEEJGGOACGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGJFEODCCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGJFEODCCF_LEEJGGOACGC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMGJFEODCCF LEEJGGOACGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMGJFEODCCF EIFONLCJOPG)
	{
		return ((::EMGJFEODCCF(*)(::FlatBuffers::ByteBuffer*, ::EMGJFEODCCF))((::PBYTE)hIl2Cpp + EMGJFEODCCF_LEEJGGOACGC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
