#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPAINBAPDBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOOOKHDGBLE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOOOKHDGBLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5A70)
#define DOOOKHDGBLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOOOKHDGBLE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOOOKHDGBLE_IAEHEOHDIAB_1_OFFSET UNITYSDK_OFFSET(0x1A1934C0)
#define DOOOKHDGBLE_IAEHEOHDIAB_OFFSET UNITYSDK_OFFSET(0x1A193450)
#define DOOOKHDGBLE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5A50)
#define DOOOKHDGBLE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5A60)
#define DOOOKHDGBLE___INIT_OFFSET UNITYSDK_OFFSET(0x7F5A30)

inline static constexpr unsigned int DOOOKHDGBLE_TypeDefinitionIndex = 9787;

struct alignas(8) DOOOKHDGBLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOOKHDGBLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPAINBAPDBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPAINBAPDBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPAINBAPDBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPAINBAPDBL&))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DOOOKHDGBLE IAEHEOHDIAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOOKHDGBLE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_IAEHEOHDIAB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DOOOKHDGBLE IAEHEOHDIAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOOOKHDGBLE EIFONLCJOPG)
	{
		return ((::DOOOKHDGBLE(*)(::FlatBuffers::ByteBuffer*, ::DOOOKHDGBLE))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_IAEHEOHDIAB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DOOOKHDGBLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOOKHDGBLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOKHDGBLE_GHKKNCCLPAN_OFFSET))(this);
	}
};
