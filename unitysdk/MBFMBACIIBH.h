#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFAGNHKPCGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBFMBACIIBH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBFMBACIIBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7900)
#define MBFMBACIIBH_CHJPBJGIMKD_1_OFFSET UNITYSDK_OFFSET(0x18E02F80)
#define MBFMBACIIBH_CHJPBJGIMKD_OFFSET UNITYSDK_OFFSET(0x18E02F10)
#define MBFMBACIIBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBFMBACIIBH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBFMBACIIBH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7940)
#define MBFMBACIIBH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D78F0)
#define MBFMBACIIBH___INIT_OFFSET UNITYSDK_OFFSET(0x7D78D0)

inline static constexpr unsigned int MBFMBACIIBH_TypeDefinitionIndex = 9222;

struct alignas(8) MBFMBACIIBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFMBACIIBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBFMBACIIBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFMBACIIBH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFMBACIIBH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFAGNHKPCGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFAGNHKPCGN&))((::PBYTE)hIl2Cpp + MBFMBACIIBH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MBFMBACIIBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBFMBACIIBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBFMBACIIBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFAGNHKPCGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFAGNHKPCGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBFMBACIIBH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MBFMBACIIBH CHJPBJGIMKD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBFMBACIIBH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBFMBACIIBH_CHJPBJGIMKD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MBFMBACIIBH CHJPBJGIMKD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBFMBACIIBH EIFONLCJOPG)
	{
		return ((::MBFMBACIIBH(*)(::FlatBuffers::ByteBuffer*, ::MBFMBACIIBH))((::PBYTE)hIl2Cpp + MBFMBACIIBH_CHJPBJGIMKD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
