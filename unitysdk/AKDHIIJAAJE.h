#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FIBCPAKIAME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKDHIIJAAJE_AHHGKINNGOH_1_OFFSET UNITYSDK_OFFSET(0x19ABCF70)
#define AKDHIIJAAJE_AHHGKINNGOH_OFFSET UNITYSDK_OFFSET(0x19ABCEB0)
#define AKDHIIJAAJE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AKDHIIJAAJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9C50)
#define AKDHIIJAAJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKDHIIJAAJE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKDHIIJAAJE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9C90)
#define AKDHIIJAAJE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9CA0)
#define AKDHIIJAAJE___INIT_OFFSET UNITYSDK_OFFSET(0x7E9C30)

inline static constexpr unsigned int AKDHIIJAAJE_TypeDefinitionIndex = 9463;

struct alignas(8) AKDHIIJAAJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDHIIJAAJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AKDHIIJAAJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKDHIIJAAJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FIBCPAKIAME& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIBCPAKIAME&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AKDHIIJAAJE AHHGKINNGOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKDHIIJAAJE EIFONLCJOPG)
	{
		return ((::AKDHIIJAAJE(*)(::FlatBuffers::ByteBuffer*, ::AKDHIIJAAJE))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_AHHGKINNGOH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AKDHIIJAAJE AHHGKINNGOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKDHIIJAAJE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_AHHGKINNGOH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FIBCPAKIAME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIBCPAKIAME&))((::PBYTE)hIl2Cpp + AKDHIIJAAJE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
