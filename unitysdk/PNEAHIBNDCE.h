#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLGGGNPMKCD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNEAHIBNDCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNEAHIBNDCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9A35B0)
#define PNEAHIBNDCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNEAHIBNDCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNEAHIBNDCE_KKKLCIPIENJ_1_OFFSET UNITYSDK_OFFSET(0x1FD7C1D0)
#define PNEAHIBNDCE_KKKLCIPIENJ_OFFSET UNITYSDK_OFFSET(0x1FD7C160)
#define PNEAHIBNDCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9A35A0)
#define PNEAHIBNDCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9A35F0)
#define PNEAHIBNDCE___INIT_OFFSET UNITYSDK_OFFSET(0x9A3580)

inline static constexpr unsigned int PNEAHIBNDCE_TypeDefinitionIndex = 9674;

struct alignas(8) PNEAHIBNDCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNEAHIBNDCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PNEAHIBNDCE KKKLCIPIENJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNEAHIBNDCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_KKKLCIPIENJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNEAHIBNDCE KKKLCIPIENJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNEAHIBNDCE EIFONLCJOPG)
	{
		return ((::PNEAHIBNDCE(*)(::FlatBuffers::ByteBuffer*, ::PNEAHIBNDCE))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_KKKLCIPIENJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLGGGNPMKCD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLGGGNPMKCD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PNEAHIBNDCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNEAHIBNDCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLGGGNPMKCD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLGGGNPMKCD&))((::PBYTE)hIl2Cpp + PNEAHIBNDCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
