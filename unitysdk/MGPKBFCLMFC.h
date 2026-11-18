#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KINJKACFGDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGPKBFCLMFC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGPKBFCLMFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B9A0)
#define MGPKBFCLMFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGPKBFCLMFC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGPKBFCLMFC_MMKJJHHKJOA_1_OFFSET UNITYSDK_OFFSET(0x1B3159B0)
#define MGPKBFCLMFC_MMKJJHHKJOA_OFFSET UNITYSDK_OFFSET(0x1B315810)
#define MGPKBFCLMFC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B990)
#define MGPKBFCLMFC___INIT_OFFSET UNITYSDK_OFFSET(0x80B970)

inline static constexpr unsigned int MGPKBFCLMFC_TypeDefinitionIndex = 12167;

struct alignas(8) MGPKBFCLMFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGPKBFCLMFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MGPKBFCLMFC MMKJJHHKJOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGPKBFCLMFC EIFONLCJOPG)
	{
		return ((::MGPKBFCLMFC(*)(::FlatBuffers::ByteBuffer*, ::MGPKBFCLMFC))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_MMKJJHHKJOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KINJKACFGDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KINJKACFGDO&))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MGPKBFCLMFC MMKJJHHKJOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGPKBFCLMFC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_MMKJJHHKJOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MGPKBFCLMFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGPKBFCLMFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGPKBFCLMFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
