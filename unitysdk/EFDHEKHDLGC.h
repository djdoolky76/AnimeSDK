#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGKLGMDIBMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFDHEKHDLGC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EFDHEKHDLGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5E40)
#define EFDHEKHDLGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFDHEKHDLGC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFDHEKHDLGC_LPAPONDMOJN_1_OFFSET UNITYSDK_OFFSET(0x1A19BD30)
#define EFDHEKHDLGC_LPAPONDMOJN_OFFSET UNITYSDK_OFFSET(0x1A19BCC0)
#define EFDHEKHDLGC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5E30)
#define EFDHEKHDLGC___INIT_OFFSET UNITYSDK_OFFSET(0x7F5E10)

inline static constexpr unsigned int EFDHEKHDLGC_TypeDefinitionIndex = 14058;

struct alignas(8) EFDHEKHDLGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFDHEKHDLGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGKLGMDIBMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGKLGMDIBMI&))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EFDHEKHDLGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFDHEKHDLGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EFDHEKHDLGC LPAPONDMOJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFDHEKHDLGC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_LPAPONDMOJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EFDHEKHDLGC LPAPONDMOJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFDHEKHDLGC EIFONLCJOPG)
	{
		return ((::EFDHEKHDLGC(*)(::FlatBuffers::ByteBuffer*, ::EFDHEKHDLGC))((::PBYTE)hIl2Cpp + EFDHEKHDLGC_LPAPONDMOJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
