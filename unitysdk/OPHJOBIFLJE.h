#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KAALFOFOOLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPHJOBIFLJE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OPHJOBIFLJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define OPHJOBIFLJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPHJOBIFLJE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPHJOBIFLJE_MPMLJBNINMI_1_OFFSET UNITYSDK_OFFSET(0x1BAB9420)
#define OPHJOBIFLJE_MPMLJBNINMI_OFFSET UNITYSDK_OFFSET(0x1BAB93D0)
#define OPHJOBIFLJE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OPHJOBIFLJE_TypeDefinitionIndex = 10684;

struct alignas(8) OPHJOBIFLJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPHJOBIFLJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KAALFOFOOLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KAALFOFOOLD&))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OPHJOBIFLJE MPMLJBNINMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPHJOBIFLJE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_MPMLJBNINMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OPHJOBIFLJE MPMLJBNINMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPHJOBIFLJE EIFONLCJOPG)
	{
		return ((::OPHJOBIFLJE(*)(::FlatBuffers::ByteBuffer*, ::OPHJOBIFLJE))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_MPMLJBNINMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OPHJOBIFLJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPHJOBIFLJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPHJOBIFLJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
