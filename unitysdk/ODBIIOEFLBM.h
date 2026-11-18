#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFLAEOJMMAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODBIIOEFLBM_BBLLCKCCOCN_1_OFFSET UNITYSDK_OFFSET(0x1BAB1BF0)
#define ODBIIOEFLBM_BBLLCKCCOCN_OFFSET UNITYSDK_OFFSET(0x1BAB1A50)
#define ODBIIOEFLBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODBIIOEFLBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81AA70)
#define ODBIIOEFLBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODBIIOEFLBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODBIIOEFLBM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81AA60)
#define ODBIIOEFLBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AA50)
#define ODBIIOEFLBM___INIT_OFFSET UNITYSDK_OFFSET(0x81AA30)

inline static constexpr unsigned int ODBIIOEFLBM_TypeDefinitionIndex = 14217;

struct alignas(8) ODBIIOEFLBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBIIOEFLBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ODBIIOEFLBM BBLLCKCCOCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODBIIOEFLBM EIFONLCJOPG)
	{
		return ((::ODBIIOEFLBM(*)(::FlatBuffers::ByteBuffer*, ::ODBIIOEFLBM))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_BBLLCKCCOCN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFLAEOJMMAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFLAEOJMMAK&))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ODBIIOEFLBM BBLLCKCCOCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODBIIOEFLBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_BBLLCKCCOCN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DFLAEOJMMAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFLAEOJMMAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ODBIIOEFLBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODBIIOEFLBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODBIIOEFLBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
