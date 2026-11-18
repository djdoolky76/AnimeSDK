#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNBEBMPIDFC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFDAIAMFDDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFDAIAMFDDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F240)
#define IFDAIAMFDDM_DJFMEKKFMHH_1_OFFSET UNITYSDK_OFFSET(0x15A94D00)
#define IFDAIAMFDDM_DJFMEKKFMHH_OFFSET UNITYSDK_OFFSET(0x15A94C90)
#define IFDAIAMFDDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFDAIAMFDDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFDAIAMFDDM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F280)
#define IFDAIAMFDDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F230)
#define IFDAIAMFDDM___INIT_OFFSET UNITYSDK_OFFSET(0x76F210)

inline static constexpr unsigned int IFDAIAMFDDM_TypeDefinitionIndex = 9785;

struct alignas(8) IFDAIAMFDDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDAIAMFDDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNBEBMPIDFC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNBEBMPIDFC&))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IFDAIAMFDDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFDAIAMFDDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNBEBMPIDFC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNBEBMPIDFC&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IFDAIAMFDDM DJFMEKKFMHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFDAIAMFDDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_DJFMEKKFMHH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFDAIAMFDDM DJFMEKKFMHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFDAIAMFDDM EIFONLCJOPG)
	{
		return ((::IFDAIAMFDDM(*)(::FlatBuffers::ByteBuffer*, ::IFDAIAMFDDM))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_DJFMEKKFMHH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDAIAMFDDM_GHKKNCCLPAN_OFFSET))(this);
	}
};
