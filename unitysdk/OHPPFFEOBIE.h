#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMMJHLCGEDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHPPFFEOBIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHPPFFEOBIE_BGBAIIMOBKM_1_OFFSET UNITYSDK_OFFSET(0x19135FB0)
#define OHPPFFEOBIE_BGBAIIMOBKM_OFFSET UNITYSDK_OFFSET(0x19135EB0)
#define OHPPFFEOBIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA920)
#define OHPPFFEOBIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHPPFFEOBIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHPPFFEOBIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA960)
#define OHPPFFEOBIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA910)
#define OHPPFFEOBIE___INIT_OFFSET UNITYSDK_OFFSET(0x7DA8F0)

inline static constexpr unsigned int OHPPFFEOBIE_TypeDefinitionIndex = 13502;

struct alignas(8) OHPPFFEOBIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPPFFEOBIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OHPPFFEOBIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHPPFFEOBIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OHPPFFEOBIE BGBAIIMOBKM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHPPFFEOBIE EIFONLCJOPG)
	{
		return ((::OHPPFFEOBIE(*)(::FlatBuffers::ByteBuffer*, ::OHPPFFEOBIE))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_BGBAIIMOBKM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMMJHLCGEDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMMJHLCGEDL&))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OHPPFFEOBIE BGBAIIMOBKM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHPPFFEOBIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_BGBAIIMOBKM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMMJHLCGEDL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMMJHLCGEDL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OHPPFFEOBIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
