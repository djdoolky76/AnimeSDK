#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMHIFBAABEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJDIPNLGAEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PJDIPNLGAEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B0A0)
#define PJDIPNLGAEG_CPFMKPEIONB_1_OFFSET UNITYSDK_OFFSET(0x1BAC5EA0)
#define PJDIPNLGAEG_CPFMKPEIONB_OFFSET UNITYSDK_OFFSET(0x1BAC5DA0)
#define PJDIPNLGAEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJDIPNLGAEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PJDIPNLGAEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B0E0)
#define PJDIPNLGAEG___INIT_OFFSET UNITYSDK_OFFSET(0x81B080)

inline static constexpr unsigned int PJDIPNLGAEG_TypeDefinitionIndex = 12492;

struct alignas(8) PJDIPNLGAEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJDIPNLGAEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PJDIPNLGAEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJDIPNLGAEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PJDIPNLGAEG CPFMKPEIONB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PJDIPNLGAEG EIFONLCJOPG)
	{
		return ((::PJDIPNLGAEG(*)(::FlatBuffers::ByteBuffer*, ::PJDIPNLGAEG))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_CPFMKPEIONB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMHIFBAABEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMHIFBAABEJ&))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PJDIPNLGAEG CPFMKPEIONB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJDIPNLGAEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJDIPNLGAEG_CPFMKPEIONB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
