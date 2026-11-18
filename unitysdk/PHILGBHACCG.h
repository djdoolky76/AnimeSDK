#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJCDCGLPIIA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHILGBHACCG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHILGBHACCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938200)
#define PHILGBHACCG_BMLENDCPKEE_1_OFFSET UNITYSDK_OFFSET(0x1EE01EB0)
#define PHILGBHACCG_BMLENDCPKEE_OFFSET UNITYSDK_OFFSET(0x1EE01E50)
#define PHILGBHACCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHILGBHACCG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHILGBHACCG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9381F0)
#define PHILGBHACCG___INIT_OFFSET UNITYSDK_OFFSET(0x9381D0)

inline static constexpr unsigned int PHILGBHACCG_TypeDefinitionIndex = 16047;

struct alignas(8) PHILGBHACCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHILGBHACCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHILGBHACCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHILGBHACCG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PHILGBHACCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHILGBHACCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHILGBHACCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJCDCGLPIIA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJCDCGLPIIA&))((::PBYTE)hIl2Cpp + PHILGBHACCG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PHILGBHACCG BMLENDCPKEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHILGBHACCG EIFONLCJOPG)
	{
		return ((::PHILGBHACCG(*)(::FlatBuffers::ByteBuffer*, ::PHILGBHACCG))((::PBYTE)hIl2Cpp + PHILGBHACCG_BMLENDCPKEE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHILGBHACCG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PHILGBHACCG BMLENDCPKEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHILGBHACCG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHILGBHACCG_BMLENDCPKEE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
