#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBMCNKOBAEB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMDEDHLILMG_AKDDJHEPLJF_1_OFFSET UNITYSDK_OFFSET(0x1B3414A0)
#define OMDEDHLILMG_AKDDJHEPLJF_OFFSET UNITYSDK_OFFSET(0x1B341360)
#define OMDEDHLILMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OMDEDHLILMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C8C0)
#define OMDEDHLILMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMDEDHLILMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OMDEDHLILMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C900)
#define OMDEDHLILMG___INIT_OFFSET UNITYSDK_OFFSET(0x80C8A0)

inline static constexpr unsigned int OMDEDHLILMG_TypeDefinitionIndex = 9542;

struct alignas(8) OMDEDHLILMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDEDHLILMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMDEDHLILMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDEDHLILMG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OMDEDHLILMG AKDDJHEPLJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OMDEDHLILMG EIFONLCJOPG)
	{
		return ((::OMDEDHLILMG(*)(::FlatBuffers::ByteBuffer*, ::OMDEDHLILMG))((::PBYTE)hIl2Cpp + OMDEDHLILMG_AKDDJHEPLJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBMCNKOBAEB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBMCNKOBAEB&))((::PBYTE)hIl2Cpp + OMDEDHLILMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OMDEDHLILMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMDEDHLILMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMDEDHLILMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OMDEDHLILMG AKDDJHEPLJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMDEDHLILMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMDEDHLILMG_AKDDJHEPLJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDEDHLILMG_PPOMNIFACOL_OFFSET))(this);
	}
};
