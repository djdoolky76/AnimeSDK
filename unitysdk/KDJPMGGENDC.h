#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IALMGMNPGFG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDJPMGGENDC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDJPMGGENDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EB90)
#define KDJPMGGENDC_FAAKHEAPMKK_1_OFFSET UNITYSDK_OFFSET(0x1B4FFFC0)
#define KDJPMGGENDC_FAAKHEAPMKK_OFFSET UNITYSDK_OFFSET(0x1B4FFF50)
#define KDJPMGGENDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDJPMGGENDC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDJPMGGENDC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80EBD0)
#define KDJPMGGENDC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EB80)
#define KDJPMGGENDC___INIT_OFFSET UNITYSDK_OFFSET(0x80EB60)

inline static constexpr unsigned int KDJPMGGENDC_TypeDefinitionIndex = 16698;

struct alignas(8) KDJPMGGENDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPMGGENDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPMGGENDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KDJPMGGENDC FAAKHEAPMKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJPMGGENDC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPMGGENDC_FAAKHEAPMKK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPMGGENDC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KDJPMGGENDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJPMGGENDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJPMGGENDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IALMGMNPGFG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IALMGMNPGFG&))((::PBYTE)hIl2Cpp + KDJPMGGENDC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPMGGENDC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KDJPMGGENDC FAAKHEAPMKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDJPMGGENDC EIFONLCJOPG)
	{
		return ((::KDJPMGGENDC(*)(::FlatBuffers::ByteBuffer*, ::KDJPMGGENDC))((::PBYTE)hIl2Cpp + KDJPMGGENDC_FAAKHEAPMKK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IALMGMNPGFG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IALMGMNPGFG&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDJPMGGENDC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
