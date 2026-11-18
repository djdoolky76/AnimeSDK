#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHLPENGNGJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFHEBFFHOCL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFHEBFFHOCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8055E0)
#define NFHEBFFHOCL_CKCFDJHEJFC_1_OFFSET UNITYSDK_OFFSET(0x1AD7D820)
#define NFHEBFFHOCL_CKCFDJHEJFC_OFFSET UNITYSDK_OFFSET(0x1AD7D7B0)
#define NFHEBFFHOCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFHEBFFHOCL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFHEBFFHOCL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8055D0)
#define NFHEBFFHOCL___INIT_OFFSET UNITYSDK_OFFSET(0x8055B0)

inline static constexpr unsigned int NFHEBFFHOCL_TypeDefinitionIndex = 11542;

struct alignas(8) NFHEBFFHOCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFHEBFFHOCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NFHEBFFHOCL CKCFDJHEJFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFHEBFFHOCL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_CKCFDJHEJFC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NFHEBFFHOCL CKCFDJHEJFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFHEBFFHOCL EIFONLCJOPG)
	{
		return ((::NFHEBFFHOCL(*)(::FlatBuffers::ByteBuffer*, ::NFHEBFFHOCL))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_CKCFDJHEJFC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NFHEBFFHOCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFHEBFFHOCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHLPENGNGJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHLPENGNGJD&))((::PBYTE)hIl2Cpp + NFHEBFFHOCL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
