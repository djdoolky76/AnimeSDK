#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKILAHOPBDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6E50)
#define OKILAHOPBDF_FDACOEGGJEH_1_OFFSET UNITYSDK_OFFSET(0x195C7CB0)
#define OKILAHOPBDF_FDACOEGGJEH_OFFSET UNITYSDK_OFFSET(0x195C7BB0)
#define OKILAHOPBDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKILAHOPBDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKILAHOPBDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6E40)
#define OKILAHOPBDF___INIT_OFFSET UNITYSDK_OFFSET(0x7E6E20)

inline static constexpr unsigned int OKILAHOPBDF_TypeDefinitionIndex = 13987;

struct alignas(8) OKILAHOPBDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKILAHOPBDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKILAHOPBDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OKILAHOPBDF FDACOEGGJEH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKILAHOPBDF EIFONLCJOPG)
	{
		return ((::OKILAHOPBDF(*)(::FlatBuffers::ByteBuffer*, ::OKILAHOPBDF))((::PBYTE)hIl2Cpp + OKILAHOPBDF_FDACOEGGJEH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKILAHOPBDF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OKILAHOPBDF FDACOEGGJEH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKILAHOPBDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKILAHOPBDF_FDACOEGGJEH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKILAHOPBDF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OKILAHOPBDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKILAHOPBDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKILAHOPBDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
