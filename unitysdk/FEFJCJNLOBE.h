#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GOHPFOJMBGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEFJCJNLOBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FEFJCJNLOBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808210)
#define FEFJCJNLOBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEFJCJNLOBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEFJCJNLOBE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x808260)
#define FEFJCJNLOBE_MMHCIKNOAFG_1_OFFSET UNITYSDK_OFFSET(0x1ADE04C0)
#define FEFJCJNLOBE_MMHCIKNOAFG_OFFSET UNITYSDK_OFFSET(0x1ADE0260)
#define FEFJCJNLOBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x808250)
#define FEFJCJNLOBE___INIT_OFFSET UNITYSDK_OFFSET(0x8081F0)

inline static constexpr unsigned int FEFJCJNLOBE_TypeDefinitionIndex = 9929;

struct alignas(8) FEFJCJNLOBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFJCJNLOBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FEFJCJNLOBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEFJCJNLOBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FEFJCJNLOBE MMHCIKNOAFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FEFJCJNLOBE EIFONLCJOPG)
	{
		return ((::FEFJCJNLOBE(*)(::FlatBuffers::ByteBuffer*, ::FEFJCJNLOBE))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_MMHCIKNOAFG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GOHPFOJMBGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GOHPFOJMBGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GOHPFOJMBGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GOHPFOJMBGM&))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FEFJCJNLOBE MMHCIKNOAFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEFJCJNLOBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFJCJNLOBE_MMHCIKNOAFG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
