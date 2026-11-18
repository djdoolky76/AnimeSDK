#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OKMNLPJOBEK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPMPJAPBMCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPMPJAPBMCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6B40)
#define NPMPJAPBMCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPMPJAPBMCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPMPJAPBMCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6B20)
#define NPMPJAPBMCB_NKELCJFFGPG_1_OFFSET UNITYSDK_OFFSET(0x195BF990)
#define NPMPJAPBMCB_NKELCJFFGPG_OFFSET UNITYSDK_OFFSET(0x195BF6F0)
#define NPMPJAPBMCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6B30)
#define NPMPJAPBMCB___INIT_OFFSET UNITYSDK_OFFSET(0x7E6B00)

inline static constexpr unsigned int NPMPJAPBMCB_TypeDefinitionIndex = 13451;

struct alignas(8) NPMPJAPBMCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPMPJAPBMCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NPMPJAPBMCB NKELCJFFGPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPMPJAPBMCB EIFONLCJOPG)
	{
		return ((::NPMPJAPBMCB(*)(::FlatBuffers::ByteBuffer*, ::NPMPJAPBMCB))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_NKELCJFFGPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OKMNLPJOBEK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKMNLPJOBEK&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NPMPJAPBMCB NKELCJFFGPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPMPJAPBMCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_NKELCJFFGPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NPMPJAPBMCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPMPJAPBMCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OKMNLPJOBEK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKMNLPJOBEK&))((::PBYTE)hIl2Cpp + NPMPJAPBMCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
