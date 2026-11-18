#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CELPPGBOAOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPOAGDFAJEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPOAGDFAJEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6510)
#define NPOAGDFAJEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPOAGDFAJEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPOAGDFAJEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6550)
#define NPOAGDFAJEI_NINHEPLJKAG_1_OFFSET UNITYSDK_OFFSET(0x1735DB20)
#define NPOAGDFAJEI_NINHEPLJKAG_OFFSET UNITYSDK_OFFSET(0x1735DAC0)
#define NPOAGDFAJEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6500)
#define NPOAGDFAJEI___INIT_OFFSET UNITYSDK_OFFSET(0x7A64E0)

inline static constexpr unsigned int NPOAGDFAJEI_TypeDefinitionIndex = 15479;

struct alignas(8) NPOAGDFAJEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPOAGDFAJEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NPOAGDFAJEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPOAGDFAJEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPOAGDFAJEI NINHEPLJKAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPOAGDFAJEI EIFONLCJOPG)
	{
		return ((::NPOAGDFAJEI(*)(::FlatBuffers::ByteBuffer*, ::NPOAGDFAJEI))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_NINHEPLJKAG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NPOAGDFAJEI NINHEPLJKAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPOAGDFAJEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_NINHEPLJKAG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CELPPGBOAOM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CELPPGBOAOM&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CELPPGBOAOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CELPPGBOAOM&))((::PBYTE)hIl2Cpp + NPOAGDFAJEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
