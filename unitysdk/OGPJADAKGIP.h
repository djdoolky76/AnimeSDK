#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEABHIDCEAL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGPJADAKGIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGPJADAKGIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803620)
#define OGPJADAKGIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGPJADAKGIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGPJADAKGIP_IALDIFCOHCC_1_OFFSET UNITYSDK_OFFSET(0x1AB2CC40)
#define OGPJADAKGIP_IALDIFCOHCC_OFFSET UNITYSDK_OFFSET(0x1AB2CB40)
#define OGPJADAKGIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x803660)
#define OGPJADAKGIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803670)
#define OGPJADAKGIP___INIT_OFFSET UNITYSDK_OFFSET(0x803600)

inline static constexpr unsigned int OGPJADAKGIP_TypeDefinitionIndex = 11049;

struct alignas(8) OGPJADAKGIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPJADAKGIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGPJADAKGIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEABHIDCEAL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEABHIDCEAL&))((::PBYTE)hIl2Cpp + OGPJADAKGIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OGPJADAKGIP IALDIFCOHCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGPJADAKGIP EIFONLCJOPG)
	{
		return ((::OGPJADAKGIP(*)(::FlatBuffers::ByteBuffer*, ::OGPJADAKGIP))((::PBYTE)hIl2Cpp + OGPJADAKGIP_IALDIFCOHCC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OGPJADAKGIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGPJADAKGIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGPJADAKGIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPJADAKGIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OGPJADAKGIP IALDIFCOHCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGPJADAKGIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGPJADAKGIP_IALDIFCOHCC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEABHIDCEAL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEABHIDCEAL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGPJADAKGIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPJADAKGIP_PPOMNIFACOL_OFFSET))(this);
	}
};
