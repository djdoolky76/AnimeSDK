#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFBMOBDEJMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E51D0)
#define LFBMOBDEJMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFBMOBDEJMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFBMOBDEJMM_POBAFNKPMNL_1_OFFSET UNITYSDK_OFFSET(0x195648C0)
#define LFBMOBDEJMM_POBAFNKPMNL_OFFSET UNITYSDK_OFFSET(0x19564820)
#define LFBMOBDEJMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5210)
#define LFBMOBDEJMM___INIT_OFFSET UNITYSDK_OFFSET(0x7E51B0)

inline static constexpr unsigned int LFBMOBDEJMM_TypeDefinitionIndex = 14157;

struct alignas(8) LFBMOBDEJMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFBMOBDEJMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LFBMOBDEJMM POBAFNKPMNL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFBMOBDEJMM EIFONLCJOPG)
	{
		return ((::LFBMOBDEJMM(*)(::FlatBuffers::ByteBuffer*, ::LFBMOBDEJMM))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_POBAFNKPMNL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LFBMOBDEJMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFBMOBDEJMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LFBMOBDEJMM POBAFNKPMNL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFBMOBDEJMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFBMOBDEJMM_POBAFNKPMNL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
