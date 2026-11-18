#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JDEAFGHKLPL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMHCKGCNKMK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMHCKGCNKMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA970)
#define DMHCKGCNKMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMHCKGCNKMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMHCKGCNKMK_KIKBMEKFNGJ_1_OFFSET UNITYSDK_OFFSET(0x19ACA5C0)
#define DMHCKGCNKMK_KIKBMEKFNGJ_OFFSET UNITYSDK_OFFSET(0x19ADDEA0)
#define DMHCKGCNKMK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EA960)
#define DMHCKGCNKMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA9B0)
#define DMHCKGCNKMK___INIT_OFFSET UNITYSDK_OFFSET(0x7EA940)

inline static constexpr unsigned int DMHCKGCNKMK_TypeDefinitionIndex = 11884;

struct alignas(8) DMHCKGCNKMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMHCKGCNKMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JDEAFGHKLPL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDEAFGHKLPL&, ::System::Int32&))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JDEAFGHKLPL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDEAFGHKLPL&))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DMHCKGCNKMK KIKBMEKFNGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMHCKGCNKMK EIFONLCJOPG)
	{
		return ((::DMHCKGCNKMK(*)(::FlatBuffers::ByteBuffer*, ::DMHCKGCNKMK))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_KIKBMEKFNGJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DMHCKGCNKMK KIKBMEKFNGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMHCKGCNKMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_KIKBMEKFNGJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DMHCKGCNKMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMHCKGCNKMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHCKGCNKMK_PPOMNIFACOL_OFFSET))(this);
	}
};
