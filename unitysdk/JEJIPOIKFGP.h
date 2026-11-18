#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LIPALAIEECF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEJIPOIKFGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEJIPOIKFGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814EA0)
#define JEJIPOIKFGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEJIPOIKFGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEJIPOIKFGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814E90)
#define JEJIPOIKFGP_PFAMEKBKHBC_1_OFFSET UNITYSDK_OFFSET(0x1B8958C0)
#define JEJIPOIKFGP_PFAMEKBKHBC_OFFSET UNITYSDK_OFFSET(0x1B8955C0)
#define JEJIPOIKFGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814EE0)
#define JEJIPOIKFGP___INIT_OFFSET UNITYSDK_OFFSET(0x814E70)

inline static constexpr unsigned int JEJIPOIKFGP_TypeDefinitionIndex = 16659;

struct alignas(8) JEJIPOIKFGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEJIPOIKFGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JEJIPOIKFGP PFAMEKBKHBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEJIPOIKFGP EIFONLCJOPG)
	{
		return ((::JEJIPOIKFGP(*)(::FlatBuffers::ByteBuffer*, ::JEJIPOIKFGP))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_PFAMEKBKHBC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LIPALAIEECF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LIPALAIEECF&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LIPALAIEECF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LIPALAIEECF&))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JEJIPOIKFGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEJIPOIKFGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JEJIPOIKFGP PFAMEKBKHBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEJIPOIKFGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_PFAMEKBKHBC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIPOIKFGP_PPOMNIFACOL_OFFSET))(this);
	}
};
