#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KHGNGKBEHCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJBMGOBIONA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJBMGOBIONA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define MJBMGOBIONA_FMLIOGMGGLF_1_OFFSET UNITYSDK_OFFSET(0x1B319F20)
#define MJBMGOBIONA_FMLIOGMGGLF_OFFSET UNITYSDK_OFFSET(0x1B319E90)
#define MJBMGOBIONA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJBMGOBIONA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJBMGOBIONA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BB70)
#define MJBMGOBIONA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MJBMGOBIONA_TypeDefinitionIndex = 15246;

struct alignas(8) MJBMGOBIONA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMGOBIONA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJBMGOBIONA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::KHGNGKBEHCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KHGNGKBEHCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MJBMGOBIONA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBMGOBIONA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MJBMGOBIONA FMLIOGMGGLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJBMGOBIONA EIFONLCJOPG)
	{
		return ((::MJBMGOBIONA(*)(::FlatBuffers::ByteBuffer*, ::MJBMGOBIONA))((::PBYTE)hIl2Cpp + MJBMGOBIONA_FMLIOGMGGLF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KHGNGKBEHCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHGNGKBEHCK&))((::PBYTE)hIl2Cpp + MJBMGOBIONA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MJBMGOBIONA FMLIOGMGGLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJBMGOBIONA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJBMGOBIONA_FMLIOGMGGLF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MJBMGOBIONA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJBMGOBIONA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJBMGOBIONA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
