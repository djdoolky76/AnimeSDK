#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGLDHBAGEEE.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEEFPHMMLHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFB70)
#define NEEFPHMMLHE_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7EFBC0)
#define NEEFPHMMLHE_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define NEEFPHMMLHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEEFPHMMLHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEEFPHMMLHE_NOKKNILHLII_1_OFFSET UNITYSDK_OFFSET(0x19DBFF60)
#define NEEFPHMMLHE_NOKKNILHLII_OFFSET UNITYSDK_OFFSET(0x19DBFF00)
#define NEEFPHMMLHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFBB0)
#define NEEFPHMMLHE___INIT_OFFSET UNITYSDK_OFFSET(0x7EFB50)

inline static constexpr unsigned int NEEFPHMMLHE_TypeDefinitionIndex = 11463;

struct alignas(8) NEEFPHMMLHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEFPHMMLHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NEEFPHMMLHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEEFPHMMLHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::CGLDHBAGEEE> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::CGLDHBAGEEE>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::NEEFPHMMLHE NOKKNILHLII(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEEFPHMMLHE EIFONLCJOPG)
	{
		return ((::NEEFPHMMLHE(*)(::FlatBuffers::ByteBuffer*, ::NEEFPHMMLHE))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_NOKKNILHLII_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NEEFPHMMLHE NOKKNILHLII_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEEFPHMMLHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_NOKKNILHLII_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::CGLDHBAGEEE> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::CGLDHBAGEEE>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEEFPHMMLHE_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}
};
