#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AMKFHGBPMFL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMHFFFJCMAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMHFFFJCMAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x963600)
#define PMHFFFJCMAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMHFFFJCMAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMHFFFJCMAN_JFLGPAPLEJO_1_OFFSET UNITYSDK_OFFSET(0x1F291F10)
#define PMHFFFJCMAN_JFLGPAPLEJO_OFFSET UNITYSDK_OFFSET(0x1F291EA0)
#define PMHFFFJCMAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x963650)
#define PMHFFFJCMAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x963640)
#define PMHFFFJCMAN___INIT_OFFSET UNITYSDK_OFFSET(0x9635E0)

inline static constexpr unsigned int PMHFFFJCMAN_TypeDefinitionIndex = 12085;

struct alignas(8) PMHFFFJCMAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHFFFJCMAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PMHFFFJCMAN JFLGPAPLEJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHFFFJCMAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_JFLGPAPLEJO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PMHFFFJCMAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHFFFJCMAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PMHFFFJCMAN JFLGPAPLEJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMHFFFJCMAN EIFONLCJOPG)
	{
		return ((::PMHFFFJCMAN(*)(::FlatBuffers::ByteBuffer*, ::PMHFFFJCMAN))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_JFLGPAPLEJO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AMKFHGBPMFL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMKFHGBPMFL&))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AMKFHGBPMFL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMKFHGBPMFL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PMHFFFJCMAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
