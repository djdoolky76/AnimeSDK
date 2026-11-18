#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LEHFGFPKBHL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFMEFDIEGEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JFMEFDIEGEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814F60)
#define JFMEFDIEGEH_EJNOPHFJGBG_1_OFFSET UNITYSDK_OFFSET(0x1B897160)
#define JFMEFDIEGEH_EJNOPHFJGBG_OFFSET UNITYSDK_OFFSET(0x1B8970F0)
#define JFMEFDIEGEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFMEFDIEGEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFMEFDIEGEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814F50)
#define JFMEFDIEGEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814FA0)
#define JFMEFDIEGEH___INIT_OFFSET UNITYSDK_OFFSET(0x814F30)

inline static constexpr unsigned int JFMEFDIEGEH_TypeDefinitionIndex = 15728;

struct alignas(8) JFMEFDIEGEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMEFDIEGEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JFMEFDIEGEH EJNOPHFJGBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFMEFDIEGEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_EJNOPHFJGBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LEHFGFPKBHL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LEHFGFPKBHL&, ::System::Int32&))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JFMEFDIEGEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFMEFDIEGEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LEHFGFPKBHL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LEHFGFPKBHL&))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JFMEFDIEGEH EJNOPHFJGBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFMEFDIEGEH EIFONLCJOPG)
	{
		return ((::JFMEFDIEGEH(*)(::FlatBuffers::ByteBuffer*, ::JFMEFDIEGEH))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_EJNOPHFJGBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMEFDIEGEH_PPOMNIFACOL_OFFSET))(this);
	}
};
