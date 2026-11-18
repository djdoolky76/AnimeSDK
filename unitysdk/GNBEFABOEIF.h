#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPJBFHLMEAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNBEFABOEIF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNBEFABOEIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B220)
#define GNBEFABOEIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNBEFABOEIF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNBEFABOEIF_KCOOMCIFBIJ_1_OFFSET UNITYSDK_OFFSET(0x16650CB0)
#define GNBEFABOEIF_KCOOMCIFBIJ_OFFSET UNITYSDK_OFFSET(0x16650C40)
#define GNBEFABOEIF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B270)
#define GNBEFABOEIF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B260)
#define GNBEFABOEIF___INIT_OFFSET UNITYSDK_OFFSET(0x78B200)

inline static constexpr unsigned int GNBEFABOEIF_TypeDefinitionIndex = 9301;

struct alignas(8) GNBEFABOEIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBEFABOEIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBEFABOEIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GNBEFABOEIF KCOOMCIFBIJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBEFABOEIF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBEFABOEIF_KCOOMCIFBIJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GNBEFABOEIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBEFABOEIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBEFABOEIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBEFABOEIF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CPJBFHLMEAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPJBFHLMEAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNBEFABOEIF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GNBEFABOEIF KCOOMCIFBIJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNBEFABOEIF EIFONLCJOPG)
	{
		return ((::GNBEFABOEIF(*)(::FlatBuffers::ByteBuffer*, ::GNBEFABOEIF))((::PBYTE)hIl2Cpp + GNBEFABOEIF_KCOOMCIFBIJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBEFABOEIF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPJBFHLMEAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPJBFHLMEAE&))((::PBYTE)hIl2Cpp + GNBEFABOEIF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
