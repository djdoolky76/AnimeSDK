#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CPCOBJDFEPN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIJIIJKDFGB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIJIIJKDFGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE240)
#define EIJIIJKDFGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIJIIJKDFGB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIJIIJKDFGB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE230)
#define EIJIIJKDFGB_PBHBLKCPJBA_1_OFFSET UNITYSDK_OFFSET(0x19C10FD0)
#define EIJIIJKDFGB_PBHBLKCPJBA_OFFSET UNITYSDK_OFFSET(0x19C10F60)
#define EIJIIJKDFGB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE280)
#define EIJIIJKDFGB___INIT_OFFSET UNITYSDK_OFFSET(0x7EE210)

inline static constexpr unsigned int EIJIIJKDFGB_TypeDefinitionIndex = 13670;

struct alignas(8) EIJIIJKDFGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJIIJKDFGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CPCOBJDFEPN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPCOBJDFEPN&))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EIJIIJKDFGB PBHBLKCPJBA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIJIIJKDFGB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_PBHBLKCPJBA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CPCOBJDFEPN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CPCOBJDFEPN&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EIJIIJKDFGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIJIIJKDFGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EIJIIJKDFGB PBHBLKCPJBA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIJIIJKDFGB EIFONLCJOPG)
	{
		return ((::EIJIIJKDFGB(*)(::FlatBuffers::ByteBuffer*, ::EIJIIJKDFGB))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_PBHBLKCPJBA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIIJKDFGB_GHKKNCCLPAN_OFFSET))(this);
	}
};
