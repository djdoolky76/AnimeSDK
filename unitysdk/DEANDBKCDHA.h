#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFDMCKFFPCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEANDBKCDHA_AAMJDKIOAKL_1_OFFSET UNITYSDK_OFFSET(0x1A18C5C0)
#define DEANDBKCDHA_AAMJDKIOAKL_OFFSET UNITYSDK_OFFSET(0x1A18C550)
#define DEANDBKCDHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEANDBKCDHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5830)
#define DEANDBKCDHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEANDBKCDHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEANDBKCDHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5820)
#define DEANDBKCDHA___INIT_OFFSET UNITYSDK_OFFSET(0x7F5800)

inline static constexpr unsigned int DEANDBKCDHA_TypeDefinitionIndex = 13220;

struct alignas(8) DEANDBKCDHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEANDBKCDHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEANDBKCDHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEANDBKCDHA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DEANDBKCDHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEANDBKCDHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEANDBKCDHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DEANDBKCDHA AAMJDKIOAKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEANDBKCDHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEANDBKCDHA_AAMJDKIOAKL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFDMCKFFPCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFDMCKFFPCI&))((::PBYTE)hIl2Cpp + DEANDBKCDHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEANDBKCDHA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DEANDBKCDHA AAMJDKIOAKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEANDBKCDHA EIFONLCJOPG)
	{
		return ((::DEANDBKCDHA(*)(::FlatBuffers::ByteBuffer*, ::DEANDBKCDHA))((::PBYTE)hIl2Cpp + DEANDBKCDHA_AAMJDKIOAKL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
