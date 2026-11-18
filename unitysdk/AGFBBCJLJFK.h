#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OGKBNNNOOMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGFBBCJLJFK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGFBBCJLJFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9A70)
#define AGFBBCJLJFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGFBBCJLJFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGFBBCJLJFK_KIPHHONFIEP_1_OFFSET UNITYSDK_OFFSET(0x19ABA820)
#define AGFBBCJLJFK_KIPHHONFIEP_OFFSET UNITYSDK_OFFSET(0x19ABA7B0)
#define AGFBBCJLJFK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9AB0)
#define AGFBBCJLJFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9A60)
#define AGFBBCJLJFK___INIT_OFFSET UNITYSDK_OFFSET(0x7E9A40)

inline static constexpr unsigned int AGFBBCJLJFK_TypeDefinitionIndex = 11962;

struct alignas(8) AGFBBCJLJFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGFBBCJLJFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AGFBBCJLJFK KIPHHONFIEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGFBBCJLJFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_KIPHHONFIEP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AGFBBCJLJFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGFBBCJLJFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGFBBCJLJFK KIPHHONFIEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGFBBCJLJFK EIFONLCJOPG)
	{
		return ((::AGFBBCJLJFK(*)(::FlatBuffers::ByteBuffer*, ::AGFBBCJLJFK))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_KIPHHONFIEP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OGKBNNNOOMA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGKBNNNOOMA&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OGKBNNNOOMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGKBNNNOOMA&))((::PBYTE)hIl2Cpp + AGFBBCJLJFK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
