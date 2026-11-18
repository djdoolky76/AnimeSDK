#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPJEJNCKJEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMAGKAKKKFJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMAGKAKKKFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE070)
#define FMAGKAKKKFJ_CFBEFCOKHKJ_1_OFFSET UNITYSDK_OFFSET(0x19322840)
#define FMAGKAKKKFJ_CFBEFCOKHKJ_OFFSET UNITYSDK_OFFSET(0x193227A0)
#define FMAGKAKKKFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMAGKAKKKFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMAGKAKKKFJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DE060)
#define FMAGKAKKKFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE0B0)
#define FMAGKAKKKFJ___INIT_OFFSET UNITYSDK_OFFSET(0x7DE040)

inline static constexpr unsigned int FMAGKAKKKFJ_TypeDefinitionIndex = 10620;

struct alignas(8) FMAGKAKKKFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMAGKAKKKFJ CFBEFCOKHKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMAGKAKKKFJ EIFONLCJOPG)
	{
		return ((::FMAGKAKKKFJ(*)(::FlatBuffers::ByteBuffer*, ::FMAGKAKKKFJ))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_CFBEFCOKHKJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FMAGKAKKKFJ CFBEFCOKHKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMAGKAKKKFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_CFBEFCOKHKJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPJEJNCKJEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPJEJNCKJEI&))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KPJEJNCKJEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPJEJNCKJEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FMAGKAKKKFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMAGKAKKKFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAGKAKKKFJ_PPOMNIFACOL_OFFSET))(this);
	}
};
