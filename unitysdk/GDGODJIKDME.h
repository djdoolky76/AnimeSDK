#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDMNAKEKIJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDGODJIKDME_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDGODJIKDME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE480)
#define GDGODJIKDME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDGODJIKDME_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDGODJIKDME_HAKJLLKAKCN_1_OFFSET UNITYSDK_OFFSET(0x19328E40)
#define GDGODJIKDME_HAKJLLKAKCN_OFFSET UNITYSDK_OFFSET(0x19328D40)
#define GDGODJIKDME_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DE460)
#define GDGODJIKDME_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE470)
#define GDGODJIKDME___INIT_OFFSET UNITYSDK_OFFSET(0x7DE440)

inline static constexpr unsigned int GDGODJIKDME_TypeDefinitionIndex = 17597;

struct alignas(8) GDGODJIKDME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGODJIKDME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDGODJIKDME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MDMNAKEKIJH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDMNAKEKIJH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDGODJIKDME_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDMNAKEKIJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDMNAKEKIJH&))((::PBYTE)hIl2Cpp + GDGODJIKDME_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDGODJIKDME HAKJLLKAKCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDGODJIKDME EIFONLCJOPG)
	{
		return ((::GDGODJIKDME(*)(::FlatBuffers::ByteBuffer*, ::GDGODJIKDME))((::PBYTE)hIl2Cpp + GDGODJIKDME_HAKJLLKAKCN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGODJIKDME_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGODJIKDME_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GDGODJIKDME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDGODJIKDME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDGODJIKDME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GDGODJIKDME HAKJLLKAKCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDGODJIKDME(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDGODJIKDME_HAKJLLKAKCN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
