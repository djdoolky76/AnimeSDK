#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BPGAMKIIHNE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLCAFLHHMPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLCAFLHHMPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6950)
#define NLCAFLHHMPP_FBDLPCBFLLA_1_OFFSET UNITYSDK_OFFSET(0x195BC4E0)
#define NLCAFLHHMPP_FBDLPCBFLLA_OFFSET UNITYSDK_OFFSET(0x195BC3E0)
#define NLCAFLHHMPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLCAFLHHMPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLCAFLHHMPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6930)
#define NLCAFLHHMPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6940)
#define NLCAFLHHMPP___INIT_OFFSET UNITYSDK_OFFSET(0x7E6910)

inline static constexpr unsigned int NLCAFLHHMPP_TypeDefinitionIndex = 14983;

struct alignas(8) NLCAFLHHMPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLCAFLHHMPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BPGAMKIIHNE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BPGAMKIIHNE&, ::System::Int32&))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BPGAMKIIHNE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BPGAMKIIHNE&))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NLCAFLHHMPP FBDLPCBFLLA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLCAFLHHMPP EIFONLCJOPG)
	{
		return ((::NLCAFLHHMPP(*)(::FlatBuffers::ByteBuffer*, ::NLCAFLHHMPP))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_FBDLPCBFLLA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NLCAFLHHMPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLCAFLHHMPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NLCAFLHHMPP FBDLPCBFLLA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLCAFLHHMPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLCAFLHHMPP_FBDLPCBFLLA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
