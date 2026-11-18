#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHIDCBFNFOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GILFAGHOGJN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GILFAGHOGJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813F30)
#define GILFAGHOGJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GILFAGHOGJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GILFAGHOGJN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813F10)
#define GILFAGHOGJN_MFIAFIGBHEC_1_OFFSET UNITYSDK_OFFSET(0x1B86F0C0)
#define GILFAGHOGJN_MFIAFIGBHEC_OFFSET UNITYSDK_OFFSET(0x1B86F050)
#define GILFAGHOGJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813F20)
#define GILFAGHOGJN___INIT_OFFSET UNITYSDK_OFFSET(0x813EF0)

inline static constexpr unsigned int GILFAGHOGJN_TypeDefinitionIndex = 11449;

struct alignas(8) GILFAGHOGJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILFAGHOGJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GILFAGHOGJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHIDCBFNFOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHIDCBFNFOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + GILFAGHOGJN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILFAGHOGJN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILFAGHOGJN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHIDCBFNFOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHIDCBFNFOC&))((::PBYTE)hIl2Cpp + GILFAGHOGJN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GILFAGHOGJN MFIAFIGBHEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GILFAGHOGJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GILFAGHOGJN_MFIAFIGBHEC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GILFAGHOGJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GILFAGHOGJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GILFAGHOGJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GILFAGHOGJN MFIAFIGBHEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GILFAGHOGJN EIFONLCJOPG)
	{
		return ((::GILFAGHOGJN(*)(::FlatBuffers::ByteBuffer*, ::GILFAGHOGJN))((::PBYTE)hIl2Cpp + GILFAGHOGJN_MFIAFIGBHEC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
