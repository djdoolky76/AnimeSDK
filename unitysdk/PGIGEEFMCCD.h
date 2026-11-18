#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JFPDLNNAOOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGIGEEFMCCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGIGEEFMCCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FC70)
#define PGIGEEFMCCD_EMOBDGOBFAN_1_OFFSET UNITYSDK_OFFSET(0x1C0AD8B0)
#define PGIGEEFMCCD_EMOBDGOBFAN_OFFSET UNITYSDK_OFFSET(0x1C0AD5B0)
#define PGIGEEFMCCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGIGEEFMCCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGIGEEFMCCD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FC60)
#define PGIGEEFMCCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FCB0)
#define PGIGEEFMCCD___INIT_OFFSET UNITYSDK_OFFSET(0x81FC40)

inline static constexpr unsigned int PGIGEEFMCCD_TypeDefinitionIndex = 12709;

struct alignas(8) PGIGEEFMCCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGIGEEFMCCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PGIGEEFMCCD EMOBDGOBFAN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGIGEEFMCCD EIFONLCJOPG)
	{
		return ((::PGIGEEFMCCD(*)(::FlatBuffers::ByteBuffer*, ::PGIGEEFMCCD))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_EMOBDGOBFAN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JFPDLNNAOOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFPDLNNAOOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PGIGEEFMCCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGIGEEFMCCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PGIGEEFMCCD EMOBDGOBFAN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGIGEEFMCCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_EMOBDGOBFAN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JFPDLNNAOOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFPDLNNAOOD&))((::PBYTE)hIl2Cpp + PGIGEEFMCCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
