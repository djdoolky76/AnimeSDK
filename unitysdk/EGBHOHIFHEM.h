#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGGEMHLEJIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGBHOHIFHEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EGBHOHIFHEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809460)
#define EGBHOHIFHEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGBHOHIFHEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EGBHOHIFHEM_OGDBIFJKJHP_1_OFFSET UNITYSDK_OFFSET(0x1B0FB370)
#define EGBHOHIFHEM_OGDBIFJKJHP_OFFSET UNITYSDK_OFFSET(0x1B0FB300)
#define EGBHOHIFHEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809450)
#define EGBHOHIFHEM___INIT_OFFSET UNITYSDK_OFFSET(0x809430)

inline static constexpr unsigned int EGBHOHIFHEM_TypeDefinitionIndex = 15831;

struct alignas(8) EGBHOHIFHEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGBHOHIFHEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EGBHOHIFHEM OGDBIFJKJHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGBHOHIFHEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_OGDBIFJKJHP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EGBHOHIFHEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGBHOHIFHEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGGEMHLEJIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGGEMHLEJIF&))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EGBHOHIFHEM OGDBIFJKJHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EGBHOHIFHEM EIFONLCJOPG)
	{
		return ((::EGBHOHIFHEM(*)(::FlatBuffers::ByteBuffer*, ::EGBHOHIFHEM))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_OGDBIFJKJHP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBHOHIFHEM_GHKKNCCLPAN_OFFSET))(this);
	}
};
