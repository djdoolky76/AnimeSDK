#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICOAEJFDPOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNDAEMKPPDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNDAEMKPPDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4B20)
#define KNDAEMKPPDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNDAEMKPPDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNDAEMKPPDM_JOLIGDHOIPE_1_OFFSET UNITYSDK_OFFSET(0x1955E550)
#define KNDAEMKPPDM_JOLIGDHOIPE_OFFSET UNITYSDK_OFFSET(0x1955E4E0)
#define KNDAEMKPPDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4B60)
#define KNDAEMKPPDM___INIT_OFFSET UNITYSDK_OFFSET(0x7E4B00)

inline static constexpr unsigned int KNDAEMKPPDM_TypeDefinitionIndex = 14510;

struct alignas(8) KNDAEMKPPDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNDAEMKPPDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KNDAEMKPPDM JOLIGDHOIPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNDAEMKPPDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_JOLIGDHOIPE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KNDAEMKPPDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNDAEMKPPDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KNDAEMKPPDM JOLIGDHOIPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNDAEMKPPDM EIFONLCJOPG)
	{
		return ((::KNDAEMKPPDM(*)(::FlatBuffers::ByteBuffer*, ::KNDAEMKPPDM))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_JOLIGDHOIPE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICOAEJFDPOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICOAEJFDPOK&))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDAEMKPPDM_PPOMNIFACOL_OFFSET))(this);
	}
};
