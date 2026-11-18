#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GPFBDLPIBBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGBKNLHJKJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BGBKNLHJKJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816600)
#define BGBKNLHJKJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGBKNLHJKJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BGBKNLHJKJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816640)
#define BGBKNLHJKJH_OIENOKEPIDL_1_OFFSET UNITYSDK_OFFSET(0x1B9907E0)
#define BGBKNLHJKJH_OIENOKEPIDL_OFFSET UNITYSDK_OFFSET(0x1B990770)
#define BGBKNLHJKJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816650)
#define BGBKNLHJKJH___INIT_OFFSET UNITYSDK_OFFSET(0x8165E0)

inline static constexpr unsigned int BGBKNLHJKJH_TypeDefinitionIndex = 13504;

struct alignas(8) BGBKNLHJKJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGBKNLHJKJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BGBKNLHJKJH OIENOKEPIDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGBKNLHJKJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_OIENOKEPIDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BGBKNLHJKJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGBKNLHJKJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GPFBDLPIBBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPFBDLPIBBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BGBKNLHJKJH OIENOKEPIDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BGBKNLHJKJH EIFONLCJOPG)
	{
		return ((::BGBKNLHJKJH(*)(::FlatBuffers::ByteBuffer*, ::BGBKNLHJKJH))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_OIENOKEPIDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GPFBDLPIBBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPFBDLPIBBE&))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKNLHJKJH_PPOMNIFACOL_OFFSET))(this);
	}
};
