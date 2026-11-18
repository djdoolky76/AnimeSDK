#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCDEELEFKPB.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIEIPJAECCK_AOKKDFMDEEM_1_OFFSET UNITYSDK_OFFSET(0x1A5635D0)
#define EIEIPJAECCK_AOKKDFMDEEM_OFFSET UNITYSDK_OFFSET(0x1A563570)
#define EIEIPJAECCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA870)
#define EIEIPJAECCK_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7FA8B0)
#define EIEIPJAECCK_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define EIEIPJAECCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIEIPJAECCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIEIPJAECCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA860)
#define EIEIPJAECCK___INIT_OFFSET UNITYSDK_OFFSET(0x7FA840)

inline static constexpr unsigned int EIEIPJAECCK_TypeDefinitionIndex = 15344;

struct alignas(8) EIEIPJAECCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEIPJAECCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEIPJAECCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEIPJAECCK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEIPJAECCK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EIEIPJAECCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIEIPJAECCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEIPJAECCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::LCDEELEFKPB> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::LCDEELEFKPB>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EIEIPJAECCK_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	static ::EIEIPJAECCK AOKKDFMDEEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIEIPJAECCK EIFONLCJOPG)
	{
		return ((::EIEIPJAECCK(*)(::FlatBuffers::ByteBuffer*, ::EIEIPJAECCK))((::PBYTE)hIl2Cpp + EIEIPJAECCK_AOKKDFMDEEM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EIEIPJAECCK AOKKDFMDEEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIEIPJAECCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEIPJAECCK_AOKKDFMDEEM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::LCDEELEFKPB> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::LCDEELEFKPB>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIEIPJAECCK_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}
};
