#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFPEKOBFDLH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGGNLLGAEFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JGGNLLGAEFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E41C0)
#define JGGNLLGAEFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGGNLLGAEFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JGGNLLGAEFI_GLJKLKIDMHI_1_OFFSET UNITYSDK_OFFSET(0x195495B0)
#define JGGNLLGAEFI_GLJKLKIDMHI_OFFSET UNITYSDK_OFFSET(0x19549540)
#define JGGNLLGAEFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E41B0)
#define JGGNLLGAEFI___INIT_OFFSET UNITYSDK_OFFSET(0x7E4190)

inline static constexpr unsigned int JGGNLLGAEFI_TypeDefinitionIndex = 17626;

struct alignas(8) JGGNLLGAEFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGNLLGAEFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JGGNLLGAEFI GLJKLKIDMHI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGGNLLGAEFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_GLJKLKIDMHI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFPEKOBFDLH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFPEKOBFDLH&))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JGGNLLGAEFI GLJKLKIDMHI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JGGNLLGAEFI EIFONLCJOPG)
	{
		return ((::JGGNLLGAEFI(*)(::FlatBuffers::ByteBuffer*, ::JGGNLLGAEFI))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_GLJKLKIDMHI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JGGNLLGAEFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGGNLLGAEFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGNLLGAEFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
