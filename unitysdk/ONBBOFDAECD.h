#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPADKNJDFMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONBBOFDAECD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONBBOFDAECD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6960)
#define ONBBOFDAECD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONBBOFDAECD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONBBOFDAECD_OGKIMDBABFI_1_OFFSET UNITYSDK_OFFSET(0x1736D100)
#define ONBBOFDAECD_OGKIMDBABFI_OFFSET UNITYSDK_OFFSET(0x1736D000)
#define ONBBOFDAECD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A69A0)
#define ONBBOFDAECD___INIT_OFFSET UNITYSDK_OFFSET(0x7A6940)

inline static constexpr unsigned int ONBBOFDAECD_TypeDefinitionIndex = 16493;

struct alignas(8) ONBBOFDAECD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBBOFDAECD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONBBOFDAECD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPADKNJDFMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPADKNJDFMA&))((::PBYTE)hIl2Cpp + ONBBOFDAECD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ONBBOFDAECD OGKIMDBABFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONBBOFDAECD EIFONLCJOPG)
	{
		return ((::ONBBOFDAECD(*)(::FlatBuffers::ByteBuffer*, ::ONBBOFDAECD))((::PBYTE)hIl2Cpp + ONBBOFDAECD_OGKIMDBABFI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBBOFDAECD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ONBBOFDAECD OGKIMDBABFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONBBOFDAECD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONBBOFDAECD_OGKIMDBABFI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ONBBOFDAECD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONBBOFDAECD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONBBOFDAECD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBBOFDAECD_PPOMNIFACOL_OFFSET))(this);
	}
};
