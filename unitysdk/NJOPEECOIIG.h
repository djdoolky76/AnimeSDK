#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CKJIMKCGPBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJOPEECOIIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJOPEECOIIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E240)
#define NJOPEECOIIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJOPEECOIIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJOPEECOIIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E230)
#define NJOPEECOIIG_PMHNJFDGMFG_1_OFFSET UNITYSDK_OFFSET(0x1BF6FF60)
#define NJOPEECOIIG_PMHNJFDGMFG_OFFSET UNITYSDK_OFFSET(0x1BF6FEF0)
#define NJOPEECOIIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E220)
#define NJOPEECOIIG___INIT_OFFSET UNITYSDK_OFFSET(0x81E200)

inline static constexpr unsigned int NJOPEECOIIG_TypeDefinitionIndex = 10600;

struct alignas(8) NJOPEECOIIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOPEECOIIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJOPEECOIIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOPEECOIIG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJOPEECOIIG PMHNJFDGMFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJOPEECOIIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJOPEECOIIG_PMHNJFDGMFG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CKJIMKCGPBO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKJIMKCGPBO&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJOPEECOIIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NJOPEECOIIG PMHNJFDGMFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJOPEECOIIG EIFONLCJOPG)
	{
		return ((::NJOPEECOIIG(*)(::FlatBuffers::ByteBuffer*, ::NJOPEECOIIG))((::PBYTE)hIl2Cpp + NJOPEECOIIG_PMHNJFDGMFG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NJOPEECOIIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJOPEECOIIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJOPEECOIIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOPEECOIIG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CKJIMKCGPBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKJIMKCGPBO&))((::PBYTE)hIl2Cpp + NJOPEECOIIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
