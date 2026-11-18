#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFKENNLPMMH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOJAIMCGPIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOJAIMCGPIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804ED0)
#define LOJAIMCGPIM_CBDBGKLONFH_1_OFFSET UNITYSDK_OFFSET(0x1AD68E20)
#define LOJAIMCGPIM_CBDBGKLONFH_OFFSET UNITYSDK_OFFSET(0x1AD68DB0)
#define LOJAIMCGPIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOJAIMCGPIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOJAIMCGPIM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x804F20)
#define LOJAIMCGPIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804F10)
#define LOJAIMCGPIM___INIT_OFFSET UNITYSDK_OFFSET(0x804EB0)

inline static constexpr unsigned int LOJAIMCGPIM_TypeDefinitionIndex = 11192;

struct alignas(8) LOJAIMCGPIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOJAIMCGPIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LOJAIMCGPIM CBDBGKLONFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOJAIMCGPIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_CBDBGKLONFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFKENNLPMMH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFKENNLPMMH&))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LOJAIMCGPIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOJAIMCGPIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LOJAIMCGPIM CBDBGKLONFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOJAIMCGPIM EIFONLCJOPG)
	{
		return ((::LOJAIMCGPIM(*)(::FlatBuffers::ByteBuffer*, ::LOJAIMCGPIM))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_CBDBGKLONFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFKENNLPMMH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFKENNLPMMH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOJAIMCGPIM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
