#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJDDAGLMMOH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJNFCJFBEHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJNFCJFBEHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B4E20)
#define GJNFCJFBEHF_DCGBEDKKAGN_1_OFFSET UNITYSDK_OFFSET(0x17BF0300)
#define GJNFCJFBEHF_DCGBEDKKAGN_OFFSET UNITYSDK_OFFSET(0x17BF0290)
#define GJNFCJFBEHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJNFCJFBEHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJNFCJFBEHF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B4E60)
#define GJNFCJFBEHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B4E10)
#define GJNFCJFBEHF___INIT_OFFSET UNITYSDK_OFFSET(0x7B4DF0)

inline static constexpr unsigned int GJNFCJFBEHF_TypeDefinitionIndex = 10693;

struct alignas(8) GJNFCJFBEHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJNFCJFBEHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GJNFCJFBEHF DCGBEDKKAGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJNFCJFBEHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_DCGBEDKKAGN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GJNFCJFBEHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJNFCJFBEHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJDDAGLMMOH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJDDAGLMMOH&))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJDDAGLMMOH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJDDAGLMMOH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GJNFCJFBEHF DCGBEDKKAGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJNFCJFBEHF EIFONLCJOPG)
	{
		return ((::GJNFCJFBEHF(*)(::FlatBuffers::ByteBuffer*, ::GJNFCJFBEHF))((::PBYTE)hIl2Cpp + GJNFCJFBEHF_DCGBEDKKAGN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
