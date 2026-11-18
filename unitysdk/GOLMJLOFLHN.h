#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFBHOHFALBB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOLMJLOFLHN_AGBOOPGDCEN_1_OFFSET UNITYSDK_OFFSET(0x16652330)
#define GOLMJLOFLHN_AGBOOPGDCEN_OFFSET UNITYSDK_OFFSET(0x16652230)
#define GOLMJLOFLHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOLMJLOFLHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B390)
#define GOLMJLOFLHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOLMJLOFLHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOLMJLOFLHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B380)
#define GOLMJLOFLHN___INIT_OFFSET UNITYSDK_OFFSET(0x78B360)

inline static constexpr unsigned int GOLMJLOFLHN_TypeDefinitionIndex = 15063;

struct alignas(8) GOLMJLOFLHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOLMJLOFLHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFBHOHFALBB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFBHOHFALBB&))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GOLMJLOFLHN AGBOOPGDCEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOLMJLOFLHN EIFONLCJOPG)
	{
		return ((::GOLMJLOFLHN(*)(::FlatBuffers::ByteBuffer*, ::GOLMJLOFLHN))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_AGBOOPGDCEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GOLMJLOFLHN AGBOOPGDCEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOLMJLOFLHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_AGBOOPGDCEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GOLMJLOFLHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOLMJLOFLHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOLMJLOFLHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
