#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IBAIPMAIDFI.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHJKDDCDDOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9373B0)
#define PHJKDDCDDOF_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x937380)
#define PHJKDDCDDOF_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define PHJKDDCDDOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHJKDDCDDOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHJKDDCDDOF_MKLOKGLDLFI_1_OFFSET UNITYSDK_OFFSET(0x1EDBFE60)
#define PHJKDDCDDOF_MKLOKGLDLFI_OFFSET UNITYSDK_OFFSET(0x1EDBFB00)
#define PHJKDDCDDOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9373A0)
#define PHJKDDCDDOF___INIT_OFFSET UNITYSDK_OFFSET(0x937360)

inline static constexpr unsigned int PHJKDDCDDOF_TypeDefinitionIndex = 17625;

struct alignas(8) PHJKDDCDDOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHJKDDCDDOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHJKDDCDDOF MKLOKGLDLFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHJKDDCDDOF EIFONLCJOPG)
	{
		return ((::PHJKDDCDDOF(*)(::FlatBuffers::ByteBuffer*, ::PHJKDDCDDOF))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_MKLOKGLDLFI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::IBAIPMAIDFI> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::IBAIPMAIDFI>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::System::Nullable_1<::IBAIPMAIDFI> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::IBAIPMAIDFI>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PHJKDDCDDOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHJKDDCDDOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHJKDDCDDOF MKLOKGLDLFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHJKDDCDDOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHJKDDCDDOF_MKLOKGLDLFI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
