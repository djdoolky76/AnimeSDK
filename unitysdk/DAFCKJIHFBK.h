#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMPGCDPBLFG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAFCKJIHFBK_AHIILEFHPGJ_1_OFFSET UNITYSDK_OFFSET(0x15798600)
#define DAFCKJIHFBK_AHIILEFHPGJ_OFFSET UNITYSDK_OFFSET(0x157984C0)
#define DAFCKJIHFBK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DAFCKJIHFBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765CC0)
#define DAFCKJIHFBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAFCKJIHFBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAFCKJIHFBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765CB0)
#define DAFCKJIHFBK___INIT_OFFSET UNITYSDK_OFFSET(0x765C90)

inline static constexpr unsigned int DAFCKJIHFBK_TypeDefinitionIndex = 11355;

struct alignas(8) DAFCKJIHFBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFCKJIHFBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DAFCKJIHFBK AHIILEFHPGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAFCKJIHFBK EIFONLCJOPG)
	{
		return ((::DAFCKJIHFBK(*)(::FlatBuffers::ByteBuffer*, ::DAFCKJIHFBK))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_AHIILEFHPGJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMPGCDPBLFG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMPGCDPBLFG&))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DAFCKJIHFBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFCKJIHFBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DAFCKJIHFBK AHIILEFHPGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFCKJIHFBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFCKJIHFBK_AHIILEFHPGJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
