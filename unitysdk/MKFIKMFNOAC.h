#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFJACMMJCJK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKFIKMFNOAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKFIKMFNOAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEA80)
#define MKFIKMFNOAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKFIKMFNOAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKFIKMFNOAC_NHBJPLCAAPG_1_OFFSET UNITYSDK_OFFSET(0x1D0B8690)
#define MKFIKMFNOAC_NHBJPLCAAPG_OFFSET UNITYSDK_OFFSET(0x1D0B85D0)
#define MKFIKMFNOAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEAC0)
#define MKFIKMFNOAC___INIT_OFFSET UNITYSDK_OFFSET(0x8AEA60)

inline static constexpr unsigned int MKFIKMFNOAC_TypeDefinitionIndex = 15038;

struct alignas(8) MKFIKMFNOAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKFIKMFNOAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MKFIKMFNOAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKFIKMFNOAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MKFIKMFNOAC NHBJPLCAAPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKFIKMFNOAC EIFONLCJOPG)
	{
		return ((::MKFIKMFNOAC(*)(::FlatBuffers::ByteBuffer*, ::MKFIKMFNOAC))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_NHBJPLCAAPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MKFIKMFNOAC NHBJPLCAAPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKFIKMFNOAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_NHBJPLCAAPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFJACMMJCJK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFJACMMJCJK&))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFIKMFNOAC_PPOMNIFACOL_OFFSET))(this);
	}
};
