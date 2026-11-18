#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFOPCFGLFPN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAFJAFEBBKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAFJAFEBBKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B650)
#define HAFJAFEBBKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAFJAFEBBKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAFJAFEBBKJ_LIEOAEFFPAL_1_OFFSET UNITYSDK_OFFSET(0x1BAD42A0)
#define HAFJAFEBBKJ_LIEOAEFFPAL_OFFSET UNITYSDK_OFFSET(0x1BAD4200)
#define HAFJAFEBBKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B690)
#define HAFJAFEBBKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B640)
#define HAFJAFEBBKJ___INIT_OFFSET UNITYSDK_OFFSET(0x81B620)

inline static constexpr unsigned int HAFJAFEBBKJ_TypeDefinitionIndex = 10738;

struct alignas(8) HAFJAFEBBKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFOPCFGLFPN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFOPCFGLFPN&))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HAFJAFEBBKJ LIEOAEFFPAL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAFJAFEBBKJ EIFONLCJOPG)
	{
		return ((::HAFJAFEBBKJ(*)(::FlatBuffers::ByteBuffer*, ::HAFJAFEBBKJ))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_LIEOAEFFPAL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HAFJAFEBBKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAFJAFEBBKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HAFJAFEBBKJ LIEOAEFFPAL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAFJAFEBBKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_LIEOAEFFPAL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFOPCFGLFPN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFOPCFGLFPN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJAFEBBKJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
