#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LFDIELJJGOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGGNAHGHAMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FGGNAHGHAMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D060)
#define FGGNAHGHAMH_FFMJFPJEDNM_1_OFFSET UNITYSDK_OFFSET(0x1B4C10D0)
#define FGGNAHGHAMH_FFMJFPJEDNM_OFFSET UNITYSDK_OFFSET(0x1B4C1060)
#define FGGNAHGHAMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGGNAHGHAMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGGNAHGHAMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D0A0)
#define FGGNAHGHAMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D0B0)
#define FGGNAHGHAMH___INIT_OFFSET UNITYSDK_OFFSET(0x80D040)

inline static constexpr unsigned int FGGNAHGHAMH_TypeDefinitionIndex = 17458;

struct alignas(8) FGGNAHGHAMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGGNAHGHAMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FGGNAHGHAMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGGNAHGHAMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FGGNAHGHAMH FFMJFPJEDNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGGNAHGHAMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_FFMJFPJEDNM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LFDIELJJGOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFDIELJJGOO&))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LFDIELJJGOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFDIELJJGOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FGGNAHGHAMH FFMJFPJEDNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGGNAHGHAMH EIFONLCJOPG)
	{
		return ((::FGGNAHGHAMH(*)(::FlatBuffers::ByteBuffer*, ::FGGNAHGHAMH))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_FFMJFPJEDNM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGNAHGHAMH_GHKKNCCLPAN_OFFSET))(this);
	}
};
