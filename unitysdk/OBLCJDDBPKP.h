#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EIGCFGOEAIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBLCJDDBPKP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBLCJDDBPKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C49E0)
#define OBLCJDDBPKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBLCJDDBPKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBLCJDDBPKP_ODMBCFADKEL_1_OFFSET UNITYSDK_OFFSET(0x17FDC430)
#define OBLCJDDBPKP_ODMBCFADKEL_OFFSET UNITYSDK_OFFSET(0x17FDC2D0)
#define OBLCJDDBPKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4A20)
#define OBLCJDDBPKP___INIT_OFFSET UNITYSDK_OFFSET(0x7C49C0)

inline static constexpr unsigned int OBLCJDDBPKP_TypeDefinitionIndex = 12677;

struct alignas(8) OBLCJDDBPKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCJDDBPKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OBLCJDDBPKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLCJDDBPKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OBLCJDDBPKP ODMBCFADKEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBLCJDDBPKP EIFONLCJOPG)
	{
		return ((::OBLCJDDBPKP(*)(::FlatBuffers::ByteBuffer*, ::OBLCJDDBPKP))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_ODMBCFADKEL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EIGCFGOEAIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EIGCFGOEAIE&))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OBLCJDDBPKP ODMBCFADKEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLCJDDBPKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCJDDBPKP_ODMBCFADKEL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
