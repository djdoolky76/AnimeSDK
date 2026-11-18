#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKJAPDBJNMM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMGCIAGNKCG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMGCIAGNKCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F25C0)
#define EMGCIAGNKCG_CCDLKEFGDPA_1_OFFSET UNITYSDK_OFFSET(0x19F4CE60)
#define EMGCIAGNKCG_CCDLKEFGDPA_OFFSET UNITYSDK_OFFSET(0x19F4CD60)
#define EMGCIAGNKCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMGCIAGNKCG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMGCIAGNKCG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F25B0)
#define EMGCIAGNKCG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F25A0)
#define EMGCIAGNKCG___INIT_OFFSET UNITYSDK_OFFSET(0x7F2580)

inline static constexpr unsigned int EMGCIAGNKCG_TypeDefinitionIndex = 16255;

struct alignas(8) EMGCIAGNKCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGCIAGNKCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EMGCIAGNKCG CCDLKEFGDPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMGCIAGNKCG EIFONLCJOPG)
	{
		return ((::EMGCIAGNKCG(*)(::FlatBuffers::ByteBuffer*, ::EMGCIAGNKCG))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_CCDLKEFGDPA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EMGCIAGNKCG CCDLKEFGDPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGCIAGNKCG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_CCDLKEFGDPA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKJAPDBJNMM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJAPDBJNMM&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKJAPDBJNMM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJAPDBJNMM&))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EMGCIAGNKCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMGCIAGNKCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMGCIAGNKCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
