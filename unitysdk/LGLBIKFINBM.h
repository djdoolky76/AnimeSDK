#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPDDKDEOBKG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGLBIKFINBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGLBIKFINBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810530)
#define LGLBIKFINBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGLBIKFINBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGLBIKFINBM_JKPPHJMFPEB_1_OFFSET UNITYSDK_OFFSET(0x1B64C170)
#define LGLBIKFINBM_JKPPHJMFPEB_OFFSET UNITYSDK_OFFSET(0x1B64C0D0)
#define LGLBIKFINBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810520)
#define LGLBIKFINBM___INIT_OFFSET UNITYSDK_OFFSET(0x810500)

inline static constexpr unsigned int LGLBIKFINBM_TypeDefinitionIndex = 10335;

struct alignas(8) LGLBIKFINBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLBIKFINBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGLBIKFINBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLBIKFINBM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLBIKFINBM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPDDKDEOBKG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPDDKDEOBKG&))((::PBYTE)hIl2Cpp + LGLBIKFINBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LGLBIKFINBM JKPPHJMFPEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGLBIKFINBM EIFONLCJOPG)
	{
		return ((::LGLBIKFINBM(*)(::FlatBuffers::ByteBuffer*, ::LGLBIKFINBM))((::PBYTE)hIl2Cpp + LGLBIKFINBM_JKPPHJMFPEB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LGLBIKFINBM JKPPHJMFPEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGLBIKFINBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGLBIKFINBM_JKPPHJMFPEB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LGLBIKFINBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGLBIKFINBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGLBIKFINBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
