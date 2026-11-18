#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCMHMCGLDKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAOJKHKFMCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DAOJKHKFMCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED9F0)
#define DAOJKHKFMCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAOJKHKFMCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAOJKHKFMCC_HJIKHLLMJJE_1_OFFSET UNITYSDK_OFFSET(0x19BFF3F0)
#define DAOJKHKFMCC_HJIKHLLMJJE_OFFSET UNITYSDK_OFFSET(0x19BFF380)
#define DAOJKHKFMCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDA30)
#define DAOJKHKFMCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED9E0)
#define DAOJKHKFMCC___INIT_OFFSET UNITYSDK_OFFSET(0x7ED9C0)

inline static constexpr unsigned int DAOJKHKFMCC_TypeDefinitionIndex = 13449;

struct alignas(8) DAOJKHKFMCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAOJKHKFMCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCMHMCGLDKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCMHMCGLDKA&))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DAOJKHKFMCC HJIKHLLMJJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAOJKHKFMCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_HJIKHLLMJJE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DAOJKHKFMCC HJIKHLLMJJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAOJKHKFMCC EIFONLCJOPG)
	{
		return ((::DAOJKHKFMCC(*)(::FlatBuffers::ByteBuffer*, ::DAOJKHKFMCC))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_HJIKHLLMJJE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DAOJKHKFMCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAOJKHKFMCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCMHMCGLDKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCMHMCGLDKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DAOJKHKFMCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
