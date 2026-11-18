#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCBGDMCMLFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHAICBNLOKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHAICBNLOKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F04D0)
#define PHAICBNLOKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHAICBNLOKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHAICBNLOKL_KFGAPKACDFD_1_OFFSET UNITYSDK_OFFSET(0x19DDAFA0)
#define PHAICBNLOKL_KFGAPKACDFD_OFFSET UNITYSDK_OFFSET(0x19DDAEA0)
#define PHAICBNLOKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0510)
#define PHAICBNLOKL___INIT_OFFSET UNITYSDK_OFFSET(0x7F04B0)

inline static constexpr unsigned int PHAICBNLOKL_TypeDefinitionIndex = 14524;

struct alignas(8) PHAICBNLOKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAICBNLOKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAICBNLOKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHAICBNLOKL KFGAPKACDFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHAICBNLOKL EIFONLCJOPG)
	{
		return ((::PHAICBNLOKL(*)(::FlatBuffers::ByteBuffer*, ::PHAICBNLOKL))((::PBYTE)hIl2Cpp + PHAICBNLOKL_KFGAPKACDFD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAICBNLOKL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PHAICBNLOKL KFGAPKACDFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHAICBNLOKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAICBNLOKL_KFGAPKACDFD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PHAICBNLOKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHAICBNLOKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAICBNLOKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCBGDMCMLFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCBGDMCMLFM&))((::PBYTE)hIl2Cpp + PHAICBNLOKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAICBNLOKL_PPOMNIFACOL_OFFSET))(this);
	}
};
