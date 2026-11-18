#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBGAGPPJHNB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMKNCHDFEJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMKNCHDFEJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2660)
#define EMKNCHDFEJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMKNCHDFEJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMKNCHDFEJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F2640)
#define EMKNCHDFEJD_MJCJIEFIEBF_1_OFFSET UNITYSDK_OFFSET(0x19F4E320)
#define EMKNCHDFEJD_MJCJIEFIEBF_OFFSET UNITYSDK_OFFSET(0x19F4E2B0)
#define EMKNCHDFEJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2650)
#define EMKNCHDFEJD___INIT_OFFSET UNITYSDK_OFFSET(0x7F2620)

inline static constexpr unsigned int EMKNCHDFEJD_TypeDefinitionIndex = 11913;

struct alignas(8) EMKNCHDFEJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKNCHDFEJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBGAGPPJHNB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBGAGPPJHNB&))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBGAGPPJHNB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBGAGPPJHNB&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EMKNCHDFEJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMKNCHDFEJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EMKNCHDFEJD MJCJIEFIEBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMKNCHDFEJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_MJCJIEFIEBF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMKNCHDFEJD MJCJIEFIEBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMKNCHDFEJD EIFONLCJOPG)
	{
		return ((::EMKNCHDFEJD(*)(::FlatBuffers::ByteBuffer*, ::EMKNCHDFEJD))((::PBYTE)hIl2Cpp + EMKNCHDFEJD_MJCJIEFIEBF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
