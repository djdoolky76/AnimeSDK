#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKELPJHKFHD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFGCAEEJJHI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LFGCAEEJJHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801D40)
#define LFGCAEEJJHI_GDOFIJAMNFL_1_OFFSET UNITYSDK_OFFSET(0x1AAFA080)
#define LFGCAEEJJHI_GDOFIJAMNFL_OFFSET UNITYSDK_OFFSET(0x1AAFA010)
#define LFGCAEEJJHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFGCAEEJJHI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFGCAEEJJHI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801D30)
#define LFGCAEEJJHI___INIT_OFFSET UNITYSDK_OFFSET(0x801D10)

inline static constexpr unsigned int LFGCAEEJJHI_TypeDefinitionIndex = 14910;

struct alignas(8) LFGCAEEJJHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFGCAEEJJHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LFGCAEEJJHI GDOFIJAMNFL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFGCAEEJJHI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_GDOFIJAMNFL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LFGCAEEJJHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFGCAEEJJHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKELPJHKFHD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKELPJHKFHD&))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LFGCAEEJJHI GDOFIJAMNFL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFGCAEEJJHI EIFONLCJOPG)
	{
		return ((::LFGCAEEJJHI(*)(::FlatBuffers::ByteBuffer*, ::LFGCAEEJJHI))((::PBYTE)hIl2Cpp + LFGCAEEJJHI_GDOFIJAMNFL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
