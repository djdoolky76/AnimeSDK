#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GGBGBPIAPEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPGLCOBNGHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPGLCOBNGHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B6B0)
#define PPGLCOBNGHE_BHOMGMNDHIP_1_OFFSET UNITYSDK_OFFSET(0x1FC26130)
#define PPGLCOBNGHE_BHOMGMNDHIP_OFFSET UNITYSDK_OFFSET(0x1FC25E70)
#define PPGLCOBNGHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPGLCOBNGHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPGLCOBNGHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x99B700)
#define PPGLCOBNGHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B6F0)
#define PPGLCOBNGHE___INIT_OFFSET UNITYSDK_OFFSET(0x99B690)

inline static constexpr unsigned int PPGLCOBNGHE_TypeDefinitionIndex = 13952;

struct alignas(8) PPGLCOBNGHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPGLCOBNGHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PPGLCOBNGHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPGLCOBNGHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPGLCOBNGHE BHOMGMNDHIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPGLCOBNGHE EIFONLCJOPG)
	{
		return ((::PPGLCOBNGHE(*)(::FlatBuffers::ByteBuffer*, ::PPGLCOBNGHE))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_BHOMGMNDHIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GGBGBPIAPEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGBGBPIAPEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GGBGBPIAPEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGBGBPIAPEI&))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PPGLCOBNGHE BHOMGMNDHIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPGLCOBNGHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPGLCOBNGHE_BHOMGMNDHIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
