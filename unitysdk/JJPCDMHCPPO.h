#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJKMIJNCMDE.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJPCDMHCPPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8BB0)
#define JJPCDMHCPPO_DCELLCOKLBF_1_OFFSET UNITYSDK_OFFSET(0x1748F1D0)
#define JJPCDMHCPPO_DCELLCOKLBF_OFFSET UNITYSDK_OFFSET(0x1748F160)
#define JJPCDMHCPPO_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7A8B90)
#define JJPCDMHCPPO_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define JJPCDMHCPPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJPCDMHCPPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JJPCDMHCPPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8BF0)
#define JJPCDMHCPPO___INIT_OFFSET UNITYSDK_OFFSET(0x7A8B70)

inline static constexpr unsigned int JJPCDMHCPPO_TypeDefinitionIndex = 14035;

struct alignas(8) JJPCDMHCPPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJPCDMHCPPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::EJKMIJNCMDE> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::EJKMIJNCMDE>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JJPCDMHCPPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJPCDMHCPPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::EJKMIJNCMDE> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::EJKMIJNCMDE>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::JJPCDMHCPPO DCELLCOKLBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJPCDMHCPPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_DCELLCOKLBF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JJPCDMHCPPO DCELLCOKLBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JJPCDMHCPPO EIFONLCJOPG)
	{
		return ((::JJPCDMHCPPO(*)(::FlatBuffers::ByteBuffer*, ::JJPCDMHCPPO))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_DCELLCOKLBF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPCDMHCPPO_PPOMNIFACOL_OFFSET))(this);
	}
};
