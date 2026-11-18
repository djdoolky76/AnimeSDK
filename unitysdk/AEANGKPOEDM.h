#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DGGPLOHAOLI.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEANGKPOEDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760D00)
#define AEANGKPOEDM_DCMDADMHMPF_1_OFFSET UNITYSDK_OFFSET(0x1571CC50)
#define AEANGKPOEDM_DCMDADMHMPF_OFFSET UNITYSDK_OFFSET(0x1571CBE0)
#define AEANGKPOEDM_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x760C20)
#define AEANGKPOEDM_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define AEANGKPOEDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEANGKPOEDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEANGKPOEDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760C40)
#define AEANGKPOEDM___INIT_OFFSET UNITYSDK_OFFSET(0x760C00)

inline static constexpr unsigned int AEANGKPOEDM_TypeDefinitionIndex = 16650;

struct alignas(8) AEANGKPOEDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANGKPOEDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEANGKPOEDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::DGGPLOHAOLI> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::DGGPLOHAOLI>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AEANGKPOEDM_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	static ::AEANGKPOEDM DCMDADMHMPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEANGKPOEDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEANGKPOEDM_DCMDADMHMPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANGKPOEDM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AEANGKPOEDM DCMDADMHMPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEANGKPOEDM EIFONLCJOPG)
	{
		return ((::AEANGKPOEDM(*)(::FlatBuffers::ByteBuffer*, ::AEANGKPOEDM))((::PBYTE)hIl2Cpp + AEANGKPOEDM_DCMDADMHMPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::DGGPLOHAOLI> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::DGGPLOHAOLI>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEANGKPOEDM_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANGKPOEDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AEANGKPOEDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEANGKPOEDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEANGKPOEDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
