#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFDPLIPONKB.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAPNCBHJBBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA710)
#define DAPNCBHJBBO_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7EA760)
#define DAPNCBHJBBO_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define DAPNCBHJBBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAPNCBHJBBO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAPNCBHJBBO_NFEAJFAMHAN_1_OFFSET UNITYSDK_OFFSET(0x19AD37C0)
#define DAPNCBHJBBO_NFEAJFAMHAN_OFFSET UNITYSDK_OFFSET(0x19AD3470)
#define DAPNCBHJBBO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA750)
#define DAPNCBHJBBO___INIT_OFFSET UNITYSDK_OFFSET(0x7EA6F0)

inline static constexpr unsigned int DAPNCBHJBBO_TypeDefinitionIndex = 13056;

struct alignas(8) DAPNCBHJBBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPNCBHJBBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DAPNCBHJBBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAPNCBHJBBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::DFDPLIPONKB> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::DFDPLIPONKB>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::DAPNCBHJBBO NFEAJFAMHAN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAPNCBHJBBO EIFONLCJOPG)
	{
		return ((::DAPNCBHJBBO(*)(::FlatBuffers::ByteBuffer*, ::DAPNCBHJBBO))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_NFEAJFAMHAN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::DFDPLIPONKB> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::DFDPLIPONKB>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DAPNCBHJBBO NFEAJFAMHAN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAPNCBHJBBO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAPNCBHJBBO_NFEAJFAMHAN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
