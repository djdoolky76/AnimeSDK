#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BEJBBPHHGNO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HADBMAKIOKP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HADBMAKIOKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D48C0)
#define HADBMAKIOKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HADBMAKIOKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HADBMAKIOKP_JDOENBDLLFP_1_OFFSET UNITYSDK_OFFSET(0x18BA8E60)
#define HADBMAKIOKP_JDOENBDLLFP_OFFSET UNITYSDK_OFFSET(0x18BA8C60)
#define HADBMAKIOKP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4900)
#define HADBMAKIOKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D48B0)
#define HADBMAKIOKP___INIT_OFFSET UNITYSDK_OFFSET(0x7D4890)

inline static constexpr unsigned int HADBMAKIOKP_TypeDefinitionIndex = 10970;

struct alignas(8) HADBMAKIOKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HADBMAKIOKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HADBMAKIOKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HADBMAKIOKP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HADBMAKIOKP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BEJBBPHHGNO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BEJBBPHHGNO&))((::PBYTE)hIl2Cpp + HADBMAKIOKP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HADBMAKIOKP JDOENBDLLFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HADBMAKIOKP EIFONLCJOPG)
	{
		return ((::HADBMAKIOKP(*)(::FlatBuffers::ByteBuffer*, ::HADBMAKIOKP))((::PBYTE)hIl2Cpp + HADBMAKIOKP_JDOENBDLLFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HADBMAKIOKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HADBMAKIOKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HADBMAKIOKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BEJBBPHHGNO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BEJBBPHHGNO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HADBMAKIOKP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HADBMAKIOKP JDOENBDLLFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HADBMAKIOKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HADBMAKIOKP_JDOENBDLLFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
