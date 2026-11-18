#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LOBFIBAGDMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFJGLJNOMCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFJGLJNOMCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2630)
#define CFJGLJNOMCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFJGLJNOMCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFJGLJNOMCD_POBEIAPKBIP_1_OFFSET UNITYSDK_OFFSET(0x19501190)
#define CFJGLJNOMCD_POBEIAPKBIP_OFFSET UNITYSDK_OFFSET(0x195010F0)
#define CFJGLJNOMCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2670)
#define CFJGLJNOMCD___INIT_OFFSET UNITYSDK_OFFSET(0x7E2610)

inline static constexpr unsigned int CFJGLJNOMCD_TypeDefinitionIndex = 15124;

struct alignas(8) CFJGLJNOMCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJGLJNOMCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CFJGLJNOMCD POBEIAPKBIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFJGLJNOMCD EIFONLCJOPG)
	{
		return ((::CFJGLJNOMCD(*)(::FlatBuffers::ByteBuffer*, ::CFJGLJNOMCD))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_POBEIAPKBIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CFJGLJNOMCD POBEIAPKBIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFJGLJNOMCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_POBEIAPKBIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CFJGLJNOMCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFJGLJNOMCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LOBFIBAGDMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LOBFIBAGDMN&))((::PBYTE)hIl2Cpp + CFJGLJNOMCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
