#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LBHMCBPCACM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NELDJOOEPNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NELDJOOEPNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BFD0)
#define NELDJOOEPNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NELDJOOEPNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NELDJOOEPNM_HPECNOMCHHH_1_OFFSET UNITYSDK_OFFSET(0x1B329180)
#define NELDJOOEPNM_HPECNOMCHHH_OFFSET UNITYSDK_OFFSET(0x1B328EE0)
#define NELDJOOEPNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BFC0)
#define NELDJOOEPNM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C010)
#define NELDJOOEPNM___INIT_OFFSET UNITYSDK_OFFSET(0x80BFA0)

inline static constexpr unsigned int NELDJOOEPNM_TypeDefinitionIndex = 17580;

struct alignas(8) NELDJOOEPNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELDJOOEPNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NELDJOOEPNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NELDJOOEPNM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NELDJOOEPNM HPECNOMCHHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NELDJOOEPNM EIFONLCJOPG)
	{
		return ((::NELDJOOEPNM(*)(::FlatBuffers::ByteBuffer*, ::NELDJOOEPNM))((::PBYTE)hIl2Cpp + NELDJOOEPNM_HPECNOMCHHH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LBHMCBPCACM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBHMCBPCACM&, ::System::Int32&))((::PBYTE)hIl2Cpp + NELDJOOEPNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NELDJOOEPNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NELDJOOEPNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NELDJOOEPNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LBHMCBPCACM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBHMCBPCACM&))((::PBYTE)hIl2Cpp + NELDJOOEPNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NELDJOOEPNM HPECNOMCHHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NELDJOOEPNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NELDJOOEPNM_HPECNOMCHHH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELDJOOEPNM_PPOMNIFACOL_OFFSET))(this);
	}
};
