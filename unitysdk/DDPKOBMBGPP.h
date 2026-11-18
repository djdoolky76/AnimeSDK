#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBPHLDCINCH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDPKOBMBGPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DDPKOBMBGPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765DB0)
#define DDPKOBMBGPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDPKOBMBGPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DDPKOBMBGPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x765DA0)
#define DDPKOBMBGPP_PHEDEFONEMA_1_OFFSET UNITYSDK_OFFSET(0x1579D280)
#define DDPKOBMBGPP_PHEDEFONEMA_OFFSET UNITYSDK_OFFSET(0x1579D1C0)
#define DDPKOBMBGPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765DF0)
#define DDPKOBMBGPP___INIT_OFFSET UNITYSDK_OFFSET(0x765D80)

inline static constexpr unsigned int DDPKOBMBGPP_TypeDefinitionIndex = 12837;

struct alignas(8) DDPKOBMBGPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDPKOBMBGPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FBPHLDCINCH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPHLDCINCH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DDPKOBMBGPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDPKOBMBGPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DDPKOBMBGPP PHEDEFONEMA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DDPKOBMBGPP EIFONLCJOPG)
	{
		return ((::DDPKOBMBGPP(*)(::FlatBuffers::ByteBuffer*, ::DDPKOBMBGPP))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_PHEDEFONEMA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBPHLDCINCH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPHLDCINCH&))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DDPKOBMBGPP PHEDEFONEMA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDPKOBMBGPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_PHEDEFONEMA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPKOBMBGPP_PPOMNIFACOL_OFFSET))(this);
	}
};
