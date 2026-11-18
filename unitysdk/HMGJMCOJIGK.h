#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FOELDAFLODP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMGJMCOJIGK_ACJACLBEBNA_1_OFFSET UNITYSDK_OFFSET(0x17C08200)
#define HMGJMCOJIGK_ACJACLBEBNA_OFFSET UNITYSDK_OFFSET(0x17C08190)
#define HMGJMCOJIGK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HMGJMCOJIGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B57C0)
#define HMGJMCOJIGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMGJMCOJIGK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMGJMCOJIGK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B5800)
#define HMGJMCOJIGK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B57B0)
#define HMGJMCOJIGK___INIT_OFFSET UNITYSDK_OFFSET(0x7B5790)

inline static constexpr unsigned int HMGJMCOJIGK_TypeDefinitionIndex = 10935;

struct alignas(8) HMGJMCOJIGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMGJMCOJIGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HMGJMCOJIGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMGJMCOJIGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FOELDAFLODP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOELDAFLODP&))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HMGJMCOJIGK ACJACLBEBNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMGJMCOJIGK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_ACJACLBEBNA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FOELDAFLODP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOELDAFLODP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HMGJMCOJIGK ACJACLBEBNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMGJMCOJIGK EIFONLCJOPG)
	{
		return ((::HMGJMCOJIGK(*)(::FlatBuffers::ByteBuffer*, ::HMGJMCOJIGK))((::PBYTE)hIl2Cpp + HMGJMCOJIGK_ACJACLBEBNA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
