#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NMBKLFKHNDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEPFJIDDHLD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CEPFJIDDHLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816A20)
#define CEPFJIDDHLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEPFJIDDHLD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEPFJIDDHLD_NCABMJBFEFD_1_OFFSET UNITYSDK_OFFSET(0x1B999050)
#define CEPFJIDDHLD_NCABMJBFEFD_OFFSET UNITYSDK_OFFSET(0x1B998F50)
#define CEPFJIDDHLD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816A60)
#define CEPFJIDDHLD___INIT_OFFSET UNITYSDK_OFFSET(0x816A00)

inline static constexpr unsigned int CEPFJIDDHLD_TypeDefinitionIndex = 13441;

struct alignas(8) CEPFJIDDHLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEPFJIDDHLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CEPFJIDDHLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEPFJIDDHLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CEPFJIDDHLD NCABMJBFEFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEPFJIDDHLD EIFONLCJOPG)
	{
		return ((::CEPFJIDDHLD(*)(::FlatBuffers::ByteBuffer*, ::CEPFJIDDHLD))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_NCABMJBFEFD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NMBKLFKHNDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NMBKLFKHNDK&))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CEPFJIDDHLD NCABMJBFEFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEPFJIDDHLD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_NCABMJBFEFD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPFJIDDHLD_GHKKNCCLPAN_OFFSET))(this);
	}
};
