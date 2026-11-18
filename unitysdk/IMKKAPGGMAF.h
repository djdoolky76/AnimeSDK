#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ALODNBLGKKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IMKKAPGGMAF_ANJBGCPLMHA_OFFSET UNITYSDK_OFFSET(0x755790)
#define IMKKAPGGMAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMKKAPGGMAF_CFBLCKOGAAP_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define IMKKAPGGMAF_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x757290)
#define IMKKAPGGMAF_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMKKAPGGMAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMKKAPGGMAF_GKPMPEFIJFE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IMKKAPGGMAF_IHLKODHOJJB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IMKKAPGGMAF_JDPBEIOLNBM_OFFSET UNITYSDK_OFFSET(0x757210)
#define IMKKAPGGMAF_KDFICHBJGCB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define IMKKAPGGMAF_LAABGLKEJIE_OFFSET UNITYSDK_OFFSET(0x756440)
#define IMKKAPGGMAF_MMMLGEMNIAJ_OFFSET UNITYSDK_OFFSET(0x77A750)
#define IMKKAPGGMAF_OBJNEGDIFCN_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IMKKAPGGMAF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMKKAPGGMAF_TypeDefinitionIndex = 11725;

struct alignas(4) IMKKAPGGMAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMKKAPGGMAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IMKKAPGGMAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMKKAPGGMAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 OBJNEGDIFCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_OBJNEGDIFCN_OFFSET))(this);
	}

	::System::Int32 LAABGLKEJIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_LAABGLKEJIE_OFFSET))(this);
	}

	::System::Boolean JDPBEIOLNBM(::System::Int32 HPMEONKHFGG, ::ALODNBLGKKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ALODNBLGKKM&))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_JDPBEIOLNBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::String* IHLKODHOJJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_IHLKODHOJJB_OFFSET))(this);
	}

	::System::Int32 ANJBGCPLMHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_ANJBGCPLMHA_OFFSET))(this);
	}

	::System::UInt64 MMMLGEMNIAJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_MMMLGEMNIAJ_OFFSET))(this);
	}

	::System::UInt64 CFBLCKOGAAP()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_CFBLCKOGAAP_OFFSET))(this);
	}

	::System::Int32 KDFICHBJGCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_KDFICHBJGCB_OFFSET))(this);
	}

	::System::Int32 GKPMPEFIJFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKAPGGMAF_GKPMPEFIJFE_OFFSET))(this);
	}
};
