#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MJGCFMKCMMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJKMDCLECCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PJKMDCLECCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820F30)
#define PJKMDCLECCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJKMDCLECCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PJKMDCLECCP_IHEGFPNGFNO_1_OFFSET UNITYSDK_OFFSET(0x1C1AD4D0)
#define PJKMDCLECCP_IHEGFPNGFNO_OFFSET UNITYSDK_OFFSET(0x1C1AD430)
#define PJKMDCLECCP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820F20)
#define PJKMDCLECCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820F10)
#define PJKMDCLECCP___INIT_OFFSET UNITYSDK_OFFSET(0x820EF0)

inline static constexpr unsigned int PJKMDCLECCP_TypeDefinitionIndex = 11812;

struct alignas(8) PJKMDCLECCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKMDCLECCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJKMDCLECCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKMDCLECCP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MJGCFMKCMMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJGCFMKCMMB&))((::PBYTE)hIl2Cpp + PJKMDCLECCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PJKMDCLECCP IHEGFPNGFNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PJKMDCLECCP EIFONLCJOPG)
	{
		return ((::PJKMDCLECCP(*)(::FlatBuffers::ByteBuffer*, ::PJKMDCLECCP))((::PBYTE)hIl2Cpp + PJKMDCLECCP_IHEGFPNGFNO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PJKMDCLECCP IHEGFPNGFNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJKMDCLECCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJKMDCLECCP_IHEGFPNGFNO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKMDCLECCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MJGCFMKCMMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJGCFMKCMMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PJKMDCLECCP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PJKMDCLECCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJKMDCLECCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJKMDCLECCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
