#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJMJOAGPONA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMDFIIHALEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JMDFIIHALEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF9D0)
#define JMDFIIHALEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMDFIIHALEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JMDFIIHALEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF9B0)
#define JMDFIIHALEG_LOFCNNGNCDN_1_OFFSET UNITYSDK_OFFSET(0x19361290)
#define JMDFIIHALEG_LOFCNNGNCDN_OFFSET UNITYSDK_OFFSET(0x19361090)
#define JMDFIIHALEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF9C0)
#define JMDFIIHALEG___INIT_OFFSET UNITYSDK_OFFSET(0x7DF990)

inline static constexpr unsigned int JMDFIIHALEG_TypeDefinitionIndex = 9580;

struct alignas(8) JMDFIIHALEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDFIIHALEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMDFIIHALEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJMJOAGPONA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJMJOAGPONA&))((::PBYTE)hIl2Cpp + JMDFIIHALEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JMDFIIHALEG LOFCNNGNCDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JMDFIIHALEG EIFONLCJOPG)
	{
		return ((::JMDFIIHALEG(*)(::FlatBuffers::ByteBuffer*, ::JMDFIIHALEG))((::PBYTE)hIl2Cpp + JMDFIIHALEG_LOFCNNGNCDN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJMJOAGPONA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJMJOAGPONA&, ::System::Int32&))((::PBYTE)hIl2Cpp + JMDFIIHALEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JMDFIIHALEG LOFCNNGNCDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMDFIIHALEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMDFIIHALEG_LOFCNNGNCDN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDFIIHALEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JMDFIIHALEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMDFIIHALEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMDFIIHALEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDFIIHALEG_GHKKNCCLPAN_OFFSET))(this);
	}
};
