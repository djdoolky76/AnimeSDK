#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GEDCAACLIGF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGINNPINAGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGINNPINAGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760DB0)
#define AGINNPINAGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGINNPINAGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGINNPINAGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x760DF0)
#define AGINNPINAGM_NGAMIGFAEEP_1_OFFSET UNITYSDK_OFFSET(0x1571F2D0)
#define AGINNPINAGM_NGAMIGFAEEP_OFFSET UNITYSDK_OFFSET(0x1571F1D0)
#define AGINNPINAGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760DA0)
#define AGINNPINAGM___INIT_OFFSET UNITYSDK_OFFSET(0x760D80)

inline static constexpr unsigned int AGINNPINAGM_TypeDefinitionIndex = 12639;

struct alignas(8) AGINNPINAGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGINNPINAGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGINNPINAGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AGINNPINAGM NGAMIGFAEEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGINNPINAGM EIFONLCJOPG)
	{
		return ((::AGINNPINAGM(*)(::FlatBuffers::ByteBuffer*, ::AGINNPINAGM))((::PBYTE)hIl2Cpp + AGINNPINAGM_NGAMIGFAEEP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGINNPINAGM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AGINNPINAGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGINNPINAGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGINNPINAGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGINNPINAGM NGAMIGFAEEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGINNPINAGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGINNPINAGM_NGAMIGFAEEP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GEDCAACLIGF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEDCAACLIGF&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGINNPINAGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GEDCAACLIGF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEDCAACLIGF&))((::PBYTE)hIl2Cpp + AGINNPINAGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGINNPINAGM_GHKKNCCLPAN_OFFSET))(this);
	}
};
