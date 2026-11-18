#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INGJIKJPBLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAOMJJDOGHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NAOMJJDOGHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA1F0)
#define NAOMJJDOGHK_BHOMLLEBAFI_1_OFFSET UNITYSDK_OFFSET(0x19114620)
#define NAOMJJDOGHK_BHOMLLEBAFI_OFFSET UNITYSDK_OFFSET(0x191145C0)
#define NAOMJJDOGHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAOMJJDOGHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NAOMJJDOGHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA1E0)
#define NAOMJJDOGHK___INIT_OFFSET UNITYSDK_OFFSET(0x7DA1C0)

inline static constexpr unsigned int NAOMJJDOGHK_TypeDefinitionIndex = 17536;

struct alignas(8) NAOMJJDOGHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOMJJDOGHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INGJIKJPBLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INGJIKJPBLM&))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NAOMJJDOGHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAOMJJDOGHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NAOMJJDOGHK BHOMLLEBAFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NAOMJJDOGHK EIFONLCJOPG)
	{
		return ((::NAOMJJDOGHK(*)(::FlatBuffers::ByteBuffer*, ::NAOMJJDOGHK))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_BHOMLLEBAFI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NAOMJJDOGHK BHOMLLEBAFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAOMJJDOGHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAOMJJDOGHK_BHOMLLEBAFI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
