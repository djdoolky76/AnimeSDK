#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKJANGMKCEP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHMELOIHICK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHMELOIHICK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EC90)
#define HHMELOIHICK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHMELOIHICK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHMELOIHICK_KDFOFEPILJH_1_OFFSET UNITYSDK_OFFSET(0x15A8C020)
#define HHMELOIHICK_KDFOFEPILJH_OFFSET UNITYSDK_OFFSET(0x15A8BFB0)
#define HHMELOIHICK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76ECD0)
#define HHMELOIHICK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76ECE0)
#define HHMELOIHICK___INIT_OFFSET UNITYSDK_OFFSET(0x76EC70)

inline static constexpr unsigned int HHMELOIHICK_TypeDefinitionIndex = 12642;

struct alignas(8) HHMELOIHICK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMELOIHICK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMELOIHICK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKJANGMKCEP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJANGMKCEP&))((::PBYTE)hIl2Cpp + HHMELOIHICK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HHMELOIHICK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMELOIHICK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMELOIHICK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKJANGMKCEP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJANGMKCEP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHMELOIHICK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HHMELOIHICK KDFOFEPILJH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMELOIHICK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMELOIHICK_KDFOFEPILJH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMELOIHICK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HHMELOIHICK KDFOFEPILJH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHMELOIHICK EIFONLCJOPG)
	{
		return ((::HHMELOIHICK(*)(::FlatBuffers::ByteBuffer*, ::HHMELOIHICK))((::PBYTE)hIl2Cpp + HHMELOIHICK_KDFOFEPILJH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMELOIHICK_GHKKNCCLPAN_OFFSET))(this);
	}
};
