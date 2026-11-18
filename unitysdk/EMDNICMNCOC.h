#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELCBBDECFEF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMDNICMNCOC_ANBKDBGFLNM_1_OFFSET UNITYSDK_OFFSET(0x17451280)
#define EMDNICMNCOC_ANBKDBGFLNM_OFFSET UNITYSDK_OFFSET(0x17451210)
#define EMDNICMNCOC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMDNICMNCOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A74C0)
#define EMDNICMNCOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMDNICMNCOC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMDNICMNCOC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A74B0)
#define EMDNICMNCOC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7500)
#define EMDNICMNCOC___INIT_OFFSET UNITYSDK_OFFSET(0x7A7490)

inline static constexpr unsigned int EMDNICMNCOC_TypeDefinitionIndex = 11863;

struct alignas(8) EMDNICMNCOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDNICMNCOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDNICMNCOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELCBBDECFEF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELCBBDECFEF&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDNICMNCOC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELCBBDECFEF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELCBBDECFEF&))((::PBYTE)hIl2Cpp + EMDNICMNCOC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EMDNICMNCOC ANBKDBGFLNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMDNICMNCOC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDNICMNCOC_ANBKDBGFLNM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EMDNICMNCOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMDNICMNCOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDNICMNCOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDNICMNCOC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDNICMNCOC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EMDNICMNCOC ANBKDBGFLNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMDNICMNCOC EIFONLCJOPG)
	{
		return ((::EMDNICMNCOC(*)(::FlatBuffers::ByteBuffer*, ::EMDNICMNCOC))((::PBYTE)hIl2Cpp + EMDNICMNCOC_ANBKDBGFLNM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
