#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMEBEFKCLDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGAHBIIIDBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGAHBIIIDBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF1C0)
#define LGAHBIIIDBA_EAJPHMGOKHB_1_OFFSET UNITYSDK_OFFSET(0x19DA42B0)
#define LGAHBIIIDBA_EAJPHMGOKHB_OFFSET UNITYSDK_OFFSET(0x19DA4240)
#define LGAHBIIIDBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGAHBIIIDBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGAHBIIIDBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF200)
#define LGAHBIIIDBA___INIT_OFFSET UNITYSDK_OFFSET(0x7EF1A0)

inline static constexpr unsigned int LGAHBIIIDBA_TypeDefinitionIndex = 13265;

struct alignas(8) LGAHBIIIDBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAHBIIIDBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGAHBIIIDBA EAJPHMGOKHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAHBIIIDBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_EAJPHMGOKHB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LGAHBIIIDBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAHBIIIDBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LGAHBIIIDBA EAJPHMGOKHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGAHBIIIDBA EIFONLCJOPG)
	{
		return ((::LGAHBIIIDBA(*)(::FlatBuffers::ByteBuffer*, ::LGAHBIIIDBA))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_EAJPHMGOKHB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMEBEFKCLDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMEBEFKCLDP&))((::PBYTE)hIl2Cpp + LGAHBIIIDBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
