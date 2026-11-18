#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGDBOCECOPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F92B0)
#define AGDBOCECOPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGDBOCECOPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGDBOCECOPM_GIBMDGBLOAP_1_OFFSET UNITYSDK_OFFSET(0x1A5178C0)
#define AGDBOCECOPM_GIBMDGBLOAP_OFFSET UNITYSDK_OFFSET(0x1A517850)
#define AGDBOCECOPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F92A0)
#define AGDBOCECOPM___INIT_OFFSET UNITYSDK_OFFSET(0x7F9280)

inline static constexpr unsigned int AGDBOCECOPM_TypeDefinitionIndex = 9767;

struct alignas(8) AGDBOCECOPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBOCECOPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDBOCECOPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AGDBOCECOPM GIBMDGBLOAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDBOCECOPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDBOCECOPM_GIBMDGBLOAP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBOCECOPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AGDBOCECOPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDBOCECOPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDBOCECOPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBOCECOPM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AGDBOCECOPM GIBMDGBLOAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGDBOCECOPM EIFONLCJOPG)
	{
		return ((::AGDBOCECOPM(*)(::FlatBuffers::ByteBuffer*, ::AGDBOCECOPM))((::PBYTE)hIl2Cpp + AGDBOCECOPM_GIBMDGBLOAP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
