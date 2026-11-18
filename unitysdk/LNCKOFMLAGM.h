#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JNNMFODGJBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNCKOFMLAGM_APKHCOIPCKG_1_OFFSET UNITYSDK_OFFSET(0x1AD66490)
#define LNCKOFMLAGM_APKHCOIPCKG_OFFSET UNITYSDK_OFFSET(0x1AD66430)
#define LNCKOFMLAGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNCKOFMLAGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804C90)
#define LNCKOFMLAGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNCKOFMLAGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNCKOFMLAGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x804C70)
#define LNCKOFMLAGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804C80)
#define LNCKOFMLAGM___INIT_OFFSET UNITYSDK_OFFSET(0x804C50)

inline static constexpr unsigned int LNCKOFMLAGM_TypeDefinitionIndex = 10523;

struct alignas(8) LNCKOFMLAGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNCKOFMLAGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JNNMFODGJBO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNNMFODGJBO&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LNCKOFMLAGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNCKOFMLAGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LNCKOFMLAGM APKHCOIPCKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNCKOFMLAGM EIFONLCJOPG)
	{
		return ((::LNCKOFMLAGM(*)(::FlatBuffers::ByteBuffer*, ::LNCKOFMLAGM))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_APKHCOIPCKG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LNCKOFMLAGM APKHCOIPCKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNCKOFMLAGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_APKHCOIPCKG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JNNMFODGJBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNNMFODGJBO&))((::PBYTE)hIl2Cpp + LNCKOFMLAGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
