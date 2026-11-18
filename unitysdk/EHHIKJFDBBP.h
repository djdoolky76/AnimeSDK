#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAOEFCOHFMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHHIKJFDBBP_AEMICLPHABF_1_OFFSET UNITYSDK_OFFSET(0x187AC040)
#define EHHIKJFDBBP_AEMICLPHABF_OFFSET UNITYSDK_OFFSET(0x187ABFD0)
#define EHHIKJFDBBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EHHIKJFDBBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D10F0)
#define EHHIKJFDBBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHHIKJFDBBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EHHIKJFDBBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D10E0)
#define EHHIKJFDBBP___INIT_OFFSET UNITYSDK_OFFSET(0x7D10C0)

inline static constexpr unsigned int EHHIKJFDBBP_TypeDefinitionIndex = 13148;

struct alignas(8) EHHIKJFDBBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHHIKJFDBBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAOEFCOHFMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAOEFCOHFMJ&))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EHHIKJFDBBP AEMICLPHABF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHHIKJFDBBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_AEMICLPHABF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EHHIKJFDBBP AEMICLPHABF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EHHIKJFDBBP EIFONLCJOPG)
	{
		return ((::EHHIKJFDBBP(*)(::FlatBuffers::ByteBuffer*, ::EHHIKJFDBBP))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_AEMICLPHABF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EHHIKJFDBBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHHIKJFDBBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHHIKJFDBBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
