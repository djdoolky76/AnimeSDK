#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OICHLEJEENN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCAAGPEDHNG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCAAGPEDHNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F810)
#define JCAAGPEDHNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCAAGPEDHNG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCAAGPEDHNG_KAMIGAGCNOO_1_OFFSET UNITYSDK_OFFSET(0x15AA0BA0)
#define JCAAGPEDHNG_KAMIGAGCNOO_OFFSET UNITYSDK_OFFSET(0x15AA0B30)
#define JCAAGPEDHNG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F800)
#define JCAAGPEDHNG___INIT_OFFSET UNITYSDK_OFFSET(0x76F7E0)

inline static constexpr unsigned int JCAAGPEDHNG_TypeDefinitionIndex = 14633;

struct alignas(8) JCAAGPEDHNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCAAGPEDHNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCAAGPEDHNG KAMIGAGCNOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCAAGPEDHNG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_KAMIGAGCNOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OICHLEJEENN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OICHLEJEENN&))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JCAAGPEDHNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCAAGPEDHNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JCAAGPEDHNG KAMIGAGCNOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCAAGPEDHNG EIFONLCJOPG)
	{
		return ((::JCAAGPEDHNG(*)(::FlatBuffers::ByteBuffer*, ::JCAAGPEDHNG))((::PBYTE)hIl2Cpp + JCAAGPEDHNG_KAMIGAGCNOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
