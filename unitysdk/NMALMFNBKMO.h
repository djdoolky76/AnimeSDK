#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HEDAOIMGFMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMALMFNBKMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMALMFNBKMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DD30)
#define NMALMFNBKMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMALMFNBKMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMALMFNBKMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85DD70)
#define NMALMFNBKMO_NPNACIMKPFH_1_OFFSET UNITYSDK_OFFSET(0x1CCEEE70)
#define NMALMFNBKMO_NPNACIMKPFH_OFFSET UNITYSDK_OFFSET(0x1CCEEE10)
#define NMALMFNBKMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DD80)
#define NMALMFNBKMO___INIT_OFFSET UNITYSDK_OFFSET(0x85DD10)

inline static constexpr unsigned int NMALMFNBKMO_TypeDefinitionIndex = 9821;

struct alignas(8) NMALMFNBKMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMALMFNBKMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMALMFNBKMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NMALMFNBKMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMALMFNBKMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMALMFNBKMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HEDAOIMGFMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEDAOIMGFMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMALMFNBKMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NMALMFNBKMO NPNACIMKPFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMALMFNBKMO EIFONLCJOPG)
	{
		return ((::NMALMFNBKMO(*)(::FlatBuffers::ByteBuffer*, ::NMALMFNBKMO))((::PBYTE)hIl2Cpp + NMALMFNBKMO_NPNACIMKPFH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NMALMFNBKMO NPNACIMKPFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMALMFNBKMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMALMFNBKMO_NPNACIMKPFH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HEDAOIMGFMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HEDAOIMGFMB&))((::PBYTE)hIl2Cpp + NMALMFNBKMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMALMFNBKMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMALMFNBKMO_GHKKNCCLPAN_OFFSET))(this);
	}
};
