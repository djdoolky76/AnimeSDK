#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CONDKPCPPHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMIBBBCACKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMIBBBCACKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D430)
#define FMIBBBCACKM_GACICKNHMKA_1_OFFSET UNITYSDK_OFFSET(0x1B4C8E80)
#define FMIBBBCACKM_GACICKNHMKA_OFFSET UNITYSDK_OFFSET(0x1B4C8B80)
#define FMIBBBCACKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMIBBBCACKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMIBBBCACKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D420)
#define FMIBBBCACKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D470)
#define FMIBBBCACKM___INIT_OFFSET UNITYSDK_OFFSET(0x80D400)

inline static constexpr unsigned int FMIBBBCACKM_TypeDefinitionIndex = 15547;

struct alignas(8) FMIBBBCACKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIBBBCACKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIBBBCACKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMIBBBCACKM GACICKNHMKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMIBBBCACKM EIFONLCJOPG)
	{
		return ((::FMIBBBCACKM(*)(::FlatBuffers::ByteBuffer*, ::FMIBBBCACKM))((::PBYTE)hIl2Cpp + FMIBBBCACKM_GACICKNHMKA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CONDKPCPPHF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CONDKPCPPHF&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMIBBBCACKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIBBBCACKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FMIBBBCACKM GACICKNHMKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMIBBBCACKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIBBBCACKM_GACICKNHMKA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CONDKPCPPHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CONDKPCPPHF&))((::PBYTE)hIl2Cpp + FMIBBBCACKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FMIBBBCACKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMIBBBCACKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMIBBBCACKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIBBBCACKM_PPOMNIFACOL_OFFSET))(this);
	}
};
