#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OKPMPACDNKO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDOAKFJMBFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BDOAKFJMBFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816560)
#define BDOAKFJMBFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDOAKFJMBFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDOAKFJMBFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8165A0)
#define BDOAKFJMBFG_MOGLOOEDOIE_1_OFFSET UNITYSDK_OFFSET(0x1B98EAE0)
#define BDOAKFJMBFG_MOGLOOEDOIE_OFFSET UNITYSDK_OFFSET(0x1B98EA70)
#define BDOAKFJMBFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8165B0)
#define BDOAKFJMBFG___INIT_OFFSET UNITYSDK_OFFSET(0x816540)

inline static constexpr unsigned int BDOAKFJMBFG_TypeDefinitionIndex = 14090;

struct alignas(8) BDOAKFJMBFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOAKFJMBFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDOAKFJMBFG MOGLOOEDOIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDOAKFJMBFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_MOGLOOEDOIE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BDOAKFJMBFG MOGLOOEDOIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDOAKFJMBFG EIFONLCJOPG)
	{
		return ((::BDOAKFJMBFG(*)(::FlatBuffers::ByteBuffer*, ::BDOAKFJMBFG))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_MOGLOOEDOIE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BDOAKFJMBFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDOAKFJMBFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OKPMPACDNKO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKPMPACDNKO&, ::System::Int32&))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OKPMPACDNKO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKPMPACDNKO&))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOAKFJMBFG_PPOMNIFACOL_OFFSET))(this);
	}
};
