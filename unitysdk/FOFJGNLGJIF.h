#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBCOOLNCLPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOFJGNLGJIF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FOFJGNLGJIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813BF0)
#define FOFJGNLGJIF_DEKCNACFDDO_1_OFFSET UNITYSDK_OFFSET(0x1B865F20)
#define FOFJGNLGJIF_DEKCNACFDDO_OFFSET UNITYSDK_OFFSET(0x1B865EB0)
#define FOFJGNLGJIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOFJGNLGJIF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FOFJGNLGJIF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813C30)
#define FOFJGNLGJIF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813BE0)
#define FOFJGNLGJIF___INIT_OFFSET UNITYSDK_OFFSET(0x813BC0)

inline static constexpr unsigned int FOFJGNLGJIF_TypeDefinitionIndex = 16398;

struct alignas(8) FOFJGNLGJIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFJGNLGJIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FOFJGNLGJIF DEKCNACFDDO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOFJGNLGJIF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_DEKCNACFDDO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FOFJGNLGJIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOFJGNLGJIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FOFJGNLGJIF DEKCNACFDDO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FOFJGNLGJIF EIFONLCJOPG)
	{
		return ((::FOFJGNLGJIF(*)(::FlatBuffers::ByteBuffer*, ::FOFJGNLGJIF))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_DEKCNACFDDO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBCOOLNCLPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBCOOLNCLPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBCOOLNCLPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBCOOLNCLPF&))((::PBYTE)hIl2Cpp + FOFJGNLGJIF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
