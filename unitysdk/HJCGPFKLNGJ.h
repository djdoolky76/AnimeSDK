#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CFFCKAFAEEK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJCGPFKLNGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJCGPFKLNGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3930)
#define HJCGPFKLNGJ_EHCAONCHHGE_1_OFFSET UNITYSDK_OFFSET(0x19534260)
#define HJCGPFKLNGJ_EHCAONCHHGE_OFFSET UNITYSDK_OFFSET(0x195341C0)
#define HJCGPFKLNGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJCGPFKLNGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJCGPFKLNGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3920)
#define HJCGPFKLNGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E3900)

inline static constexpr unsigned int HJCGPFKLNGJ_TypeDefinitionIndex = 9879;

struct alignas(8) HJCGPFKLNGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HJCGPFKLNGJ EHCAONCHHGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJCGPFKLNGJ EIFONLCJOPG)
	{
		return ((::HJCGPFKLNGJ(*)(::FlatBuffers::ByteBuffer*, ::HJCGPFKLNGJ))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_EHCAONCHHGE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HJCGPFKLNGJ EHCAONCHHGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJCGPFKLNGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_EHCAONCHHGE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HJCGPFKLNGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJCGPFKLNGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CFFCKAFAEEK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CFFCKAFAEEK&))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCGPFKLNGJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
