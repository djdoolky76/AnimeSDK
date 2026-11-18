#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BLNIMFGHENH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLGOENOHDOH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLGOENOHDOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A61A0)
#define NLGOENOHDOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLGOENOHDOH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLGOENOHDOH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A61F0)
#define NLGOENOHDOH_MFMPKADKMJL_1_OFFSET UNITYSDK_OFFSET(0x17355370)
#define NLGOENOHDOH_MFMPKADKMJL_OFFSET UNITYSDK_OFFSET(0x17355300)
#define NLGOENOHDOH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A61E0)
#define NLGOENOHDOH___INIT_OFFSET UNITYSDK_OFFSET(0x7A6180)

inline static constexpr unsigned int NLGOENOHDOH_TypeDefinitionIndex = 9958;

struct alignas(8) NLGOENOHDOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGOENOHDOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGOENOHDOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NLGOENOHDOH MFMPKADKMJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLGOENOHDOH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGOENOHDOH_MFMPKADKMJL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BLNIMFGHENH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLNIMFGHENH&))((::PBYTE)hIl2Cpp + NLGOENOHDOH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGOENOHDOH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NLGOENOHDOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLGOENOHDOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGOENOHDOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGOENOHDOH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BLNIMFGHENH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLNIMFGHENH&, ::System::Int32&))((::PBYTE)hIl2Cpp + NLGOENOHDOH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NLGOENOHDOH MFMPKADKMJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLGOENOHDOH EIFONLCJOPG)
	{
		return ((::NLGOENOHDOH(*)(::FlatBuffers::ByteBuffer*, ::NLGOENOHDOH))((::PBYTE)hIl2Cpp + NLGOENOHDOH_MFMPKADKMJL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
