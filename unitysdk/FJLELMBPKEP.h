#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOCHOMLHPPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJLELMBPKEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJLELMBPKEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808610)
#define FJLELMBPKEP_CKCPLLAKAOO_1_OFFSET UNITYSDK_OFFSET(0x1ADE6F40)
#define FJLELMBPKEP_CKCPLLAKAOO_OFFSET UNITYSDK_OFFSET(0x1ADE6EA0)
#define FJLELMBPKEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJLELMBPKEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJLELMBPKEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x808600)
#define FJLELMBPKEP___INIT_OFFSET UNITYSDK_OFFSET(0x8085E0)

inline static constexpr unsigned int FJLELMBPKEP_TypeDefinitionIndex = 10789;

struct alignas(8) FJLELMBPKEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLELMBPKEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLELMBPKEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FJLELMBPKEP CKCPLLAKAOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJLELMBPKEP EIFONLCJOPG)
	{
		return ((::FJLELMBPKEP(*)(::FlatBuffers::ByteBuffer*, ::FJLELMBPKEP))((::PBYTE)hIl2Cpp + FJLELMBPKEP_CKCPLLAKAOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FJLELMBPKEP CKCPLLAKAOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJLELMBPKEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLELMBPKEP_CKCPLLAKAOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLELMBPKEP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FJLELMBPKEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJLELMBPKEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJLELMBPKEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLELMBPKEP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOCHOMLHPPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOCHOMLHPPI&))((::PBYTE)hIl2Cpp + FJLELMBPKEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
