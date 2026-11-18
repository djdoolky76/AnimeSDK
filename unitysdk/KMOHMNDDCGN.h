#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FAGCBNPHBEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMOHMNDDCGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMOHMNDDCGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFDE0)
#define KMOHMNDDCGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMOHMNDDCGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMOHMNDDCGN_JICKLBOCEKE_1_OFFSET UNITYSDK_OFFSET(0x19370750)
#define KMOHMNDDCGN_JICKLBOCEKE_OFFSET UNITYSDK_OFFSET(0x19370650)
#define KMOHMNDDCGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFE20)
#define KMOHMNDDCGN___INIT_OFFSET UNITYSDK_OFFSET(0x7DFDC0)

inline static constexpr unsigned int KMOHMNDDCGN_TypeDefinitionIndex = 10397;

struct alignas(8) KMOHMNDDCGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMOHMNDDCGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FAGCBNPHBEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FAGCBNPHBEL&))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KMOHMNDDCGN JICKLBOCEKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMOHMNDDCGN EIFONLCJOPG)
	{
		return ((::KMOHMNDDCGN(*)(::FlatBuffers::ByteBuffer*, ::KMOHMNDDCGN))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_JICKLBOCEKE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KMOHMNDDCGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMOHMNDDCGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KMOHMNDDCGN JICKLBOCEKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMOHMNDDCGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMOHMNDDCGN_JICKLBOCEKE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
