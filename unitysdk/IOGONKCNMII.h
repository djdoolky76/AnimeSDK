#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOGONKCNMII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AA20)
#define IOGONKCNMII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOGONKCNMII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOGONKCNMII_ICJFGLBGPPJ_1_OFFSET UNITYSDK_OFFSET(0x1610F330)
#define IOGONKCNMII_ICJFGLBGPPJ_OFFSET UNITYSDK_OFFSET(0x1610F2D0)
#define IOGONKCNMII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77AA60)
#define IOGONKCNMII___INIT_OFFSET UNITYSDK_OFFSET(0x77AA00)

inline static constexpr unsigned int IOGONKCNMII_TypeDefinitionIndex = 14059;

struct alignas(8) IOGONKCNMII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGONKCNMII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGONKCNMII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IOGONKCNMII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGONKCNMII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGONKCNMII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGONKCNMII_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IOGONKCNMII ICJFGLBGPPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOGONKCNMII EIFONLCJOPG)
	{
		return ((::IOGONKCNMII(*)(::FlatBuffers::ByteBuffer*, ::IOGONKCNMII))((::PBYTE)hIl2Cpp + IOGONKCNMII_ICJFGLBGPPJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IOGONKCNMII ICJFGLBGPPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGONKCNMII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGONKCNMII_ICJFGLBGPPJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGONKCNMII_PPOMNIFACOL_OFFSET))(this);
	}
};
