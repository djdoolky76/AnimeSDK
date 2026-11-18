#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PCONBALFDAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJMFMEKKLCK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJMFMEKKLCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810F30)
#define LJMFMEKKLCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJMFMEKKLCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJMFMEKKLCK_JJFBBIIGCCB_1_OFFSET UNITYSDK_OFFSET(0x1B64FFA0)
#define LJMFMEKKLCK_JJFBBIIGCCB_OFFSET UNITYSDK_OFFSET(0x1B64FD00)
#define LJMFMEKKLCK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x810F10)
#define LJMFMEKKLCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810F20)
#define LJMFMEKKLCK___INIT_OFFSET UNITYSDK_OFFSET(0x810EF0)

inline static constexpr unsigned int LJMFMEKKLCK_TypeDefinitionIndex = 9672;

struct alignas(8) LJMFMEKKLCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJMFMEKKLCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LJMFMEKKLCK JJFBBIIGCCB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJMFMEKKLCK EIFONLCJOPG)
	{
		return ((::LJMFMEKKLCK(*)(::FlatBuffers::ByteBuffer*, ::LJMFMEKKLCK))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_JJFBBIIGCCB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PCONBALFDAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCONBALFDAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LJMFMEKKLCK JJFBBIIGCCB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJMFMEKKLCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_JJFBBIIGCCB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PCONBALFDAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCONBALFDAP&))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LJMFMEKKLCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJMFMEKKLCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJMFMEKKLCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
