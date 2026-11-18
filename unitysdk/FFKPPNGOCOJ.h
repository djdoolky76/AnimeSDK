#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PAPCLAKGKEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFKPPNGOCOJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FFKPPNGOCOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7940)
#define FFKPPNGOCOJ_EGKGKJJHDBB_1_OFFSET UNITYSDK_OFFSET(0x1A4C15A0)
#define FFKPPNGOCOJ_EGKGKJJHDBB_OFFSET UNITYSDK_OFFSET(0x1A4C1500)
#define FFKPPNGOCOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFKPPNGOCOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FFKPPNGOCOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7980)
#define FFKPPNGOCOJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F7920)

inline static constexpr unsigned int FFKPPNGOCOJ_TypeDefinitionIndex = 14375;

struct alignas(8) FFKPPNGOCOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PAPCLAKGKEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAPCLAKGKEG&))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FFKPPNGOCOJ EGKGKJJHDBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FFKPPNGOCOJ EIFONLCJOPG)
	{
		return ((::FFKPPNGOCOJ(*)(::FlatBuffers::ByteBuffer*, ::FFKPPNGOCOJ))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_EGKGKJJHDBB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FFKPPNGOCOJ EGKGKJJHDBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFKPPNGOCOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_EGKGKJJHDBB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FFKPPNGOCOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFKPPNGOCOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKPPNGOCOJ_PPOMNIFACOL_OFFSET))(this);
	}
};
