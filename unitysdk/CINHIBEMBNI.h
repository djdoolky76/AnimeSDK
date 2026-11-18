#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFFHNJOACFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CINHIBEMBNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CINHIBEMBNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D07E0)
#define CINHIBEMBNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CINHIBEMBNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CINHIBEMBNI_JPGCKNEPPIN_1_OFFSET UNITYSDK_OFFSET(0x1878B090)
#define CINHIBEMBNI_JPGCKNEPPIN_OFFSET UNITYSDK_OFFSET(0x1878B020)
#define CINHIBEMBNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D07D0)
#define CINHIBEMBNI___INIT_OFFSET UNITYSDK_OFFSET(0x7D07B0)

inline static constexpr unsigned int CINHIBEMBNI_TypeDefinitionIndex = 11010;

struct alignas(8) CINHIBEMBNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINHIBEMBNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CINHIBEMBNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CINHIBEMBNI JPGCKNEPPIN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CINHIBEMBNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CINHIBEMBNI_JPGCKNEPPIN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINHIBEMBNI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINHIBEMBNI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CINHIBEMBNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CINHIBEMBNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CINHIBEMBNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFFHNJOACFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFFHNJOACFI&))((::PBYTE)hIl2Cpp + CINHIBEMBNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CINHIBEMBNI JPGCKNEPPIN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CINHIBEMBNI EIFONLCJOPG)
	{
		return ((::CINHIBEMBNI(*)(::FlatBuffers::ByteBuffer*, ::CINHIBEMBNI))((::PBYTE)hIl2Cpp + CINHIBEMBNI_JPGCKNEPPIN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
