#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEDHJPEPDNC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JALJDGDFEFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JALJDGDFEFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BF40)
#define JALJDGDFEFI_CGDKFLCPDIE_1_OFFSET UNITYSDK_OFFSET(0x1BAEED30)
#define JALJDGDFEFI_CGDKFLCPDIE_OFFSET UNITYSDK_OFFSET(0x1BAEECC0)
#define JALJDGDFEFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JALJDGDFEFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JALJDGDFEFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BF30)
#define JALJDGDFEFI___INIT_OFFSET UNITYSDK_OFFSET(0x81BF10)

inline static constexpr unsigned int JALJDGDFEFI_TypeDefinitionIndex = 10652;

struct alignas(8) JALJDGDFEFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALJDGDFEFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALJDGDFEFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALJDGDFEFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JALJDGDFEFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JALJDGDFEFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALJDGDFEFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEDHJPEPDNC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEDHJPEPDNC&))((::PBYTE)hIl2Cpp + JALJDGDFEFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JALJDGDFEFI CGDKFLCPDIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JALJDGDFEFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JALJDGDFEFI_CGDKFLCPDIE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JALJDGDFEFI CGDKFLCPDIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JALJDGDFEFI EIFONLCJOPG)
	{
		return ((::JALJDGDFEFI(*)(::FlatBuffers::ByteBuffer*, ::JALJDGDFEFI))((::PBYTE)hIl2Cpp + JALJDGDFEFI_CGDKFLCPDIE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JALJDGDFEFI_GHKKNCCLPAN_OFFSET))(this);
	}
};
