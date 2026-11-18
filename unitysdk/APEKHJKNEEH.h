#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEFNIAOLDJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APEKHJKNEEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APEKHJKNEEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2060)
#define APEKHJKNEEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APEKHJKNEEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APEKHJKNEEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2050)
#define APEKHJKNEEH_PMAFPHIEAPA_1_OFFSET UNITYSDK_OFFSET(0x194F3A60)
#define APEKHJKNEEH_PMAFPHIEAPA_OFFSET UNITYSDK_OFFSET(0x194F37C0)
#define APEKHJKNEEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2040)
#define APEKHJKNEEH___INIT_OFFSET UNITYSDK_OFFSET(0x7E2020)

inline static constexpr unsigned int APEKHJKNEEH_TypeDefinitionIndex = 12950;

struct alignas(8) APEKHJKNEEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEKHJKNEEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APEKHJKNEEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEKHJKNEEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEKHJKNEEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::APEKHJKNEEH PMAFPHIEAPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APEKHJKNEEH EIFONLCJOPG)
	{
		return ((::APEKHJKNEEH(*)(::FlatBuffers::ByteBuffer*, ::APEKHJKNEEH))((::PBYTE)hIl2Cpp + APEKHJKNEEH_PMAFPHIEAPA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEFNIAOLDJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEFNIAOLDJL&))((::PBYTE)hIl2Cpp + APEKHJKNEEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EEFNIAOLDJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEFNIAOLDJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + APEKHJKNEEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::APEKHJKNEEH PMAFPHIEAPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APEKHJKNEEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APEKHJKNEEH_PMAFPHIEAPA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::APEKHJKNEEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APEKHJKNEEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APEKHJKNEEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
