#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AIOKMMFNIAM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBBDHLEMBGH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBBDHLEMBGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806E30)
#define BBBDHLEMBGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBBDHLEMBGH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBBDHLEMBGH_KKGKAJAECBH_1_OFFSET UNITYSDK_OFFSET(0x1ADAE2F0)
#define BBBDHLEMBGH_KKGKAJAECBH_OFFSET UNITYSDK_OFFSET(0x1ADAE090)
#define BBBDHLEMBGH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806E70)
#define BBBDHLEMBGH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806E80)
#define BBBDHLEMBGH___INIT_OFFSET UNITYSDK_OFFSET(0x806E10)

inline static constexpr unsigned int BBBDHLEMBGH_TypeDefinitionIndex = 10347;

struct alignas(8) BBBDHLEMBGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBBDHLEMBGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BBBDHLEMBGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBBDHLEMBGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BBBDHLEMBGH KKGKAJAECBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBBDHLEMBGH EIFONLCJOPG)
	{
		return ((::BBBDHLEMBGH(*)(::FlatBuffers::ByteBuffer*, ::BBBDHLEMBGH))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_KKGKAJAECBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AIOKMMFNIAM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AIOKMMFNIAM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BBBDHLEMBGH KKGKAJAECBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBBDHLEMBGH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_KKGKAJAECBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AIOKMMFNIAM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AIOKMMFNIAM&))((::PBYTE)hIl2Cpp + BBBDHLEMBGH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
