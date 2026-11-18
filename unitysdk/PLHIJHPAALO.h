#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OODNKFDCMPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLHIJHPAALO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLHIJHPAALO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x821150)
#define PLHIJHPAALO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLHIJHPAALO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLHIJHPAALO_HKBIBLJJOAB_1_OFFSET UNITYSDK_OFFSET(0x1C1AFD60)
#define PLHIJHPAALO_HKBIBLJJOAB_OFFSET UNITYSDK_OFFSET(0x1C1AFC60)
#define PLHIJHPAALO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x821190)
#define PLHIJHPAALO___INIT_OFFSET UNITYSDK_OFFSET(0x821130)

inline static constexpr unsigned int PLHIJHPAALO_TypeDefinitionIndex = 12888;

struct alignas(8) PLHIJHPAALO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHIJHPAALO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHIJHPAALO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PLHIJHPAALO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLHIJHPAALO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHIJHPAALO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PLHIJHPAALO HKBIBLJJOAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLHIJHPAALO EIFONLCJOPG)
	{
		return ((::PLHIJHPAALO(*)(::FlatBuffers::ByteBuffer*, ::PLHIJHPAALO))((::PBYTE)hIl2Cpp + PLHIJHPAALO_HKBIBLJJOAB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OODNKFDCMPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OODNKFDCMPE&))((::PBYTE)hIl2Cpp + PLHIJHPAALO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PLHIJHPAALO HKBIBLJJOAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLHIJHPAALO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHIJHPAALO_HKBIBLJJOAB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHIJHPAALO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHIJHPAALO_PPOMNIFACOL_OFFSET))(this);
	}
};
