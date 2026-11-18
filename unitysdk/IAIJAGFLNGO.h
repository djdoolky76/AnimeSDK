#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMKJJBIDALA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAIJAGFLNGO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IAIJAGFLNGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DF00)
#define IAIJAGFLNGO_EKBDADHFIMH_1_OFFSET UNITYSDK_OFFSET(0x1B4E81C0)
#define IAIJAGFLNGO_EKBDADHFIMH_OFFSET UNITYSDK_OFFSET(0x1B4E8160)
#define IAIJAGFLNGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAIJAGFLNGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IAIJAGFLNGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DF40)
#define IAIJAGFLNGO___INIT_OFFSET UNITYSDK_OFFSET(0x80DEE0)

inline static constexpr unsigned int IAIJAGFLNGO_TypeDefinitionIndex = 16404;

struct alignas(8) IAIJAGFLNGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAIJAGFLNGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IAIJAGFLNGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAIJAGFLNGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMKJJBIDALA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMKJJBIDALA&))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IAIJAGFLNGO EKBDADHFIMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IAIJAGFLNGO EIFONLCJOPG)
	{
		return ((::IAIJAGFLNGO(*)(::FlatBuffers::ByteBuffer*, ::IAIJAGFLNGO))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_EKBDADHFIMH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IAIJAGFLNGO EKBDADHFIMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAIJAGFLNGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAIJAGFLNGO_EKBDADHFIMH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
