#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NEEPGONBOKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKHHJMNKENC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKHHJMNKENC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76ED50)
#define HKHHJMNKENC_FLPHIFKJCEK_1_OFFSET UNITYSDK_OFFSET(0x15A8D140)
#define HKHHJMNKENC_FLPHIFKJCEK_OFFSET UNITYSDK_OFFSET(0x15A8D0A0)
#define HKHHJMNKENC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKHHJMNKENC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKHHJMNKENC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76ED40)
#define HKHHJMNKENC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76ED30)
#define HKHHJMNKENC___INIT_OFFSET UNITYSDK_OFFSET(0x76ED10)

inline static constexpr unsigned int HKHHJMNKENC_TypeDefinitionIndex = 16368;

struct alignas(8) HKHHJMNKENC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHHJMNKENC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHHJMNKENC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHHJMNKENC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NEEPGONBOKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEEPGONBOKK&))((::PBYTE)hIl2Cpp + HKHHJMNKENC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NEEPGONBOKK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEEPGONBOKK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKHHJMNKENC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HKHHJMNKENC FLPHIFKJCEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKHHJMNKENC EIFONLCJOPG)
	{
		return ((::HKHHJMNKENC(*)(::FlatBuffers::ByteBuffer*, ::HKHHJMNKENC))((::PBYTE)hIl2Cpp + HKHHJMNKENC_FLPHIFKJCEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHHJMNKENC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HKHHJMNKENC FLPHIFKJCEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKHHJMNKENC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHHJMNKENC_FLPHIFKJCEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HKHHJMNKENC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKHHJMNKENC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHHJMNKENC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
