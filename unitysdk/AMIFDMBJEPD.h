#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKAKKFPECOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMIFDMBJEPD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMIFDMBJEPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4A90)
#define AMIFDMBJEPD_EJAHKEGMNKL_1_OFFSET UNITYSDK_OFFSET(0x1A162080)
#define AMIFDMBJEPD_EJAHKEGMNKL_OFFSET UNITYSDK_OFFSET(0x1A161FE0)
#define AMIFDMBJEPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMIFDMBJEPD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMIFDMBJEPD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4A80)
#define AMIFDMBJEPD___INIT_OFFSET UNITYSDK_OFFSET(0x7F4A60)

inline static constexpr unsigned int AMIFDMBJEPD_TypeDefinitionIndex = 14873;

struct alignas(8) AMIFDMBJEPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMIFDMBJEPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AMIFDMBJEPD EJAHKEGMNKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMIFDMBJEPD EIFONLCJOPG)
	{
		return ((::AMIFDMBJEPD(*)(::FlatBuffers::ByteBuffer*, ::AMIFDMBJEPD))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_EJAHKEGMNKL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AMIFDMBJEPD EJAHKEGMNKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMIFDMBJEPD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_EJAHKEGMNKL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AMIFDMBJEPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMIFDMBJEPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKAKKFPECOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKAKKFPECOC&))((::PBYTE)hIl2Cpp + AMIFDMBJEPD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
