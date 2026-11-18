#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EDICEGBDHJO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJBNJGBENFL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJBNJGBENFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA8A0)
#define DJBNJGBENFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJBNJGBENFL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJBNJGBENFL_HNNFIPBBPLC_1_OFFSET UNITYSDK_OFFSET(0x19ADBD40)
#define DJBNJGBENFL_HNNFIPBBPLC_OFFSET UNITYSDK_OFFSET(0x19ADBAE0)
#define DJBNJGBENFL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EA8F0)
#define DJBNJGBENFL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA8E0)
#define DJBNJGBENFL___INIT_OFFSET UNITYSDK_OFFSET(0x7EA880)

inline static constexpr unsigned int DJBNJGBENFL_TypeDefinitionIndex = 13832;

struct alignas(8) DJBNJGBENFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBNJGBENFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJBNJGBENFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DJBNJGBENFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJBNJGBENFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJBNJGBENFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBNJGBENFL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DJBNJGBENFL HNNFIPBBPLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJBNJGBENFL EIFONLCJOPG)
	{
		return ((::DJBNJGBENFL(*)(::FlatBuffers::ByteBuffer*, ::DJBNJGBENFL))((::PBYTE)hIl2Cpp + DJBNJGBENFL_HNNFIPBBPLC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBNJGBENFL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EDICEGBDHJO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDICEGBDHJO&))((::PBYTE)hIl2Cpp + DJBNJGBENFL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EDICEGBDHJO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDICEGBDHJO&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJBNJGBENFL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DJBNJGBENFL HNNFIPBBPLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJBNJGBENFL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJBNJGBENFL_HNNFIPBBPLC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
