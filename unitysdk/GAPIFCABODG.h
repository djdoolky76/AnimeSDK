#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEBEJFHFCCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAPIFCABODG_AJEHLPMOJDP_1_OFFSET UNITYSDK_OFFSET(0x1A5AE770)
#define GAPIFCABODG_AJEHLPMOJDP_OFFSET UNITYSDK_OFFSET(0x1A5AE6D0)
#define GAPIFCABODG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GAPIFCABODG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC470)
#define GAPIFCABODG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAPIFCABODG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GAPIFCABODG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC4B0)
#define GAPIFCABODG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC460)
#define GAPIFCABODG___INIT_OFFSET UNITYSDK_OFFSET(0x7FC440)

inline static constexpr unsigned int GAPIFCABODG_TypeDefinitionIndex = 12540;

struct alignas(8) GAPIFCABODG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPIFCABODG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPIFCABODG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPIFCABODG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GAPIFCABODG AJEHLPMOJDP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GAPIFCABODG EIFONLCJOPG)
	{
		return ((::GAPIFCABODG(*)(::FlatBuffers::ByteBuffer*, ::GAPIFCABODG))((::PBYTE)hIl2Cpp + GAPIFCABODG_AJEHLPMOJDP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPIFCABODG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GAPIFCABODG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAPIFCABODG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPIFCABODG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GAPIFCABODG AJEHLPMOJDP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAPIFCABODG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAPIFCABODG_AJEHLPMOJDP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEBEJFHFCCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEBEJFHFCCK&))((::PBYTE)hIl2Cpp + GAPIFCABODG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KEBEJFHFCCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEBEJFHFCCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GAPIFCABODG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
