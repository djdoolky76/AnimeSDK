#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDBJJOKAJHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3090)
#define EDBJJOKAJHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDBJJOKAJHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDBJJOKAJHL_MJMFIMNIKFL_1_OFFSET UNITYSDK_OFFSET(0x1951A6E0)
#define EDBJJOKAJHL_MJMFIMNIKFL_OFFSET UNITYSDK_OFFSET(0x1951A640)
#define EDBJJOKAJHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3080)
#define EDBJJOKAJHL___INIT_OFFSET UNITYSDK_OFFSET(0x7E3060)

inline static constexpr unsigned int EDBJJOKAJHL_TypeDefinitionIndex = 15022;

struct alignas(8) EDBJJOKAJHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDBJJOKAJHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EDBJJOKAJHL MJMFIMNIKFL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDBJJOKAJHL EIFONLCJOPG)
	{
		return ((::EDBJJOKAJHL(*)(::FlatBuffers::ByteBuffer*, ::EDBJJOKAJHL))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_MJMFIMNIKFL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EDBJJOKAJHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDBJJOKAJHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EDBJJOKAJHL MJMFIMNIKFL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDBJJOKAJHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDBJJOKAJHL_MJMFIMNIKFL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
