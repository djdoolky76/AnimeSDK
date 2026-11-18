#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBKEMPEEIBA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGMAJIMGJDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGMAJIMGJDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A700)
#define IGMAJIMGJDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGMAJIMGJDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGMAJIMGJDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A6F0)
#define IGMAJIMGJDC_MNPOFDKKLAD_1_OFFSET UNITYSDK_OFFSET(0x1B12E080)
#define IGMAJIMGJDC_MNPOFDKKLAD_OFFSET UNITYSDK_OFFSET(0x1B12DFE0)
#define IGMAJIMGJDC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A6E0)
#define IGMAJIMGJDC___INIT_OFFSET UNITYSDK_OFFSET(0x80A6C0)

inline static constexpr unsigned int IGMAJIMGJDC_TypeDefinitionIndex = 12048;

struct alignas(8) IGMAJIMGJDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGMAJIMGJDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBKEMPEEIBA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBKEMPEEIBA&))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBKEMPEEIBA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBKEMPEEIBA&, ::System::Int32&))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IGMAJIMGJDC MNPOFDKKLAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGMAJIMGJDC EIFONLCJOPG)
	{
		return ((::IGMAJIMGJDC(*)(::FlatBuffers::ByteBuffer*, ::IGMAJIMGJDC))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_MNPOFDKKLAD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IGMAJIMGJDC MNPOFDKKLAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGMAJIMGJDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_MNPOFDKKLAD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IGMAJIMGJDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGMAJIMGJDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGMAJIMGJDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
