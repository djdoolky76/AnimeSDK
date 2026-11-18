#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDHJEHFNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFHMJGGAOLH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFHMJGGAOLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EBF0)
#define HFHMJGGAOLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFHMJGGAOLH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFHMJGGAOLH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76EBD0)
#define HFHMJGGAOLH_OBMGJELJHLL_1_OFFSET UNITYSDK_OFFSET(0x15A8ABC0)
#define HFHMJGGAOLH_OBMGJELJHLL_OFFSET UNITYSDK_OFFSET(0x15A8A8C0)
#define HFHMJGGAOLH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EBE0)
#define HFHMJGGAOLH___INIT_OFFSET UNITYSDK_OFFSET(0x76EBB0)

inline static constexpr unsigned int HFHMJGGAOLH_TypeDefinitionIndex = 11070;

struct alignas(8) HFHMJGGAOLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFHMJGGAOLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HFHMJGGAOLH OBMGJELJHLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFHMJGGAOLH EIFONLCJOPG)
	{
		return ((::HFHMJGGAOLH(*)(::FlatBuffers::ByteBuffer*, ::HFHMJGGAOLH))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_OBMGJELJHLL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IFMDHJEHFNP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDHJEHFNP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IFMDHJEHFNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDHJEHFNP&))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HFHMJGGAOLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFHMJGGAOLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HFHMJGGAOLH OBMGJELJHLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFHMJGGAOLH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFHMJGGAOLH_OBMGJELJHLL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
