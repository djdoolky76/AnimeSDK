#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCHBNFHMAAP.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDILMNLHIKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6A40)
#define KDILMNLHIKM_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7D6A80)
#define KDILMNLHIKM_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define KDILMNLHIKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDILMNLHIKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDILMNLHIKM_IOAKIKHGMAK_1_OFFSET UNITYSDK_OFFSET(0x18DE2EA0)
#define KDILMNLHIKM_IOAKIKHGMAK_OFFSET UNITYSDK_OFFSET(0x18DE2E30)
#define KDILMNLHIKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6A30)
#define KDILMNLHIKM___INIT_OFFSET UNITYSDK_OFFSET(0x7D6A10)

inline static constexpr unsigned int KDILMNLHIKM_TypeDefinitionIndex = 14266;

struct alignas(8) KDILMNLHIKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDILMNLHIKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDILMNLHIKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::OCHBNFHMAAP> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::OCHBNFHMAAP>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDILMNLHIKM_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDILMNLHIKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KDILMNLHIKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDILMNLHIKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDILMNLHIKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDILMNLHIKM IOAKIKHGMAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDILMNLHIKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDILMNLHIKM_IOAKIKHGMAK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::OCHBNFHMAAP> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::OCHBNFHMAAP>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDILMNLHIKM_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	static ::KDILMNLHIKM IOAKIKHGMAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDILMNLHIKM EIFONLCJOPG)
	{
		return ((::KDILMNLHIKM(*)(::FlatBuffers::ByteBuffer*, ::KDILMNLHIKM))((::PBYTE)hIl2Cpp + KDILMNLHIKM_IOAKIKHGMAK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDILMNLHIKM_GHKKNCCLPAN_OFFSET))(this);
	}
};
