#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCOHFLPGKIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMEAJFHAJDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HMEAJFHAJDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A83A0)
#define HMEAJFHAJDL_EHEAAHDLHJG_1_OFFSET UNITYSDK_OFFSET(0x174788C0)
#define HMEAJFHAJDL_EHEAAHDLHJG_OFFSET UNITYSDK_OFFSET(0x17478820)
#define HMEAJFHAJDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMEAJFHAJDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMEAJFHAJDL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A83E0)
#define HMEAJFHAJDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8390)
#define HMEAJFHAJDL___INIT_OFFSET UNITYSDK_OFFSET(0x7A8370)

inline static constexpr unsigned int HMEAJFHAJDL_TypeDefinitionIndex = 15004;

struct alignas(8) HMEAJFHAJDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMEAJFHAJDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCOHFLPGKIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCOHFLPGKIF&))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HMEAJFHAJDL EHEAAHDLHJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMEAJFHAJDL EIFONLCJOPG)
	{
		return ((::HMEAJFHAJDL(*)(::FlatBuffers::ByteBuffer*, ::HMEAJFHAJDL))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_EHEAAHDLHJG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HMEAJFHAJDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMEAJFHAJDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HMEAJFHAJDL EHEAAHDLHJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMEAJFHAJDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_EHEAAHDLHJG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCOHFLPGKIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCOHFLPGKIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + HMEAJFHAJDL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
