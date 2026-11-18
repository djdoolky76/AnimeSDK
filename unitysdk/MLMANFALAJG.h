#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FABBBJBNKAL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLMANFALAJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLMANFALAJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805190)
#define MLMANFALAJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLMANFALAJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLMANFALAJG_HOCGDFLCPPH_1_OFFSET UNITYSDK_OFFSET(0x1AD76DC0)
#define MLMANFALAJG_HOCGDFLCPPH_OFFSET UNITYSDK_OFFSET(0x1AD76AC0)
#define MLMANFALAJG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805170)
#define MLMANFALAJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805180)
#define MLMANFALAJG___INIT_OFFSET UNITYSDK_OFFSET(0x805150)

inline static constexpr unsigned int MLMANFALAJG_TypeDefinitionIndex = 17013;

struct alignas(8) MLMANFALAJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMANFALAJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMANFALAJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MLMANFALAJG HOCGDFLCPPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLMANFALAJG EIFONLCJOPG)
	{
		return ((::MLMANFALAJG(*)(::FlatBuffers::ByteBuffer*, ::MLMANFALAJG))((::PBYTE)hIl2Cpp + MLMANFALAJG_HOCGDFLCPPH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMANFALAJG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FABBBJBNKAL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FABBBJBNKAL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MLMANFALAJG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FABBBJBNKAL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FABBBJBNKAL&))((::PBYTE)hIl2Cpp + MLMANFALAJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMANFALAJG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MLMANFALAJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLMANFALAJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMANFALAJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MLMANFALAJG HOCGDFLCPPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLMANFALAJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMANFALAJG_HOCGDFLCPPH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
