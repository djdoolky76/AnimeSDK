#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HGMFPPGNOHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNMLEKKPLGJ_AKOGNMDLOKO_1_OFFSET UNITYSDK_OFFSET(0x17AB5CD0)
#define FNMLEKKPLGJ_AKOGNMDLOKO_OFFSET UNITYSDK_OFFSET(0x17AB5C60)
#define FNMLEKKPLGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNMLEKKPLGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B3060)
#define FNMLEKKPLGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNMLEKKPLGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNMLEKKPLGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B30A0)
#define FNMLEKKPLGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7B3040)

inline static constexpr unsigned int FNMLEKKPLGJ_TypeDefinitionIndex = 14395;

struct alignas(8) FNMLEKKPLGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FNMLEKKPLGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNMLEKKPLGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNMLEKKPLGJ AKOGNMDLOKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNMLEKKPLGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_AKOGNMDLOKO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNMLEKKPLGJ AKOGNMDLOKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNMLEKKPLGJ EIFONLCJOPG)
	{
		return ((::FNMLEKKPLGJ(*)(::FlatBuffers::ByteBuffer*, ::FNMLEKKPLGJ))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_AKOGNMDLOKO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HGMFPPGNOHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGMFPPGNOHI&))((::PBYTE)hIl2Cpp + FNMLEKKPLGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
