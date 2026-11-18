#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMHKPGAOHCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOFAMLLOIGO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOFAMLLOIGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3C30)
#define LOFAMLLOIGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOFAMLLOIGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOFAMLLOIGO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3C80)
#define LOFAMLLOIGO_OOHDILLKMCD_1_OFFSET UNITYSDK_OFFSET(0x17FBD680)
#define LOFAMLLOIGO_OOHDILLKMCD_OFFSET UNITYSDK_OFFSET(0x17FBD5C0)
#define LOFAMLLOIGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3C70)
#define LOFAMLLOIGO___INIT_OFFSET UNITYSDK_OFFSET(0x7C3C10)

inline static constexpr unsigned int LOFAMLLOIGO_TypeDefinitionIndex = 17086;

struct alignas(8) LOFAMLLOIGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFAMLLOIGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LOFAMLLOIGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOFAMLLOIGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LOFAMLLOIGO OOHDILLKMCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOFAMLLOIGO EIFONLCJOPG)
	{
		return ((::LOFAMLLOIGO(*)(::FlatBuffers::ByteBuffer*, ::LOFAMLLOIGO))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_OOHDILLKMCD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LOFAMLLOIGO OOHDILLKMCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOFAMLLOIGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_OOHDILLKMCD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMHKPGAOHCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMHKPGAOHCB&))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMHKPGAOHCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMHKPGAOHCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFAMLLOIGO_GHKKNCCLPAN_OFFSET))(this);
	}
};
