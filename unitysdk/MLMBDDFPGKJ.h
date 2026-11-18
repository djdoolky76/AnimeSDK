#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COEGGFPBFNE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLMBDDFPGKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLMBDDFPGKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7BE0)
#define MLMBDDFPGKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLMBDDFPGKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLMBDDFPGKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7C20)
#define MLMBDDFPGKJ_NJMFKJOGHJN_1_OFFSET UNITYSDK_OFFSET(0x18E10810)
#define MLMBDDFPGKJ_NJMFKJOGHJN_OFFSET UNITYSDK_OFFSET(0x18E107A0)
#define MLMBDDFPGKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7BD0)
#define MLMBDDFPGKJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D7BB0)

inline static constexpr unsigned int MLMBDDFPGKJ_TypeDefinitionIndex = 9857;

struct alignas(8) MLMBDDFPGKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MLMBDDFPGKJ NJMFKJOGHJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLMBDDFPGKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_NJMFKJOGHJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MLMBDDFPGKJ NJMFKJOGHJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLMBDDFPGKJ EIFONLCJOPG)
	{
		return ((::MLMBDDFPGKJ(*)(::FlatBuffers::ByteBuffer*, ::MLMBDDFPGKJ))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_NJMFKJOGHJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MLMBDDFPGKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLMBDDFPGKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COEGGFPBFNE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COEGGFPBFNE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COEGGFPBFNE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COEGGFPBFNE&))((::PBYTE)hIl2Cpp + MLMBDDFPGKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
