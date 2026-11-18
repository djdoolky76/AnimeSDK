#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CAMPGPOKBGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKFHFNHBBPB_ACHMCNHNHJM_1_OFFSET UNITYSDK_OFFSET(0x1B987940)
#define AKFHFNHBBPB_ACHMCNHNHJM_OFFSET UNITYSDK_OFFSET(0x1B9878D0)
#define AKFHFNHBBPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AKFHFNHBBPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816150)
#define AKFHFNHBBPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKFHFNHBBPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKFHFNHBBPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816140)
#define AKFHFNHBBPB___INIT_OFFSET UNITYSDK_OFFSET(0x816120)

inline static constexpr unsigned int AKFHFNHBBPB_TypeDefinitionIndex = 14609;

struct alignas(8) AKFHFNHBBPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKFHFNHBBPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AKFHFNHBBPB ACHMCNHNHJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKFHFNHBBPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_ACHMCNHNHJM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CAMPGPOKBGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAMPGPOKBGM&))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AKFHFNHBBPB ACHMCNHNHJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKFHFNHBBPB EIFONLCJOPG)
	{
		return ((::AKFHFNHBBPB(*)(::FlatBuffers::ByteBuffer*, ::AKFHFNHBBPB))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_ACHMCNHNHJM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AKFHFNHBBPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKFHFNHBBPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKFHFNHBBPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
