#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POFKHINLBCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDEOHNJOBGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDEOHNJOBGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5210)
#define CDEOHNJOBGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDEOHNJOBGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDEOHNJOBGM_GOHOGLGMEFC_1_OFFSET UNITYSDK_OFFSET(0x1A179A40)
#define CDEOHNJOBGM_GOHOGLGMEFC_OFFSET UNITYSDK_OFFSET(0x1A1799D0)
#define CDEOHNJOBGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5250)
#define CDEOHNJOBGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5200)
#define CDEOHNJOBGM___INIT_OFFSET UNITYSDK_OFFSET(0x7F51E0)

inline static constexpr unsigned int CDEOHNJOBGM_TypeDefinitionIndex = 16215;

struct alignas(8) CDEOHNJOBGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDEOHNJOBGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CDEOHNJOBGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDEOHNJOBGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDEOHNJOBGM GOHOGLGMEFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDEOHNJOBGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_GOHOGLGMEFC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POFKHINLBCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POFKHINLBCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POFKHINLBCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POFKHINLBCL&))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CDEOHNJOBGM GOHOGLGMEFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDEOHNJOBGM EIFONLCJOPG)
	{
		return ((::CDEOHNJOBGM(*)(::FlatBuffers::ByteBuffer*, ::CDEOHNJOBGM))((::PBYTE)hIl2Cpp + CDEOHNJOBGM_GOHOGLGMEFC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
