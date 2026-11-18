#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NICGIOKMMPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLFLAACMEIL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLFLAACMEIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806610)
#define PLFLAACMEIL_FFCCKGNDBEB_1_OFFSET UNITYSDK_OFFSET(0x1AD9B4B0)
#define PLFLAACMEIL_FFCCKGNDBEB_OFFSET UNITYSDK_OFFSET(0x1AD9B440)
#define PLFLAACMEIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLFLAACMEIL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLFLAACMEIL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806650)
#define PLFLAACMEIL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806600)
#define PLFLAACMEIL___INIT_OFFSET UNITYSDK_OFFSET(0x8065E0)

inline static constexpr unsigned int PLFLAACMEIL_TypeDefinitionIndex = 14333;

struct alignas(8) PLFLAACMEIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFLAACMEIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLFLAACMEIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFLAACMEIL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFLAACMEIL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PLFLAACMEIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLFLAACMEIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLFLAACMEIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PLFLAACMEIL FFCCKGNDBEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLFLAACMEIL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLFLAACMEIL_FFCCKGNDBEB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NICGIOKMMPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NICGIOKMMPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLFLAACMEIL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PLFLAACMEIL FFCCKGNDBEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLFLAACMEIL EIFONLCJOPG)
	{
		return ((::PLFLAACMEIL(*)(::FlatBuffers::ByteBuffer*, ::PLFLAACMEIL))((::PBYTE)hIl2Cpp + PLFLAACMEIL_FFCCKGNDBEB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NICGIOKMMPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NICGIOKMMPM&))((::PBYTE)hIl2Cpp + PLFLAACMEIL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
