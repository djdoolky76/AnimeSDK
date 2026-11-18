#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPKIBJNBCHM.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEENICMPPMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B28D0)
#define EEENICMPPMO_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define EEENICMPPMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEENICMPPMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EEENICMPPMO_MFEECEHEMBH_1_OFFSET UNITYSDK_OFFSET(0x17AA5C30)
#define EEENICMPPMO_MFEECEHEMBH_OFFSET UNITYSDK_OFFSET(0x17AA5AC0)
#define EEENICMPPMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2910)
#define EEENICMPPMO___INIT_OFFSET UNITYSDK_OFFSET(0x7B28B0)

inline static constexpr unsigned int EEENICMPPMO_TypeDefinitionIndex = 14240;

struct alignas(8) EEENICMPPMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENICMPPMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEENICMPPMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EEENICMPPMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEENICMPPMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEENICMPPMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EEENICMPPMO MFEECEHEMBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EEENICMPPMO EIFONLCJOPG)
	{
		return ((::EEENICMPPMO(*)(::FlatBuffers::ByteBuffer*, ::EEENICMPPMO))((::PBYTE)hIl2Cpp + EEENICMPPMO_MFEECEHEMBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENICMPPMO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::EPKIBJNBCHM> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::EPKIBJNBCHM>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEENICMPPMO_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEENICMPPMO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EEENICMPPMO MFEECEHEMBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEENICMPPMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEENICMPPMO_MFEECEHEMBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
