#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGJFMFAKCHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816ED0)
#define DGJFMFAKCHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGJFMFAKCHD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DGJFMFAKCHD_OIEJNANFKMH_1_OFFSET UNITYSDK_OFFSET(0x1B9A5CA0)
#define DGJFMFAKCHD_OIEJNANFKMH_OFFSET UNITYSDK_OFFSET(0x1B9A5C30)
#define DGJFMFAKCHD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816F10)
#define DGJFMFAKCHD___INIT_OFFSET UNITYSDK_OFFSET(0x816EB0)

inline static constexpr unsigned int DGJFMFAKCHD_TypeDefinitionIndex = 11956;

struct alignas(8) DGJFMFAKCHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGJFMFAKCHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DGJFMFAKCHD OIEJNANFKMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGJFMFAKCHD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_OIEJNANFKMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DGJFMFAKCHD OIEJNANFKMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DGJFMFAKCHD EIFONLCJOPG)
	{
		return ((::DGJFMFAKCHD(*)(::FlatBuffers::ByteBuffer*, ::DGJFMFAKCHD))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_OIEJNANFKMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DGJFMFAKCHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGJFMFAKCHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJFMFAKCHD_GHKKNCCLPAN_OFFSET))(this);
	}
};
