#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CIDMDADIIDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMGLOJHFCGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMGLOJHFCGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DAC0)
#define LMGLOJHFCGJ_GDPADOKGBFH_1_OFFSET UNITYSDK_OFFSET(0x1BF58330)
#define LMGLOJHFCGJ_GDPADOKGBFH_OFFSET UNITYSDK_OFFSET(0x1BF582C0)
#define LMGLOJHFCGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMGLOJHFCGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMGLOJHFCGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DAA0)
#define LMGLOJHFCGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DAB0)
#define LMGLOJHFCGJ___INIT_OFFSET UNITYSDK_OFFSET(0x81DA80)

inline static constexpr unsigned int LMGLOJHFCGJ_TypeDefinitionIndex = 16640;

struct alignas(8) LMGLOJHFCGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CIDMDADIIDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIDMDADIIDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LMGLOJHFCGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMGLOJHFCGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CIDMDADIIDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIDMDADIIDJ&))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMGLOJHFCGJ GDPADOKGBFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMGLOJHFCGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_GDPADOKGBFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LMGLOJHFCGJ GDPADOKGBFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMGLOJHFCGJ EIFONLCJOPG)
	{
		return ((::LMGLOJHFCGJ(*)(::FlatBuffers::ByteBuffer*, ::LMGLOJHFCGJ))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_GDPADOKGBFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGLOJHFCGJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
