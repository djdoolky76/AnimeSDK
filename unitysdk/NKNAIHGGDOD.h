#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BIEBJJDLOGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKNAIHGGDOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NKNAIHGGDOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E68A0)
#define NKNAIHGGDOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKNAIHGGDOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NKNAIHGGDOD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E68E0)
#define NKNAIHGGDOD_MNPKLLAMFFB_1_OFFSET UNITYSDK_OFFSET(0x195BBBE0)
#define NKNAIHGGDOD_MNPKLLAMFFB_OFFSET UNITYSDK_OFFSET(0x195BBAA0)
#define NKNAIHGGDOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6890)
#define NKNAIHGGDOD___INIT_OFFSET UNITYSDK_OFFSET(0x7E6870)

inline static constexpr unsigned int NKNAIHGGDOD_TypeDefinitionIndex = 13144;

struct alignas(8) NKNAIHGGDOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNAIHGGDOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NKNAIHGGDOD MNPKLLAMFFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NKNAIHGGDOD EIFONLCJOPG)
	{
		return ((::NKNAIHGGDOD(*)(::FlatBuffers::ByteBuffer*, ::NKNAIHGGDOD))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_MNPKLLAMFFB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BIEBJJDLOGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIEBJJDLOGD&))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NKNAIHGGDOD MNPKLLAMFFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKNAIHGGDOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_MNPKLLAMFFB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NKNAIHGGDOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKNAIHGGDOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BIEBJJDLOGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIEBJJDLOGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + NKNAIHGGDOD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
