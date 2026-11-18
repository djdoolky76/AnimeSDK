#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPODCNBHADH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBFGPNBHHKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FBFGPNBHHKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2C50)
#define FBFGPNBHHKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBFGPNBHHKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBFGPNBHHKE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2C90)
#define FBFGPNBHHKE_MKOFINBKJFJ_1_OFFSET UNITYSDK_OFFSET(0x17AAE100)
#define FBFGPNBHHKE_MKOFINBKJFJ_OFFSET UNITYSDK_OFFSET(0x17AAE090)
#define FBFGPNBHHKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2CA0)
#define FBFGPNBHHKE___INIT_OFFSET UNITYSDK_OFFSET(0x7B2C30)

inline static constexpr unsigned int FBFGPNBHHKE_TypeDefinitionIndex = 10914;

struct alignas(8) FBFGPNBHHKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFGPNBHHKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FBFGPNBHHKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBFGPNBHHKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBFGPNBHHKE MKOFINBKJFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBFGPNBHHKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_MKOFINBKJFJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBFGPNBHHKE MKOFINBKJFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBFGPNBHHKE EIFONLCJOPG)
	{
		return ((::FBFGPNBHHKE(*)(::FlatBuffers::ByteBuffer*, ::FBFGPNBHHKE))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_MKOFINBKJFJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPODCNBHADH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPODCNBHADH&))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HPODCNBHADH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPODCNBHADH&, ::System::Int32&))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGPNBHHKE_GHKKNCCLPAN_OFFSET))(this);
	}
};
