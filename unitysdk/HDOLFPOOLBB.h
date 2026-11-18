#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHHBAGAJAJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDOLFPOOLBB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDOLFPOOLBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809F30)
#define HDOLFPOOLBB_EPJGEBOPGLO_1_OFFSET UNITYSDK_OFFSET(0x1B11EC00)
#define HDOLFPOOLBB_EPJGEBOPGLO_OFFSET UNITYSDK_OFFSET(0x1B11EB60)
#define HDOLFPOOLBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDOLFPOOLBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDOLFPOOLBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809F20)
#define HDOLFPOOLBB___INIT_OFFSET UNITYSDK_OFFSET(0x809F00)

inline static constexpr unsigned int HDOLFPOOLBB_TypeDefinitionIndex = 10599;

struct alignas(8) HDOLFPOOLBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDOLFPOOLBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HDOLFPOOLBB EPJGEBOPGLO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDOLFPOOLBB EIFONLCJOPG)
	{
		return ((::HDOLFPOOLBB(*)(::FlatBuffers::ByteBuffer*, ::HDOLFPOOLBB))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_EPJGEBOPGLO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HDOLFPOOLBB EPJGEBOPGLO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDOLFPOOLBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_EPJGEBOPGLO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHHBAGAJAJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHHBAGAJAJH&))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HDOLFPOOLBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDOLFPOOLBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDOLFPOOLBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
