#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIMPJFDKJFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMPFOOJDIDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMPFOOJDIDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB070)
#define MMPFOOJDIDE_BKLBPGGPGEJ_1_OFFSET UNITYSDK_OFFSET(0x1CFE4230)
#define MMPFOOJDIDE_BKLBPGGPGEJ_OFFSET UNITYSDK_OFFSET(0x1CFE4170)
#define MMPFOOJDIDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMPFOOJDIDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMPFOOJDIDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB060)
#define MMPFOOJDIDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB0B0)
#define MMPFOOJDIDE___INIT_OFFSET UNITYSDK_OFFSET(0x8AB040)

inline static constexpr unsigned int MMPFOOJDIDE_TypeDefinitionIndex = 12967;

struct alignas(8) MMPFOOJDIDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPFOOJDIDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIMPJFDKJFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIMPJFDKJFD&))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DIMPJFDKJFD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIMPJFDKJFD&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MMPFOOJDIDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMPFOOJDIDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MMPFOOJDIDE BKLBPGGPGEJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMPFOOJDIDE EIFONLCJOPG)
	{
		return ((::MMPFOOJDIDE(*)(::FlatBuffers::ByteBuffer*, ::MMPFOOJDIDE))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_BKLBPGGPGEJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MMPFOOJDIDE BKLBPGGPGEJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMPFOOJDIDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMPFOOJDIDE_BKLBPGGPGEJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
