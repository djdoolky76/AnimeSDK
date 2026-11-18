#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MJJFDFEJGBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFIEGADBHOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JFIEGADBHOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5610)
#define JFIEGADBHOM_CPOCJFKPLHH_1_OFFSET UNITYSDK_OFFSET(0x18BC8530)
#define JFIEGADBHOM_CPOCJFKPLHH_OFFSET UNITYSDK_OFFSET(0x18BC84C0)
#define JFIEGADBHOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFIEGADBHOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFIEGADBHOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5660)
#define JFIEGADBHOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5650)
#define JFIEGADBHOM___INIT_OFFSET UNITYSDK_OFFSET(0x7D55F0)

inline static constexpr unsigned int JFIEGADBHOM_TypeDefinitionIndex = 14610;

struct alignas(8) JFIEGADBHOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIEGADBHOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFIEGADBHOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JFIEGADBHOM CPOCJFKPLHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFIEGADBHOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFIEGADBHOM_CPOCJFKPLHH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JFIEGADBHOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFIEGADBHOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFIEGADBHOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JFIEGADBHOM CPOCJFKPLHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFIEGADBHOM EIFONLCJOPG)
	{
		return ((::JFIEGADBHOM(*)(::FlatBuffers::ByteBuffer*, ::JFIEGADBHOM))((::PBYTE)hIl2Cpp + JFIEGADBHOM_CPOCJFKPLHH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIEGADBHOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIEGADBHOM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MJJFDFEJGBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJJFDFEJGBH&))((::PBYTE)hIl2Cpp + JFIEGADBHOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MJJFDFEJGBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJJFDFEJGBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JFIEGADBHOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
