#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OEINADGDMPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DILFPDDAGGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DILFPDDAGGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define DILFPDDAGGN_EMDGJNOBJPF_1_OFFSET UNITYSDK_OFFSET(0x1A554780)
#define DILFPDDAGGN_EMDGJNOBJPF_OFFSET UNITYSDK_OFFSET(0x1A554730)
#define DILFPDDAGGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DILFPDDAGGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DILFPDDAGGN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA250)
#define DILFPDDAGGN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DILFPDDAGGN_TypeDefinitionIndex = 16631;

struct alignas(8) DILFPDDAGGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DILFPDDAGGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DILFPDDAGGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DILFPDDAGGN EMDGJNOBJPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DILFPDDAGGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DILFPDDAGGN_EMDGJNOBJPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::OEINADGDMPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OEINADGDMPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + DILFPDDAGGN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DILFPDDAGGN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DILFPDDAGGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DILFPDDAGGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DILFPDDAGGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OEINADGDMPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OEINADGDMPF&))((::PBYTE)hIl2Cpp + DILFPDDAGGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DILFPDDAGGN EMDGJNOBJPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DILFPDDAGGN EIFONLCJOPG)
	{
		return ((::DILFPDDAGGN(*)(::FlatBuffers::ByteBuffer*, ::DILFPDDAGGN))((::PBYTE)hIl2Cpp + DILFPDDAGGN_EMDGJNOBJPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
