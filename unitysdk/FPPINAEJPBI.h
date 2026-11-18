#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EIAFBAEBLMD.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPPINAEJPBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC260)
#define FPPINAEJPBI_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7FC2A0)
#define FPPINAEJPBI_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define FPPINAEJPBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPPINAEJPBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FPPINAEJPBI_MPKGMCJGPEN_1_OFFSET UNITYSDK_OFFSET(0x1A5ACBE0)
#define FPPINAEJPBI_MPKGMCJGPEN_OFFSET UNITYSDK_OFFSET(0x1A5ACB80)
#define FPPINAEJPBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC2C0)
#define FPPINAEJPBI___INIT_OFFSET UNITYSDK_OFFSET(0x7FC240)

inline static constexpr unsigned int FPPINAEJPBI_TypeDefinitionIndex = 11344;

struct alignas(8) FPPINAEJPBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINAEJPBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPPINAEJPBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FPPINAEJPBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPPINAEJPBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPPINAEJPBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::EIAFBAEBLMD> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::EIAFBAEBLMD>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FPPINAEJPBI_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINAEJPBI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::EIAFBAEBLMD> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::EIAFBAEBLMD>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPPINAEJPBI_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::FPPINAEJPBI MPKGMCJGPEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FPPINAEJPBI EIFONLCJOPG)
	{
		return ((::FPPINAEJPBI(*)(::FlatBuffers::ByteBuffer*, ::FPPINAEJPBI))((::PBYTE)hIl2Cpp + FPPINAEJPBI_MPKGMCJGPEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINAEJPBI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FPPINAEJPBI MPKGMCJGPEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPPINAEJPBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPPINAEJPBI_MPKGMCJGPEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
