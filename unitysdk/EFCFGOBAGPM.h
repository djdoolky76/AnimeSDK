#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOLEBCPEIFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFCFGOBAGPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EFCFGOBAGPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA6A0)
#define EFCFGOBAGPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFCFGOBAGPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFCFGOBAGPM_HMEEBBNOCEK_1_OFFSET UNITYSDK_OFFSET(0x1A5156A0)
#define EFCFGOBAGPM_HMEEBBNOCEK_OFFSET UNITYSDK_OFFSET(0x1A560600)
#define EFCFGOBAGPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA6E0)
#define EFCFGOBAGPM___INIT_OFFSET UNITYSDK_OFFSET(0x7FA680)

inline static constexpr unsigned int EFCFGOBAGPM_TypeDefinitionIndex = 15796;

struct alignas(8) EFCFGOBAGPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCFGOBAGPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EFCFGOBAGPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFCFGOBAGPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOLEBCPEIFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOLEBCPEIFH&))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EFCFGOBAGPM HMEEBBNOCEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFCFGOBAGPM EIFONLCJOPG)
	{
		return ((::EFCFGOBAGPM(*)(::FlatBuffers::ByteBuffer*, ::EFCFGOBAGPM))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_HMEEBBNOCEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EFCFGOBAGPM HMEEBBNOCEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFCFGOBAGPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCFGOBAGPM_HMEEBBNOCEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
