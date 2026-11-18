#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AGLJABEFDFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBEHJIJMPIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBEHJIJMPIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756C30)
#define HBEHJIJMPIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBEHJIJMPIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBEHJIJMPIP_IFKDLLHLNCB_1_OFFSET UNITYSDK_OFFSET(0x152D59B0)
#define HBEHJIJMPIP_IFKDLLHLNCB_OFFSET UNITYSDK_OFFSET(0x152D5950)
#define HBEHJIJMPIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756C20)
#define HBEHJIJMPIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756C70)
#define HBEHJIJMPIP___INIT_OFFSET UNITYSDK_OFFSET(0x756C00)

inline static constexpr unsigned int HBEHJIJMPIP_TypeDefinitionIndex = 17436;

struct alignas(8) HBEHJIJMPIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBEHJIJMPIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AGLJABEFDFK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGLJABEFDFK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HBEHJIJMPIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBEHJIJMPIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AGLJABEFDFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGLJABEFDFK&))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HBEHJIJMPIP IFKDLLHLNCB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBEHJIJMPIP EIFONLCJOPG)
	{
		return ((::HBEHJIJMPIP(*)(::FlatBuffers::ByteBuffer*, ::HBEHJIJMPIP))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_IFKDLLHLNCB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HBEHJIJMPIP IFKDLLHLNCB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBEHJIJMPIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBEHJIJMPIP_IFKDLLHLNCB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
