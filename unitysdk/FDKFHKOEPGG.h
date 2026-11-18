#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OINPIKEOCFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDKFHKOEPGG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FDKFHKOEPGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766B90)
#define FDKFHKOEPGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDKFHKOEPGG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FDKFHKOEPGG_NOFKLJLIJOA_1_OFFSET UNITYSDK_OFFSET(0x157BA090)
#define FDKFHKOEPGG_NOFKLJLIJOA_OFFSET UNITYSDK_OFFSET(0x157B9F90)
#define FDKFHKOEPGG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766BD0)
#define FDKFHKOEPGG___INIT_OFFSET UNITYSDK_OFFSET(0x766B70)

inline static constexpr unsigned int FDKFHKOEPGG_TypeDefinitionIndex = 12272;

struct alignas(8) FDKFHKOEPGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDKFHKOEPGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FDKFHKOEPGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDKFHKOEPGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FDKFHKOEPGG NOFKLJLIJOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FDKFHKOEPGG EIFONLCJOPG)
	{
		return ((::FDKFHKOEPGG(*)(::FlatBuffers::ByteBuffer*, ::FDKFHKOEPGG))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_NOFKLJLIJOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OINPIKEOCFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OINPIKEOCFB&))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FDKFHKOEPGG NOFKLJLIJOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDKFHKOEPGG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDKFHKOEPGG_NOFKLJLIJOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
