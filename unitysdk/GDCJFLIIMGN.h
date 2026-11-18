#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFLAIIAJLMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDCJFLIIMGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDCJFLIIMGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809B90)
#define GDCJFLIIMGN_ENAFACEKPJJ_1_OFFSET UNITYSDK_OFFSET(0x1B10F4A0)
#define GDCJFLIIMGN_ENAFACEKPJJ_OFFSET UNITYSDK_OFFSET(0x1B10F430)
#define GDCJFLIIMGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDCJFLIIMGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDCJFLIIMGN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809B80)
#define GDCJFLIIMGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809BD0)
#define GDCJFLIIMGN___INIT_OFFSET UNITYSDK_OFFSET(0x809B60)

inline static constexpr unsigned int GDCJFLIIMGN_TypeDefinitionIndex = 13064;

struct alignas(8) GDCJFLIIMGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCJFLIIMGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDCJFLIIMGN ENAFACEKPJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCJFLIIMGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_ENAFACEKPJJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFLAIIAJLMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFLAIIAJLMI&))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GDCJFLIIMGN ENAFACEKPJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDCJFLIIMGN EIFONLCJOPG)
	{
		return ((::GDCJFLIIMGN(*)(::FlatBuffers::ByteBuffer*, ::GDCJFLIIMGN))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_ENAFACEKPJJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EFLAIIAJLMI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFLAIIAJLMI&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GDCJFLIIMGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCJFLIIMGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJFLIIMGN_PPOMNIFACOL_OFFSET))(this);
	}
};
