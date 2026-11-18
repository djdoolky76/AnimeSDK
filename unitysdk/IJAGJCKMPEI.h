#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFKAHICLJMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJAGJCKMPEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IJAGJCKMPEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E300)
#define IJAGJCKMPEI_CKFFGGJEFCE_1_OFFSET UNITYSDK_OFFSET(0x1B4EDBA0)
#define IJAGJCKMPEI_CKFFGGJEFCE_OFFSET UNITYSDK_OFFSET(0x1B4EDB40)
#define IJAGJCKMPEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJAGJCKMPEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJAGJCKMPEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E2F0)
#define IJAGJCKMPEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E2E0)
#define IJAGJCKMPEI___INIT_OFFSET UNITYSDK_OFFSET(0x80E2C0)

inline static constexpr unsigned int IJAGJCKMPEI_TypeDefinitionIndex = 14420;

struct alignas(8) IJAGJCKMPEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGJCKMPEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFKAHICLJMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFKAHICLJMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IJAGJCKMPEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJAGJCKMPEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJAGJCKMPEI CKFFGGJEFCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJAGJCKMPEI EIFONLCJOPG)
	{
		return ((::IJAGJCKMPEI(*)(::FlatBuffers::ByteBuffer*, ::IJAGJCKMPEI))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_CKFFGGJEFCE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IJAGJCKMPEI CKFFGGJEFCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJAGJCKMPEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_CKFFGGJEFCE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFKAHICLJMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFKAHICLJMN&))((::PBYTE)hIl2Cpp + IJAGJCKMPEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
