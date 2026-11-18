#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJGCMIBMOFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCKMBIPLNJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCKMBIPLNJA_BFHLNDFLDMP_1_OFFSET UNITYSDK_OFFSET(0x1B7EEDE0)
#define LCKMBIPLNJA_BFHLNDFLDMP_OFFSET UNITYSDK_OFFSET(0x1B7EED40)
#define LCKMBIPLNJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813240)
#define LCKMBIPLNJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCKMBIPLNJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCKMBIPLNJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813280)
#define LCKMBIPLNJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813230)
#define LCKMBIPLNJA___INIT_OFFSET UNITYSDK_OFFSET(0x813210)

inline static constexpr unsigned int LCKMBIPLNJA_TypeDefinitionIndex = 14493;

struct alignas(8) LCKMBIPLNJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKMBIPLNJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJGCMIBMOFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJGCMIBMOFM&))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LCKMBIPLNJA BFHLNDFLDMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCKMBIPLNJA EIFONLCJOPG)
	{
		return ((::LCKMBIPLNJA(*)(::FlatBuffers::ByteBuffer*, ::LCKMBIPLNJA))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_BFHLNDFLDMP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LCKMBIPLNJA BFHLNDFLDMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKMBIPLNJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_BFHLNDFLDMP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LCKMBIPLNJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKMBIPLNJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JJGCMIBMOFM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJGCMIBMOFM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCKMBIPLNJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
