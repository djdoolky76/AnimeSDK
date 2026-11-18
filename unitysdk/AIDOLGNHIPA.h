#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNOBIBEJCBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIDOLGNHIPA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIDOLGNHIPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1460)
#define AIDOLGNHIPA_CPFEHBKGKCE_1_OFFSET UNITYSDK_OFFSET(0x17A6EDF0)
#define AIDOLGNHIPA_CPFEHBKGKCE_OFFSET UNITYSDK_OFFSET(0x17A6ED90)
#define AIDOLGNHIPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIDOLGNHIPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIDOLGNHIPA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B14A0)
#define AIDOLGNHIPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1450)
#define AIDOLGNHIPA___INIT_OFFSET UNITYSDK_OFFSET(0x7B1430)

inline static constexpr unsigned int AIDOLGNHIPA_TypeDefinitionIndex = 11444;

struct alignas(8) AIDOLGNHIPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIDOLGNHIPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNOBIBEJCBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNOBIBEJCBH&))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AIDOLGNHIPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIDOLGNHIPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 LBNKIMGOPLL, ::System::Int32 DKEDOEDOGHD, ::DNOBIBEJCBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::DNOBIBEJCBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_LLGCOCLACNA_OFFSET))(this, LBNKIMGOPLL, DKEDOEDOGHD, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AIDOLGNHIPA CPFEHBKGKCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIDOLGNHIPA EIFONLCJOPG)
	{
		return ((::AIDOLGNHIPA(*)(::FlatBuffers::ByteBuffer*, ::AIDOLGNHIPA))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_CPFEHBKGKCE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::AIDOLGNHIPA CPFEHBKGKCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIDOLGNHIPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIDOLGNHIPA_CPFEHBKGKCE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
