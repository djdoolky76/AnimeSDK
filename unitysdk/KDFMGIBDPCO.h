#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMGADEJMCEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDFMGIBDPCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDFMGIBDPCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815420)
#define KDFMGIBDPCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDFMGIBDPCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDFMGIBDPCO_KGKFBBJNLPN_1_OFFSET UNITYSDK_OFFSET(0x1B8A1690)
#define KDFMGIBDPCO_KGKFBBJNLPN_OFFSET UNITYSDK_OFFSET(0x1B8A1620)
#define KDFMGIBDPCO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815410)
#define KDFMGIBDPCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815400)
#define KDFMGIBDPCO___INIT_OFFSET UNITYSDK_OFFSET(0x8153E0)

inline static constexpr unsigned int KDFMGIBDPCO_TypeDefinitionIndex = 10886;

struct alignas(8) KDFMGIBDPCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFMGIBDPCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMGADEJMCEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMGADEJMCEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KDFMGIBDPCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDFMGIBDPCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMGADEJMCEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMGADEJMCEJ&))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KDFMGIBDPCO KGKFBBJNLPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDFMGIBDPCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_KGKFBBJNLPN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDFMGIBDPCO KGKFBBJNLPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDFMGIBDPCO EIFONLCJOPG)
	{
		return ((::KDFMGIBDPCO(*)(::FlatBuffers::ByteBuffer*, ::KDFMGIBDPCO))((::PBYTE)hIl2Cpp + KDFMGIBDPCO_KGKFBBJNLPN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
