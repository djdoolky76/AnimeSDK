#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LMLOKCHEOCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOJMDENAJGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BOJMDENAJGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8168F0)
#define BOJMDENAJGM_BLGICPOLKAO_1_OFFSET UNITYSDK_OFFSET(0x1B994E00)
#define BOJMDENAJGM_BLGICPOLKAO_OFFSET UNITYSDK_OFFSET(0x1B994D90)
#define BOJMDENAJGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOJMDENAJGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOJMDENAJGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8168E0)
#define BOJMDENAJGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8168D0)
#define BOJMDENAJGM___INIT_OFFSET UNITYSDK_OFFSET(0x8168B0)

inline static constexpr unsigned int BOJMDENAJGM_TypeDefinitionIndex = 12914;

struct alignas(8) BOJMDENAJGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMDENAJGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJMDENAJGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMDENAJGM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMDENAJGM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LMLOKCHEOCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMLOKCHEOCN&))((::PBYTE)hIl2Cpp + BOJMDENAJGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LMLOKCHEOCN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMLOKCHEOCN&, ::System::Int32&))((::PBYTE)hIl2Cpp + BOJMDENAJGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BOJMDENAJGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOJMDENAJGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJMDENAJGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOJMDENAJGM BLGICPOLKAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOJMDENAJGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJMDENAJGM_BLGICPOLKAO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOJMDENAJGM BLGICPOLKAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOJMDENAJGM EIFONLCJOPG)
	{
		return ((::BOJMDENAJGM(*)(::FlatBuffers::ByteBuffer*, ::BOJMDENAJGM))((::PBYTE)hIl2Cpp + BOJMDENAJGM_BLGICPOLKAO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
