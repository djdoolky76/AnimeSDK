#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JNJPJNLGHNO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPMDMNGOGMN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPMDMNGOGMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DE60)
#define HPMDMNGOGMN_EIOANKFLLLB_1_OFFSET UNITYSDK_OFFSET(0x1B4E7600)
#define HPMDMNGOGMN_EIOANKFLLLB_OFFSET UNITYSDK_OFFSET(0x1B4E7560)
#define HPMDMNGOGMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPMDMNGOGMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPMDMNGOGMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DE50)
#define HPMDMNGOGMN___INIT_OFFSET UNITYSDK_OFFSET(0x80DE30)

inline static constexpr unsigned int HPMDMNGOGMN_TypeDefinitionIndex = 15478;

struct alignas(8) HPMDMNGOGMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMDMNGOGMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HPMDMNGOGMN EIOANKFLLLB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPMDMNGOGMN EIFONLCJOPG)
	{
		return ((::HPMDMNGOGMN(*)(::FlatBuffers::ByteBuffer*, ::HPMDMNGOGMN))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_EIOANKFLLLB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HPMDMNGOGMN EIOANKFLLLB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMDMNGOGMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_EIOANKFLLLB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JNJPJNLGHNO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNJPJNLGHNO&))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HPMDMNGOGMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPMDMNGOGMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMDMNGOGMN_GHKKNCCLPAN_OFFSET))(this);
	}
};
