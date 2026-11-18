#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NALFJGBLGHD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJBEBMKPEJJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJBEBMKPEJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EEE30)
#define KJBEBMKPEJJ_FKGEJNFLLEL_1_OFFSET UNITYSDK_OFFSET(0x19D99B80)
#define KJBEBMKPEJJ_FKGEJNFLLEL_OFFSET UNITYSDK_OFFSET(0x19D999E0)
#define KJBEBMKPEJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJBEBMKPEJJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJBEBMKPEJJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EEE70)
#define KJBEBMKPEJJ___INIT_OFFSET UNITYSDK_OFFSET(0x7EEE10)

inline static constexpr unsigned int KJBEBMKPEJJ_TypeDefinitionIndex = 15015;

struct alignas(8) KJBEBMKPEJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KJBEBMKPEJJ FKGEJNFLLEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJBEBMKPEJJ EIFONLCJOPG)
	{
		return ((::KJBEBMKPEJJ(*)(::FlatBuffers::ByteBuffer*, ::KJBEBMKPEJJ))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_FKGEJNFLLEL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KJBEBMKPEJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJBEBMKPEJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NALFJGBLGHD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NALFJGBLGHD&))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KJBEBMKPEJJ FKGEJNFLLEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJBEBMKPEJJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJBEBMKPEJJ_FKGEJNFLLEL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
