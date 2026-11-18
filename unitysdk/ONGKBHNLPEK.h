#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNEKMBBEBLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONGKBHNLPEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONGKBHNLPEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9370A0)
#define ONGKBHNLPEK_FEJANJLLLPD_1_OFFSET UNITYSDK_OFFSET(0x1EDB7BB0)
#define ONGKBHNLPEK_FEJANJLLLPD_OFFSET UNITYSDK_OFFSET(0x1EDB7B40)
#define ONGKBHNLPEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONGKBHNLPEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONGKBHNLPEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9370E0)
#define ONGKBHNLPEK___INIT_OFFSET UNITYSDK_OFFSET(0x937080)

inline static constexpr unsigned int ONGKBHNLPEK_TypeDefinitionIndex = 14852;

struct alignas(8) ONGKBHNLPEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGKBHNLPEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ONGKBHNLPEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGKBHNLPEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONGKBHNLPEK FEJANJLLLPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGKBHNLPEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_FEJANJLLLPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ONGKBHNLPEK FEJANJLLLPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONGKBHNLPEK EIFONLCJOPG)
	{
		return ((::ONGKBHNLPEK(*)(::FlatBuffers::ByteBuffer*, ::ONGKBHNLPEK))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_FEJANJLLLPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNEKMBBEBLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNEKMBBEBLJ&))((::PBYTE)hIl2Cpp + ONGKBHNLPEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
