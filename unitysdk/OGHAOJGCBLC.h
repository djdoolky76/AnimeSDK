#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OGDIEIJMAJA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGHAOJGCBLC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGHAOJGCBLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8035A0)
#define OGHAOJGCBLC_DICEPPGBIAB_1_OFFSET UNITYSDK_OFFSET(0x1AB2AA60)
#define OGHAOJGCBLC_DICEPPGBIAB_OFFSET UNITYSDK_OFFSET(0x1AB2A9F0)
#define OGHAOJGCBLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGHAOJGCBLC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGHAOJGCBLC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x803590)
#define OGHAOJGCBLC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803580)
#define OGHAOJGCBLC___INIT_OFFSET UNITYSDK_OFFSET(0x803560)

inline static constexpr unsigned int OGHAOJGCBLC_TypeDefinitionIndex = 14010;

struct alignas(8) OGHAOJGCBLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGHAOJGCBLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OGHAOJGCBLC DICEPPGBIAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGHAOJGCBLC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_DICEPPGBIAB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OGDIEIJMAJA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGDIEIJMAJA&))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OGHAOJGCBLC DICEPPGBIAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGHAOJGCBLC EIFONLCJOPG)
	{
		return ((::OGHAOJGCBLC(*)(::FlatBuffers::ByteBuffer*, ::OGHAOJGCBLC))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_DICEPPGBIAB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OGDIEIJMAJA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGDIEIJMAJA&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::OGHAOJGCBLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGHAOJGCBLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGHAOJGCBLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
