#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJLFPLJEIHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMBJOOCHPCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMBJOOCHPCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDDC0)
#define DMBJOOCHPCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMBJOOCHPCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMBJOOCHPCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDDB0)
#define DMBJOOCHPCC_OLLPFGHEIID_1_OFFSET UNITYSDK_OFFSET(0x19C083F0)
#define DMBJOOCHPCC_OLLPFGHEIID_OFFSET UNITYSDK_OFFSET(0x19C08390)
#define DMBJOOCHPCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDE00)
#define DMBJOOCHPCC___INIT_OFFSET UNITYSDK_OFFSET(0x7EDD90)

inline static constexpr unsigned int DMBJOOCHPCC_TypeDefinitionIndex = 12552;

struct alignas(8) DMBJOOCHPCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBJOOCHPCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJLFPLJEIHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJLFPLJEIHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DMBJOOCHPCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMBJOOCHPCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DMBJOOCHPCC OLLPFGHEIID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMBJOOCHPCC EIFONLCJOPG)
	{
		return ((::DMBJOOCHPCC(*)(::FlatBuffers::ByteBuffer*, ::DMBJOOCHPCC))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_OLLPFGHEIID_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJLFPLJEIHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJLFPLJEIHN&))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DMBJOOCHPCC OLLPFGHEIID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMBJOOCHPCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_OLLPFGHEIID_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBJOOCHPCC_PPOMNIFACOL_OFFSET))(this);
	}
};
