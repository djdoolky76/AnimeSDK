#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOIFHDHBALO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOBEOFICLJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOBEOFICLJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809DE0)
#define GOBEOFICLJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOBEOFICLJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOBEOFICLJG_IBKMJLJNMFC_1_OFFSET UNITYSDK_OFFSET(0x1B11C110)
#define GOBEOFICLJG_IBKMJLJNMFC_OFFSET UNITYSDK_OFFSET(0x1B11C0A0)
#define GOBEOFICLJG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809E30)
#define GOBEOFICLJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809E20)
#define GOBEOFICLJG___INIT_OFFSET UNITYSDK_OFFSET(0x809DC0)

inline static constexpr unsigned int GOBEOFICLJG_TypeDefinitionIndex = 14031;

struct alignas(8) GOBEOFICLJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBEOFICLJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOBEOFICLJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GOBEOFICLJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOBEOFICLJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOBEOFICLJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GOBEOFICLJG IBKMJLJNMFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOBEOFICLJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOBEOFICLJG_IBKMJLJNMFC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBEOFICLJG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOIFHDHBALO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOIFHDHBALO&))((::PBYTE)hIl2Cpp + GOBEOFICLJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GOBEOFICLJG IBKMJLJNMFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOBEOFICLJG EIFONLCJOPG)
	{
		return ((::GOBEOFICLJG(*)(::FlatBuffers::ByteBuffer*, ::GOBEOFICLJG))((::PBYTE)hIl2Cpp + GOBEOFICLJG_IBKMJLJNMFC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBEOFICLJG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOIFHDHBALO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOIFHDHBALO&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOBEOFICLJG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
