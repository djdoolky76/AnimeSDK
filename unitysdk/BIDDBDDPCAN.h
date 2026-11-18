#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDDBDDPCAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED0D0)
#define BIDDBDDPCAN_DIJHFJNKGPD_1_OFFSET UNITYSDK_OFFSET(0x19BE9750)
#define BIDDBDDPCAN_DIJHFJNKGPD_OFFSET UNITYSDK_OFFSET(0x19BE96E0)
#define BIDDBDDPCAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIDDBDDPCAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIDDBDDPCAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED110)
#define BIDDBDDPCAN___INIT_OFFSET UNITYSDK_OFFSET(0x7ED0B0)

inline static constexpr unsigned int BIDDBDDPCAN_TypeDefinitionIndex = 9790;

struct alignas(8) BIDDBDDPCAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDDBDDPCAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BIDDBDDPCAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIDDBDDPCAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIDDBDDPCAN DIJHFJNKGPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIDDBDDPCAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_DIJHFJNKGPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIDDBDDPCAN DIJHFJNKGPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIDDBDDPCAN EIFONLCJOPG)
	{
		return ((::BIDDBDDPCAN(*)(::FlatBuffers::ByteBuffer*, ::BIDDBDDPCAN))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_DIJHFJNKGPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDBDDPCAN_GHKKNCCLPAN_OFFSET))(this);
	}
};
