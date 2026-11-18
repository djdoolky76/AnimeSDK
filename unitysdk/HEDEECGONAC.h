#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FIJMCNOFOLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEDEECGONAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HEDEECGONAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5500)
#define HEDEECGONAC_CMAEHEDPHEA_1_OFFSET UNITYSDK_OFFSET(0x17BF9610)
#define HEDEECGONAC_CMAEHEDPHEA_OFFSET UNITYSDK_OFFSET(0x17BF9310)
#define HEDEECGONAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEDEECGONAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEDEECGONAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B5540)
#define HEDEECGONAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5550)
#define HEDEECGONAC___INIT_OFFSET UNITYSDK_OFFSET(0x7B54E0)

inline static constexpr unsigned int HEDEECGONAC_TypeDefinitionIndex = 16355;

struct alignas(8) HEDEECGONAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEECGONAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEDEECGONAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HEDEECGONAC CMAEHEDPHEA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEDEECGONAC EIFONLCJOPG)
	{
		return ((::HEDEECGONAC(*)(::FlatBuffers::ByteBuffer*, ::HEDEECGONAC))((::PBYTE)hIl2Cpp + HEDEECGONAC_CMAEHEDPHEA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HEDEECGONAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEDEECGONAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEDEECGONAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEECGONAC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FIJMCNOFOLL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIJMCNOFOLL&, ::System::Int32&))((::PBYTE)hIl2Cpp + HEDEECGONAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FIJMCNOFOLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIJMCNOFOLL&))((::PBYTE)hIl2Cpp + HEDEECGONAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEECGONAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HEDEECGONAC CMAEHEDPHEA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEDEECGONAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEDEECGONAC_CMAEHEDPHEA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
