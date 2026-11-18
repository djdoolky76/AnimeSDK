#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MMJAAAALJBB.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIHOCOBJOEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7790)
#define LIHOCOBJOEI_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define LIHOCOBJOEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIHOCOBJOEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIHOCOBJOEI_KONGFNLPMKJ_1_OFFSET UNITYSDK_OFFSET(0x18DFB610)
#define LIHOCOBJOEI_KONGFNLPMKJ_OFFSET UNITYSDK_OFFSET(0x18DFB510)
#define LIHOCOBJOEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7780)
#define LIHOCOBJOEI___INIT_OFFSET UNITYSDK_OFFSET(0x7D7760)

inline static constexpr unsigned int LIHOCOBJOEI_TypeDefinitionIndex = 9183;

struct alignas(8) LIHOCOBJOEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIHOCOBJOEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::MMJAAAALJBB> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::MMJAAAALJBB>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::LIHOCOBJOEI KONGFNLPMKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIHOCOBJOEI EIFONLCJOPG)
	{
		return ((::LIHOCOBJOEI(*)(::FlatBuffers::ByteBuffer*, ::LIHOCOBJOEI))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_KONGFNLPMKJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LIHOCOBJOEI KONGFNLPMKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIHOCOBJOEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_KONGFNLPMKJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LIHOCOBJOEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIHOCOBJOEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIHOCOBJOEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
