#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHPLOEIIKIP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNOGAGBMLEO_AAIKOKCEHAL_1_OFFSET UNITYSDK_OFFSET(0x1A5F33D0)
#define JNOGAGBMLEO_AAIKOKCEHAL_OFFSET UNITYSDK_OFFSET(0x1A5F3370)
#define JNOGAGBMLEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JNOGAGBMLEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDAC0)
#define JNOGAGBMLEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNOGAGBMLEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JNOGAGBMLEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FDAB0)
#define JNOGAGBMLEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDB00)
#define JNOGAGBMLEO___INIT_OFFSET UNITYSDK_OFFSET(0x7FDA90)

inline static constexpr unsigned int JNOGAGBMLEO_TypeDefinitionIndex = 10084;

struct alignas(8) JNOGAGBMLEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOGAGBMLEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHPLOEIIKIP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHPLOEIIKIP&, ::System::Int32&))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JNOGAGBMLEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNOGAGBMLEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JNOGAGBMLEO AAIKOKCEHAL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JNOGAGBMLEO EIFONLCJOPG)
	{
		return ((::JNOGAGBMLEO(*)(::FlatBuffers::ByteBuffer*, ::JNOGAGBMLEO))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_AAIKOKCEHAL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JNOGAGBMLEO AAIKOKCEHAL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNOGAGBMLEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_AAIKOKCEHAL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHPLOEIIKIP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHPLOEIIKIP&))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOGAGBMLEO_GHKKNCCLPAN_OFFSET))(this);
	}
};
