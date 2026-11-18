#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENGCEOLBNIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMOIACGEJNN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMOIACGEJNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788810)
#define CMOIACGEJNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMOIACGEJNN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMOIACGEJNN_PHHLAFNEHCB_1_OFFSET UNITYSDK_OFFSET(0x16613690)
#define CMOIACGEJNN_PHHLAFNEHCB_OFFSET UNITYSDK_OFFSET(0x16613620)
#define CMOIACGEJNN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x788850)
#define CMOIACGEJNN___INIT_OFFSET UNITYSDK_OFFSET(0x7887F0)

inline static constexpr unsigned int CMOIACGEJNN_TypeDefinitionIndex = 14349;

struct alignas(8) CMOIACGEJNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOIACGEJNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMOIACGEJNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CMOIACGEJNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMOIACGEJNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMOIACGEJNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOIACGEJNN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CMOIACGEJNN PHHLAFNEHCB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMOIACGEJNN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMOIACGEJNN_PHHLAFNEHCB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMOIACGEJNN PHHLAFNEHCB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMOIACGEJNN EIFONLCJOPG)
	{
		return ((::CMOIACGEJNN(*)(::FlatBuffers::ByteBuffer*, ::CMOIACGEJNN))((::PBYTE)hIl2Cpp + CMOIACGEJNN_PHHLAFNEHCB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOIACGEJNN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENGCEOLBNIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENGCEOLBNIM&))((::PBYTE)hIl2Cpp + CMOIACGEJNN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
