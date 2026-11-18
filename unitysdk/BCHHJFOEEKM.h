#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CNGKNMOKGNB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCHHJFOEEKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BCHHJFOEEKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4C50)
#define BCHHJFOEEKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCHHJFOEEKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCHHJFOEEKM_HIIJEGMELIL_1_OFFSET UNITYSDK_OFFSET(0x1A169BC0)
#define BCHHJFOEEKM_HIIJEGMELIL_OFFSET UNITYSDK_OFFSET(0x1A169B50)
#define BCHHJFOEEKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F4CA0)
#define BCHHJFOEEKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4C90)
#define BCHHJFOEEKM___INIT_OFFSET UNITYSDK_OFFSET(0x7F4C30)

inline static constexpr unsigned int BCHHJFOEEKM_TypeDefinitionIndex = 10986;

struct alignas(8) BCHHJFOEEKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCHHJFOEEKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BCHHJFOEEKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCHHJFOEEKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BCHHJFOEEKM HIIJEGMELIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCHHJFOEEKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_HIIJEGMELIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BCHHJFOEEKM HIIJEGMELIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCHHJFOEEKM EIFONLCJOPG)
	{
		return ((::BCHHJFOEEKM(*)(::FlatBuffers::ByteBuffer*, ::BCHHJFOEEKM))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_HIIJEGMELIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CNGKNMOKGNB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNGKNMOKGNB&))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CNGKNMOKGNB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNGKNMOKGNB&, ::System::Int32&))((::PBYTE)hIl2Cpp + BCHHJFOEEKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
