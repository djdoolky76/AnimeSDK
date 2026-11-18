#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IBAKJDILOEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALAFFOGCDDN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ALAFFOGCDDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7610E0)
#define ALAFFOGCDDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALAFFOGCDDN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ALAFFOGCDDN_IFDIDPIJPOH_1_OFFSET UNITYSDK_OFFSET(0x15725480)
#define ALAFFOGCDDN_IFDIDPIJPOH_OFFSET UNITYSDK_OFFSET(0x15725180)
#define ALAFFOGCDDN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x761130)
#define ALAFFOGCDDN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761120)
#define ALAFFOGCDDN___INIT_OFFSET UNITYSDK_OFFSET(0x7610C0)

inline static constexpr unsigned int ALAFFOGCDDN_TypeDefinitionIndex = 13263;

struct alignas(8) ALAFFOGCDDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALAFFOGCDDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ALAFFOGCDDN IFDIDPIJPOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ALAFFOGCDDN EIFONLCJOPG)
	{
		return ((::ALAFFOGCDDN(*)(::FlatBuffers::ByteBuffer*, ::ALAFFOGCDDN))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_IFDIDPIJPOH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ALAFFOGCDDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALAFFOGCDDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IBAKJDILOEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IBAKJDILOEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IBAKJDILOEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IBAKJDILOEH&))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ALAFFOGCDDN IFDIDPIJPOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALAFFOGCDDN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALAFFOGCDDN_IFDIDPIJPOH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
