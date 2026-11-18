#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EDJDJKEEHNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCEDNHKLOAK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCEDNHKLOAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813160)
#define LCEDNHKLOAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCEDNHKLOAK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCEDNHKLOAK_JNDLLIENAMH_1_OFFSET UNITYSDK_OFFSET(0x1B7ED140)
#define LCEDNHKLOAK_JNDLLIENAMH_OFFSET UNITYSDK_OFFSET(0x1B7ED0D0)
#define LCEDNHKLOAK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813150)
#define LCEDNHKLOAK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8131A0)
#define LCEDNHKLOAK___INIT_OFFSET UNITYSDK_OFFSET(0x813130)

inline static constexpr unsigned int LCEDNHKLOAK_TypeDefinitionIndex = 16195;

struct alignas(8) LCEDNHKLOAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCEDNHKLOAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EDJDJKEEHNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDJDJKEEHNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LCEDNHKLOAK JNDLLIENAMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCEDNHKLOAK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_JNDLLIENAMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EDJDJKEEHNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDJDJKEEHNM&))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LCEDNHKLOAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCEDNHKLOAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LCEDNHKLOAK JNDLLIENAMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCEDNHKLOAK EIFONLCJOPG)
	{
		return ((::LCEDNHKLOAK(*)(::FlatBuffers::ByteBuffer*, ::LCEDNHKLOAK))((::PBYTE)hIl2Cpp + LCEDNHKLOAK_JNDLLIENAMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
