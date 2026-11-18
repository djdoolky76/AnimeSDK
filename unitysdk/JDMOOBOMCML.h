#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MBGHBDNAMFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDMOOBOMCML_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JDMOOBOMCML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AD70)
#define JDMOOBOMCML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDMOOBOMCML_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JDMOOBOMCML_KDGGJLFKBPE_1_OFFSET UNITYSDK_OFFSET(0x1B13A4C0)
#define JDMOOBOMCML_KDGGJLFKBPE_OFFSET UNITYSDK_OFFSET(0x1B13A450)
#define JDMOOBOMCML_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AD60)
#define JDMOOBOMCML___INIT_OFFSET UNITYSDK_OFFSET(0x80AD40)

inline static constexpr unsigned int JDMOOBOMCML_TypeDefinitionIndex = 17280;

struct alignas(8) JDMOOBOMCML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMOOBOMCML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDMOOBOMCML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JDMOOBOMCML KDGGJLFKBPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDMOOBOMCML(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDMOOBOMCML_KDGGJLFKBPE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JDMOOBOMCML KDGGJLFKBPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JDMOOBOMCML EIFONLCJOPG)
	{
		return ((::JDMOOBOMCML(*)(::FlatBuffers::ByteBuffer*, ::JDMOOBOMCML))((::PBYTE)hIl2Cpp + JDMOOBOMCML_KDGGJLFKBPE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMOOBOMCML_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMOOBOMCML_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MBGHBDNAMFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBGHBDNAMFP&))((::PBYTE)hIl2Cpp + JDMOOBOMCML_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JDMOOBOMCML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDMOOBOMCML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDMOOBOMCML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
