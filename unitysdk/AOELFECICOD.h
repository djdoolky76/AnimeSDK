#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MIBFIHPONLC.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOELFECICOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1680)
#define AOELFECICOD_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7F1660)
#define AOELFECICOD_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define AOELFECICOD_GBJACBENACC_1_OFFSET UNITYSDK_OFFSET(0x19F15720)
#define AOELFECICOD_GBJACBENACC_OFFSET UNITYSDK_OFFSET(0x19F156C0)
#define AOELFECICOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOELFECICOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AOELFECICOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1650)
#define AOELFECICOD___INIT_OFFSET UNITYSDK_OFFSET(0x7F1630)

inline static constexpr unsigned int AOELFECICOD_TypeDefinitionIndex = 12606;

struct alignas(8) AOELFECICOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOELFECICOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOELFECICOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOELFECICOD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::MIBFIHPONLC> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::MIBFIHPONLC>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AOELFECICOD_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	::AOELFECICOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOELFECICOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOELFECICOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AOELFECICOD GBJACBENACC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AOELFECICOD EIFONLCJOPG)
	{
		return ((::AOELFECICOD(*)(::FlatBuffers::ByteBuffer*, ::AOELFECICOD))((::PBYTE)hIl2Cpp + AOELFECICOD_GBJACBENACC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOELFECICOD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AOELFECICOD GBJACBENACC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOELFECICOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOELFECICOD_GBJACBENACC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::MIBFIHPONLC> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::MIBFIHPONLC>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOELFECICOD_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}
};
