#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHDEAHLOBKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDIMLPNPOEC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDIMLPNPOEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E59D0)
#define KDIMLPNPOEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDIMLPNPOEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDIMLPNPOEC_IBGJDKHDHOF_1_OFFSET UNITYSDK_OFFSET(0x1957A610)
#define KDIMLPNPOEC_IBGJDKHDHOF_OFFSET UNITYSDK_OFFSET(0x1957A5A0)
#define KDIMLPNPOEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5A10)
#define KDIMLPNPOEC___INIT_OFFSET UNITYSDK_OFFSET(0x7E59B0)

inline static constexpr unsigned int KDIMLPNPOEC_TypeDefinitionIndex = 15943;

struct alignas(8) KDIMLPNPOEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDIMLPNPOEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KDIMLPNPOEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDIMLPNPOEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDIMLPNPOEC IBGJDKHDHOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDIMLPNPOEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_IBGJDKHDHOF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHDEAHLOBKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHDEAHLOBKM&))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KDIMLPNPOEC IBGJDKHDHOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDIMLPNPOEC EIFONLCJOPG)
	{
		return ((::KDIMLPNPOEC(*)(::FlatBuffers::ByteBuffer*, ::KDIMLPNPOEC))((::PBYTE)hIl2Cpp + KDIMLPNPOEC_IBGJDKHDHOF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
