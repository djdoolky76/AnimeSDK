#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJAFOILMKGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPCCJNCPPDO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CPCCJNCPPDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA680)
#define CPCCJNCPPDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPCCJNCPPDO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CPCCJNCPPDO_PHPMAJFLPJL_1_OFFSET UNITYSDK_OFFSET(0x19AD2E60)
#define CPCCJNCPPDO_PHPMAJFLPJL_OFFSET UNITYSDK_OFFSET(0x19AD2D60)
#define CPCCJNCPPDO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA6C0)
#define CPCCJNCPPDO___INIT_OFFSET UNITYSDK_OFFSET(0x7EA660)

inline static constexpr unsigned int CPCCJNCPPDO_TypeDefinitionIndex = 16441;

struct alignas(8) CPCCJNCPPDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCCJNCPPDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CPCCJNCPPDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCCJNCPPDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CPCCJNCPPDO PHPMAJFLPJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CPCCJNCPPDO EIFONLCJOPG)
	{
		return ((::CPCCJNCPPDO(*)(::FlatBuffers::ByteBuffer*, ::CPCCJNCPPDO))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_PHPMAJFLPJL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJAFOILMKGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJAFOILMKGO&))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CPCCJNCPPDO PHPMAJFLPJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCCJNCPPDO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCCJNCPPDO_PHPMAJFLPJL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
