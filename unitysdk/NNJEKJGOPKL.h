#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KABMEPOLMFN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNJEKJGOPKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNJEKJGOPKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C1C0)
#define NNJEKJGOPKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNJEKJGOPKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNJEKJGOPKL_PDKFLHFFCDD_1_OFFSET UNITYSDK_OFFSET(0x1B333120)
#define NNJEKJGOPKL_PDKFLHFFCDD_OFFSET UNITYSDK_OFFSET(0x1B3330B0)
#define NNJEKJGOPKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C1B0)
#define NNJEKJGOPKL___INIT_OFFSET UNITYSDK_OFFSET(0x80C190)

inline static constexpr unsigned int NNJEKJGOPKL_TypeDefinitionIndex = 17386;

struct alignas(8) NNJEKJGOPKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJEKJGOPKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NNJEKJGOPKL PDKFLHFFCDD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJEKJGOPKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_PDKFLHFFCDD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KABMEPOLMFN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KABMEPOLMFN&))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NNJEKJGOPKL PDKFLHFFCDD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNJEKJGOPKL EIFONLCJOPG)
	{
		return ((::NNJEKJGOPKL(*)(::FlatBuffers::ByteBuffer*, ::NNJEKJGOPKL))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_PDKFLHFFCDD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NNJEKJGOPKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJEKJGOPKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJEKJGOPKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
