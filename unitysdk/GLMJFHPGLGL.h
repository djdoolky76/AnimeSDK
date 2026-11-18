#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NODFNENLJHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLMJFHPGLGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLMJFHPGLGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE9D0)
#define GLMJFHPGLGL_FNKBNIEBNEN_1_OFFSET UNITYSDK_OFFSET(0x193390F0)
#define GLMJFHPGLGL_FNKBNIEBNEN_OFFSET UNITYSDK_OFFSET(0x19339080)
#define GLMJFHPGLGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLMJFHPGLGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLMJFHPGLGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEA10)
#define GLMJFHPGLGL___INIT_OFFSET UNITYSDK_OFFSET(0x7DE9B0)

inline static constexpr unsigned int GLMJFHPGLGL_TypeDefinitionIndex = 9990;

struct alignas(8) GLMJFHPGLGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMJFHPGLGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GLMJFHPGLGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMJFHPGLGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GLMJFHPGLGL FNKBNIEBNEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMJFHPGLGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_FNKBNIEBNEN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NODFNENLJHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NODFNENLJHI&))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GLMJFHPGLGL FNKBNIEBNEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLMJFHPGLGL EIFONLCJOPG)
	{
		return ((::GLMJFHPGLGL(*)(::FlatBuffers::ByteBuffer*, ::GLMJFHPGLGL))((::PBYTE)hIl2Cpp + GLMJFHPGLGL_FNKBNIEBNEN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
