#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PIGKOCIOLLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENPHNELNLOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ENPHNELNLOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807F70)
#define ENPHNELNLOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENPHNELNLOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ENPHNELNLOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807FC0)
#define ENPHNELNLOL_LPPKHFOIHFD_1_OFFSET UNITYSDK_OFFSET(0x1ADDA570)
#define ENPHNELNLOL_LPPKHFOIHFD_OFFSET UNITYSDK_OFFSET(0x1ADDA500)
#define ENPHNELNLOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807FB0)
#define ENPHNELNLOL___INIT_OFFSET UNITYSDK_OFFSET(0x807F50)

inline static constexpr unsigned int ENPHNELNLOL_TypeDefinitionIndex = 11341;

struct alignas(8) ENPHNELNLOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPHNELNLOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENPHNELNLOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PIGKOCIOLLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIGKOCIOLLM&))((::PBYTE)hIl2Cpp + ENPHNELNLOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ENPHNELNLOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENPHNELNLOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENPHNELNLOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPHNELNLOL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ENPHNELNLOL LPPKHFOIHFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENPHNELNLOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENPHNELNLOL_LPPKHFOIHFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ENPHNELNLOL LPPKHFOIHFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ENPHNELNLOL EIFONLCJOPG)
	{
		return ((::ENPHNELNLOL(*)(::FlatBuffers::ByteBuffer*, ::ENPHNELNLOL))((::PBYTE)hIl2Cpp + ENPHNELNLOL_LPPKHFOIHFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPHNELNLOL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PIGKOCIOLLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIGKOCIOLLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + ENPHNELNLOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
