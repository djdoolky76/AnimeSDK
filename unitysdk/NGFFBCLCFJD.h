#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJEFHGGCMDD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGFFBCLCFJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NGFFBCLCFJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A410)
#define NGFFBCLCFJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGFFBCLCFJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGFFBCLCFJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A450)
#define NGFFBCLCFJD_PFAHIMKOCGN_1_OFFSET UNITYSDK_OFFSET(0x1BAA4470)
#define NGFFBCLCFJD_PFAHIMKOCGN_OFFSET UNITYSDK_OFFSET(0x1BAA4400)
#define NGFFBCLCFJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A460)
#define NGFFBCLCFJD___INIT_OFFSET UNITYSDK_OFFSET(0x81A3F0)

inline static constexpr unsigned int NGFFBCLCFJD_TypeDefinitionIndex = 13548;

struct alignas(8) NGFFBCLCFJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGFFBCLCFJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJEFHGGCMDD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJEFHGGCMDD&))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NGFFBCLCFJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGFFBCLCFJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JJEFHGGCMDD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJEFHGGCMDD&, ::System::Int32&))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NGFFBCLCFJD PFAHIMKOCGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGFFBCLCFJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_PFAHIMKOCGN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGFFBCLCFJD PFAHIMKOCGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGFFBCLCFJD EIFONLCJOPG)
	{
		return ((::NGFFBCLCFJD(*)(::FlatBuffers::ByteBuffer*, ::NGFFBCLCFJD))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_PFAHIMKOCGN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFFBCLCFJD_PPOMNIFACOL_OFFSET))(this);
	}
};
