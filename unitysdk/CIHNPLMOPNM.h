#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPCIBEDODKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIHNPLMOPNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CIHNPLMOPNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762130)
#define CIHNPLMOPNM_BKPIADBJMPO_1_OFFSET UNITYSDK_OFFSET(0x15740660)
#define CIHNPLMOPNM_BKPIADBJMPO_OFFSET UNITYSDK_OFFSET(0x157405A0)
#define CIHNPLMOPNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIHNPLMOPNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CIHNPLMOPNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x762120)
#define CIHNPLMOPNM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762170)
#define CIHNPLMOPNM___INIT_OFFSET UNITYSDK_OFFSET(0x762100)

inline static constexpr unsigned int CIHNPLMOPNM_TypeDefinitionIndex = 11762;

struct alignas(8) CIHNPLMOPNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIHNPLMOPNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EPCIBEDODKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPCIBEDODKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CIHNPLMOPNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIHNPLMOPNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CIHNPLMOPNM BKPIADBJMPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CIHNPLMOPNM EIFONLCJOPG)
	{
		return ((::CIHNPLMOPNM(*)(::FlatBuffers::ByteBuffer*, ::CIHNPLMOPNM))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_BKPIADBJMPO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPCIBEDODKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPCIBEDODKE&))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CIHNPLMOPNM BKPIADBJMPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIHNPLMOPNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIHNPLMOPNM_BKPIADBJMPO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
