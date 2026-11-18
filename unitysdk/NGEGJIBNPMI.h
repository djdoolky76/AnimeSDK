#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJHKJEFHJPK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGEGJIBNPMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NGEGJIBNPMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C0A0)
#define NGEGJIBNPMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGEGJIBNPMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGEGJIBNPMI_KEJBJGMGACP_1_OFFSET UNITYSDK_OFFSET(0x1B32AC70)
#define NGEGJIBNPMI_KEJBJGMGACP_OFFSET UNITYSDK_OFFSET(0x1B32AC00)
#define NGEGJIBNPMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C0E0)
#define NGEGJIBNPMI___INIT_OFFSET UNITYSDK_OFFSET(0x80C080)

inline static constexpr unsigned int NGEGJIBNPMI_TypeDefinitionIndex = 9802;

struct alignas(8) NGEGJIBNPMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEGJIBNPMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NGEGJIBNPMI KEJBJGMGACP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGEGJIBNPMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_KEJBJGMGACP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJHKJEFHJPK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJHKJEFHJPK&))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NGEGJIBNPMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGEGJIBNPMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGEGJIBNPMI KEJBJGMGACP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGEGJIBNPMI EIFONLCJOPG)
	{
		return ((::NGEGJIBNPMI(*)(::FlatBuffers::ByteBuffer*, ::NGEGJIBNPMI))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_KEJBJGMGACP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEGJIBNPMI_PPOMNIFACOL_OFFSET))(this);
	}
};
