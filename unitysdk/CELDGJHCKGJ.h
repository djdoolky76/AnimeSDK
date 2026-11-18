#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PPCFFDHHOGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CELDGJHCKGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CELDGJHCKGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9C60)
#define CELDGJHCKGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CELDGJHCKGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CELDGJHCKGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9C50)
#define CELDGJHCKGJ_NMFAPNCHAEH_1_OFFSET UNITYSDK_OFFSET(0x1A53DCD0)
#define CELDGJHCKGJ_NMFAPNCHAEH_OFFSET UNITYSDK_OFFSET(0x1A53DC60)
#define CELDGJHCKGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9CA0)
#define CELDGJHCKGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F9C30)

inline static constexpr unsigned int CELDGJHCKGJ_TypeDefinitionIndex = 10660;

struct alignas(8) CELDGJHCKGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CELDGJHCKGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PPCFFDHHOGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PPCFFDHHOGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CELDGJHCKGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CELDGJHCKGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PPCFFDHHOGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PPCFFDHHOGO&))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CELDGJHCKGJ NMFAPNCHAEH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CELDGJHCKGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_NMFAPNCHAEH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CELDGJHCKGJ NMFAPNCHAEH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CELDGJHCKGJ EIFONLCJOPG)
	{
		return ((::CELDGJHCKGJ(*)(::FlatBuffers::ByteBuffer*, ::CELDGJHCKGJ))((::PBYTE)hIl2Cpp + CELDGJHCKGJ_NMFAPNCHAEH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
