#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BGIIKAACAGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMIHKDLABLG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMIHKDLABLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF3A0)
#define LMIHKDLABLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMIHKDLABLG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMIHKDLABLG_IPAFDCPCIPB_1_OFFSET UNITYSDK_OFFSET(0x19DAAEF0)
#define LMIHKDLABLG_IPAFDCPCIPB_OFFSET UNITYSDK_OFFSET(0x19DAAE80)
#define LMIHKDLABLG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF3F0)
#define LMIHKDLABLG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF3E0)
#define LMIHKDLABLG___INIT_OFFSET UNITYSDK_OFFSET(0x7EF380)

inline static constexpr unsigned int LMIHKDLABLG_TypeDefinitionIndex = 14710;

struct alignas(8) LMIHKDLABLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHKDLABLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMIHKDLABLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LMIHKDLABLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMIHKDLABLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMIHKDLABLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHKDLABLG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BGIIKAACAGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGIIKAACAGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMIHKDLABLG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMIHKDLABLG IPAFDCPCIPB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMIHKDLABLG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMIHKDLABLG_IPAFDCPCIPB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BGIIKAACAGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGIIKAACAGN&))((::PBYTE)hIl2Cpp + LMIHKDLABLG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMIHKDLABLG IPAFDCPCIPB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMIHKDLABLG EIFONLCJOPG)
	{
		return ((::LMIHKDLABLG(*)(::FlatBuffers::ByteBuffer*, ::LMIHKDLABLG))((::PBYTE)hIl2Cpp + LMIHKDLABLG_IPAFDCPCIPB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHKDLABLG_GHKKNCCLPAN_OFFSET))(this);
	}
};
