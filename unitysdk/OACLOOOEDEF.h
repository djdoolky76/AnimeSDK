#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLHKOGGGJEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OACLOOOEDEF_AEILMLDGJFA_1_OFFSET UNITYSDK_OFFSET(0x1CFF27E0)
#define OACLOOOEDEF_AEILMLDGJFA_OFFSET UNITYSDK_OFFSET(0x1CFF2780)
#define OACLOOOEDEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OACLOOOEDEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB560)
#define OACLOOOEDEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OACLOOOEDEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OACLOOOEDEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB5A0)
#define OACLOOOEDEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB5B0)
#define OACLOOOEDEF___INIT_OFFSET UNITYSDK_OFFSET(0x8AB540)

inline static constexpr unsigned int OACLOOOEDEF_TypeDefinitionIndex = 11977;

struct alignas(8) OACLOOOEDEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLOOOEDEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OACLOOOEDEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OACLOOOEDEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OACLOOOEDEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OACLOOOEDEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OACLOOOEDEF AEILMLDGJFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OACLOOOEDEF EIFONLCJOPG)
	{
		return ((::OACLOOOEDEF(*)(::FlatBuffers::ByteBuffer*, ::OACLOOOEDEF))((::PBYTE)hIl2Cpp + OACLOOOEDEF_AEILMLDGJFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OACLOOOEDEF AEILMLDGJFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OACLOOOEDEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OACLOOOEDEF_AEILMLDGJFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JLHKOGGGJEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLHKOGGGJEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + OACLOOOEDEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLOOOEDEF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLOOOEDEF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JLHKOGGGJEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLHKOGGGJEH&))((::PBYTE)hIl2Cpp + OACLOOOEDEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
