#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGCFMNDBEHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNLNJMDFHAK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNLNJMDFHAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2FE0)
#define FNLNJMDFHAK_EPLMFJCCLCL_1_OFFSET UNITYSDK_OFFSET(0x17AB5760)
#define FNLNJMDFHAK_EPLMFJCCLCL_OFFSET UNITYSDK_OFFSET(0x17AB56F0)
#define FNLNJMDFHAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNLNJMDFHAK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNLNJMDFHAK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2FD0)
#define FNLNJMDFHAK___INIT_OFFSET UNITYSDK_OFFSET(0x7B2FB0)

inline static constexpr unsigned int FNLNJMDFHAK_TypeDefinitionIndex = 13659;

struct alignas(8) FNLNJMDFHAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLNJMDFHAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGCFMNDBEHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGCFMNDBEHF&))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FNLNJMDFHAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNLNJMDFHAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNLNJMDFHAK EPLMFJCCLCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNLNJMDFHAK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_EPLMFJCCLCL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNLNJMDFHAK EPLMFJCCLCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNLNJMDFHAK EIFONLCJOPG)
	{
		return ((::FNLNJMDFHAK(*)(::FlatBuffers::ByteBuffer*, ::FNLNJMDFHAK))((::PBYTE)hIl2Cpp + FNLNJMDFHAK_EPLMFJCCLCL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
