#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFBBEBJKMJF.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKECOBPDNLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812650)
#define IKECOBPDNLO_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x812630)
#define IKECOBPDNLO_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define IKECOBPDNLO_FADFPHHGOKO_1_OFFSET UNITYSDK_OFFSET(0x1B7CE550)
#define IKECOBPDNLO_FADFPHHGOKO_OFFSET UNITYSDK_OFFSET(0x1B7CE4E0)
#define IKECOBPDNLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKECOBPDNLO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IKECOBPDNLO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812620)
#define IKECOBPDNLO___INIT_OFFSET UNITYSDK_OFFSET(0x812600)

inline static constexpr unsigned int IKECOBPDNLO_TypeDefinitionIndex = 13697;

struct alignas(8) IKECOBPDNLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECOBPDNLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKECOBPDNLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IKECOBPDNLO FADFPHHGOKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKECOBPDNLO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKECOBPDNLO_FADFPHHGOKO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::NFBBEBJKMJF> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::NFBBEBJKMJF>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKECOBPDNLO_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECOBPDNLO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::NFBBEBJKMJF> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::NFBBEBJKMJF>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IKECOBPDNLO_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	::IKECOBPDNLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKECOBPDNLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKECOBPDNLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IKECOBPDNLO FADFPHHGOKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IKECOBPDNLO EIFONLCJOPG)
	{
		return ((::IKECOBPDNLO(*)(::FlatBuffers::ByteBuffer*, ::IKECOBPDNLO))((::PBYTE)hIl2Cpp + IKECOBPDNLO_FADFPHHGOKO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECOBPDNLO_GHKKNCCLPAN_OFFSET))(this);
	}
};
