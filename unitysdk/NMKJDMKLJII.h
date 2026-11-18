#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOBGHMKCNLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMKJDMKLJII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMKJDMKLJII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F5F0)
#define NMKJDMKLJII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMKJDMKLJII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMKJDMKLJII_LOKAOLJOLMO_1_OFFSET UNITYSDK_OFFSET(0x1C0972E0)
#define NMKJDMKLJII_LOKAOLJOLMO_OFFSET UNITYSDK_OFFSET(0x1C0971E0)
#define NMKJDMKLJII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F5E0)
#define NMKJDMKLJII___INIT_OFFSET UNITYSDK_OFFSET(0x81F5C0)

inline static constexpr unsigned int NMKJDMKLJII_TypeDefinitionIndex = 13999;

struct alignas(8) NMKJDMKLJII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJDMKLJII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJDMKLJII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NMKJDMKLJII LOKAOLJOLMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMKJDMKLJII EIFONLCJOPG)
	{
		return ((::NMKJDMKLJII(*)(::FlatBuffers::ByteBuffer*, ::NMKJDMKLJII))((::PBYTE)hIl2Cpp + NMKJDMKLJII_LOKAOLJOLMO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJDMKLJII_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NMKJDMKLJII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMKJDMKLJII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJDMKLJII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NMKJDMKLJII LOKAOLJOLMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMKJDMKLJII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJDMKLJII_LOKAOLJOLMO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJDMKLJII_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOBGHMKCNLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOBGHMKCNLI&))((::PBYTE)hIl2Cpp + NMKJDMKLJII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
