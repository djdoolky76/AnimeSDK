#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBOEBEFKAKN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJLJHJKJFHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJLJHJKJFHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813A90)
#define FJLJHJKJFHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJLJHJKJFHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJLJHJKJFHL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813AD0)
#define FJLJHJKJFHL_OJEOHONKCAO_1_OFFSET UNITYSDK_OFFSET(0x1B863610)
#define FJLJHJKJFHL_OJEOHONKCAO_OFFSET UNITYSDK_OFFSET(0x1B8635A0)
#define FJLJHJKJFHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813AE0)
#define FJLJHJKJFHL___INIT_OFFSET UNITYSDK_OFFSET(0x813A70)

inline static constexpr unsigned int FJLJHJKJFHL_TypeDefinitionIndex = 11424;

struct alignas(8) FJLJHJKJFHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLJHJKJFHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FJLJHJKJFHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJLJHJKJFHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FJLJHJKJFHL OJEOHONKCAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJLJHJKJFHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_OJEOHONKCAO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBOEBEFKAKN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBOEBEFKAKN&))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBOEBEFKAKN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBOEBEFKAKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FJLJHJKJFHL OJEOHONKCAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJLJHJKJFHL EIFONLCJOPG)
	{
		return ((::FJLJHJKJFHL(*)(::FlatBuffers::ByteBuffer*, ::FJLJHJKJFHL))((::PBYTE)hIl2Cpp + FJLJHJKJFHL_OJEOHONKCAO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
