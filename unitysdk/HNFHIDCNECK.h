#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BKDNAMPCKKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNFHIDCNECK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNFHIDCNECK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF180)
#define HNFHIDCNECK_DGAGHJCGBEP_1_OFFSET UNITYSDK_OFFSET(0x19345880)
#define HNFHIDCNECK_DGAGHJCGBEP_OFFSET UNITYSDK_OFFSET(0x19345810)
#define HNFHIDCNECK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNFHIDCNECK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNFHIDCNECK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF1C0)
#define HNFHIDCNECK___INIT_OFFSET UNITYSDK_OFFSET(0x7DF160)

inline static constexpr unsigned int HNFHIDCNECK_TypeDefinitionIndex = 9300;

struct alignas(8) HNFHIDCNECK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFHIDCNECK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFHIDCNECK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HNFHIDCNECK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNFHIDCNECK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFHIDCNECK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HNFHIDCNECK DGAGHJCGBEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNFHIDCNECK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFHIDCNECK_DGAGHJCGBEP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFHIDCNECK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNFHIDCNECK DGAGHJCGBEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNFHIDCNECK EIFONLCJOPG)
	{
		return ((::HNFHIDCNECK(*)(::FlatBuffers::ByteBuffer*, ::HNFHIDCNECK))((::PBYTE)hIl2Cpp + HNFHIDCNECK_DGAGHJCGBEP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFHIDCNECK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BKDNAMPCKKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BKDNAMPCKKA&))((::PBYTE)hIl2Cpp + HNFHIDCNECK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
