#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPGOLNLGPBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B5A0)
#define GPGOLNLGPBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPGOLNLGPBJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPGOLNLGPBJ_NHMHIGHAAEC_1_OFFSET UNITYSDK_OFFSET(0x1BAD39E0)
#define GPGOLNLGPBJ_NHMHIGHAAEC_OFFSET UNITYSDK_OFFSET(0x1BAD3970)
#define GPGOLNLGPBJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B590)
#define GPGOLNLGPBJ___INIT_OFFSET UNITYSDK_OFFSET(0x81B570)

inline static constexpr unsigned int GPGOLNLGPBJ_TypeDefinitionIndex = 9441;

struct alignas(8) GPGOLNLGPBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GPGOLNLGPBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPGOLNLGPBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPGOLNLGPBJ NHMHIGHAAEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPGOLNLGPBJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_NHMHIGHAAEC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPGOLNLGPBJ NHMHIGHAAEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPGOLNLGPBJ EIFONLCJOPG)
	{
		return ((::GPGOLNLGPBJ(*)(::FlatBuffers::ByteBuffer*, ::GPGOLNLGPBJ))((::PBYTE)hIl2Cpp + GPGOLNLGPBJ_NHMHIGHAAEC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
