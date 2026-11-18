#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COJIGJFLJME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHJLFLMEJMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CHJLFLMEJMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9D20)
#define CHJLFLMEJMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHJLFLMEJMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CHJLFLMEJMA_MHCKKKJAIGJ_1_OFFSET UNITYSDK_OFFSET(0x1A53F290)
#define CHJLFLMEJMA_MHCKKKJAIGJ_OFFSET UNITYSDK_OFFSET(0x1A53F190)
#define CHJLFLMEJMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9D10)
#define CHJLFLMEJMA___INIT_OFFSET UNITYSDK_OFFSET(0x7F9CF0)

inline static constexpr unsigned int CHJLFLMEJMA_TypeDefinitionIndex = 14972;

struct alignas(8) CHJLFLMEJMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJLFLMEJMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CHJLFLMEJMA MHCKKKJAIGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CHJLFLMEJMA EIFONLCJOPG)
	{
		return ((::CHJLFLMEJMA(*)(::FlatBuffers::ByteBuffer*, ::CHJLFLMEJMA))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_MHCKKKJAIGJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CHJLFLMEJMA MHCKKKJAIGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHJLFLMEJMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_MHCKKKJAIGJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COJIGJFLJME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COJIGJFLJME&))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CHJLFLMEJMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHJLFLMEJMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJLFLMEJMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
