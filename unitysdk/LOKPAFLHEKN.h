#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEJGCFBBJDI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOKPAFLHEKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOKPAFLHEKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804F90)
#define LOKPAFLHEKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOKPAFLHEKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOKPAFLHEKN_KNPNAOHPPJI_1_OFFSET UNITYSDK_OFFSET(0x1AD69610)
#define LOKPAFLHEKN_KNPNAOHPPJI_OFFSET UNITYSDK_OFFSET(0x1AD695A0)
#define LOKPAFLHEKN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x804F80)
#define LOKPAFLHEKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804F70)
#define LOKPAFLHEKN___INIT_OFFSET UNITYSDK_OFFSET(0x804F50)

inline static constexpr unsigned int LOKPAFLHEKN_TypeDefinitionIndex = 14056;

struct alignas(8) LOKPAFLHEKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOKPAFLHEKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LOKPAFLHEKN KNPNAOHPPJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOKPAFLHEKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_KNPNAOHPPJI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LOKPAFLHEKN KNPNAOHPPJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOKPAFLHEKN EIFONLCJOPG)
	{
		return ((::LOKPAFLHEKN(*)(::FlatBuffers::ByteBuffer*, ::LOKPAFLHEKN))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_KNPNAOHPPJI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JEJGCFBBJDI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEJGCFBBJDI&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LOKPAFLHEKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOKPAFLHEKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEJGCFBBJDI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEJGCFBBJDI&))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPAFLHEKN_GHKKNCCLPAN_OFFSET))(this);
	}
};
