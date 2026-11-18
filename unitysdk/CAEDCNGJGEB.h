#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNBEFJHNFPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAEDCNGJGEB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CAEDCNGJGEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1D60)
#define CAEDCNGJGEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAEDCNGJGEB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAEDCNGJGEB_HLBMKFOEEGA_1_OFFSET UNITYSDK_OFFSET(0x17A7FBB0)
#define CAEDCNGJGEB_HLBMKFOEEGA_OFFSET UNITYSDK_OFFSET(0x17A7FAB0)
#define CAEDCNGJGEB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1D40)
#define CAEDCNGJGEB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1D50)
#define CAEDCNGJGEB___INIT_OFFSET UNITYSDK_OFFSET(0x7B1D20)

inline static constexpr unsigned int CAEDCNGJGEB_TypeDefinitionIndex = 17290;

struct alignas(8) CAEDCNGJGEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAEDCNGJGEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNBEFJHNFPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNBEFJHNFPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CAEDCNGJGEB HLBMKFOEEGA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAEDCNGJGEB EIFONLCJOPG)
	{
		return ((::CAEDCNGJGEB(*)(::FlatBuffers::ByteBuffer*, ::CAEDCNGJGEB))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_HLBMKFOEEGA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNBEFJHNFPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNBEFJHNFPM&))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CAEDCNGJGEB HLBMKFOEEGA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAEDCNGJGEB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_HLBMKFOEEGA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CAEDCNGJGEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAEDCNGJGEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAEDCNGJGEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
