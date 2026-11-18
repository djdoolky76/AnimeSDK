#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LENENBDEDLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPMMBDFNKOG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPMMBDFNKOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA500)
#define DPMMBDFNKOG_GDBAFEBDILK_1_OFFSET UNITYSDK_OFFSET(0x1A55A9C0)
#define DPMMBDFNKOG_GDBAFEBDILK_OFFSET UNITYSDK_OFFSET(0x1A55A7C0)
#define DPMMBDFNKOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPMMBDFNKOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPMMBDFNKOG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA4F0)
#define DPMMBDFNKOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA4E0)
#define DPMMBDFNKOG___INIT_OFFSET UNITYSDK_OFFSET(0x7FA4C0)

inline static constexpr unsigned int DPMMBDFNKOG_TypeDefinitionIndex = 12891;

struct alignas(8) DPMMBDFNKOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMMBDFNKOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LENENBDEDLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LENENBDEDLJ&))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DPMMBDFNKOG GDBAFEBDILK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPMMBDFNKOG EIFONLCJOPG)
	{
		return ((::DPMMBDFNKOG(*)(::FlatBuffers::ByteBuffer*, ::DPMMBDFNKOG))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_GDBAFEBDILK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LENENBDEDLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LENENBDEDLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DPMMBDFNKOG GDBAFEBDILK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPMMBDFNKOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_GDBAFEBDILK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DPMMBDFNKOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPMMBDFNKOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPMMBDFNKOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
