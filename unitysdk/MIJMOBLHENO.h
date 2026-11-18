#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FPADJHILKNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIJMOBLHENO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MIJMOBLHENO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AE7E0)
#define MIJMOBLHENO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIJMOBLHENO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MIJMOBLHENO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AE7D0)
#define MIJMOBLHENO_POLHMELHCBO_1_OFFSET UNITYSDK_OFFSET(0x1D0B5E90)
#define MIJMOBLHENO_POLHMELHCBO_OFFSET UNITYSDK_OFFSET(0x1D0B5D90)
#define MIJMOBLHENO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AE820)
#define MIJMOBLHENO___INIT_OFFSET UNITYSDK_OFFSET(0x8AE7B0)

inline static constexpr unsigned int MIJMOBLHENO_TypeDefinitionIndex = 11991;

struct alignas(8) MIJMOBLHENO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJMOBLHENO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIJMOBLHENO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FPADJHILKNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPADJHILKNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + MIJMOBLHENO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FPADJHILKNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPADJHILKNF&))((::PBYTE)hIl2Cpp + MIJMOBLHENO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MIJMOBLHENO POLHMELHCBO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIJMOBLHENO EIFONLCJOPG)
	{
		return ((::MIJMOBLHENO(*)(::FlatBuffers::ByteBuffer*, ::MIJMOBLHENO))((::PBYTE)hIl2Cpp + MIJMOBLHENO_POLHMELHCBO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJMOBLHENO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MIJMOBLHENO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIJMOBLHENO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIJMOBLHENO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MIJMOBLHENO POLHMELHCBO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIJMOBLHENO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIJMOBLHENO_POLHMELHCBO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJMOBLHENO_PPOMNIFACOL_OFFSET))(this);
	}
};
