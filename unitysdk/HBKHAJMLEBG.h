#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONMBKFFAEEO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBKHAJMLEBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBKHAJMLEBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4950)
#define HBKHAJMLEBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBKHAJMLEBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBKHAJMLEBG_HKMALHIJDOH_1_OFFSET UNITYSDK_OFFSET(0x18BA95F0)
#define HBKHAJMLEBG_HKMALHIJDOH_OFFSET UNITYSDK_OFFSET(0x18BA9330)
#define HBKHAJMLEBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4990)
#define HBKHAJMLEBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D49A0)
#define HBKHAJMLEBG___INIT_OFFSET UNITYSDK_OFFSET(0x7D4930)

inline static constexpr unsigned int HBKHAJMLEBG_TypeDefinitionIndex = 14619;

struct alignas(8) HBKHAJMLEBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBKHAJMLEBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HBKHAJMLEBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBKHAJMLEBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HBKHAJMLEBG HKMALHIJDOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBKHAJMLEBG EIFONLCJOPG)
	{
		return ((::HBKHAJMLEBG(*)(::FlatBuffers::ByteBuffer*, ::HBKHAJMLEBG))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_HKMALHIJDOH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONMBKFFAEEO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONMBKFFAEEO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONMBKFFAEEO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONMBKFFAEEO&))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HBKHAJMLEBG HKMALHIJDOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBKHAJMLEBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_HKMALHIJDOH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKHAJMLEBG_PPOMNIFACOL_OFFSET))(this);
	}
};
