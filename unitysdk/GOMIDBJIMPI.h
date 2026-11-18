#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOJANFDFPBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOMIDBJIMPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOMIDBJIMPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B4D0)
#define GOMIDBJIMPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOMIDBJIMPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOMIDBJIMPI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B510)
#define GOMIDBJIMPI_MJPDHNABJIH_1_OFFSET UNITYSDK_OFFSET(0x1BAD2C10)
#define GOMIDBJIMPI_MJPDHNABJIH_OFFSET UNITYSDK_OFFSET(0x1BAD2BA0)
#define GOMIDBJIMPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B520)
#define GOMIDBJIMPI___INIT_OFFSET UNITYSDK_OFFSET(0x81B4B0)

inline static constexpr unsigned int GOMIDBJIMPI_TypeDefinitionIndex = 15981;

struct alignas(8) GOMIDBJIMPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOMIDBJIMPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GOMIDBJIMPI MJPDHNABJIH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOMIDBJIMPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_MJPDHNABJIH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GOMIDBJIMPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOMIDBJIMPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOJANFDFPBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOJANFDFPBH&))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOJANFDFPBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOJANFDFPBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GOMIDBJIMPI MJPDHNABJIH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOMIDBJIMPI EIFONLCJOPG)
	{
		return ((::GOMIDBJIMPI(*)(::FlatBuffers::ByteBuffer*, ::GOMIDBJIMPI))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_MJPDHNABJIH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDBJIMPI_GHKKNCCLPAN_OFFSET))(this);
	}
};
