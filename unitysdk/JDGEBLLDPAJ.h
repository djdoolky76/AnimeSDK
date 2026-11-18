#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GKEIJMFFMCG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDGEBLLDPAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JDGEBLLDPAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D54F0)
#define JDGEBLLDPAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDGEBLLDPAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JDGEBLLDPAJ_LOIMODBBNAJ_1_OFFSET UNITYSDK_OFFSET(0x18BC7770)
#define JDGEBLLDPAJ_LOIMODBBNAJ_OFFSET UNITYSDK_OFFSET(0x18BC7700)
#define JDGEBLLDPAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D54E0)
#define JDGEBLLDPAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D54C0)

inline static constexpr unsigned int JDGEBLLDPAJ_TypeDefinitionIndex = 11419;

struct alignas(8) JDGEBLLDPAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JDGEBLLDPAJ LOIMODBBNAJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDGEBLLDPAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_LOIMODBBNAJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GKEIJMFFMCG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKEIJMFFMCG&))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JDGEBLLDPAJ LOIMODBBNAJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JDGEBLLDPAJ EIFONLCJOPG)
	{
		return ((::JDGEBLLDPAJ(*)(::FlatBuffers::ByteBuffer*, ::JDGEBLLDPAJ))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_LOIMODBBNAJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JDGEBLLDPAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDGEBLLDPAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDGEBLLDPAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
