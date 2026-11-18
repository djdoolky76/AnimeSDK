#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKNDOKMILAA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAONCDHOEHP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CAONCDHOEHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA180)
#define CAONCDHOEHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAONCDHOEHP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CAONCDHOEHP_LBBHJNLIACO_1_OFFSET UNITYSDK_OFFSET(0x19AC9B60)
#define CAONCDHOEHP_LBBHJNLIACO_OFFSET UNITYSDK_OFFSET(0x19AC9AC0)
#define CAONCDHOEHP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA1C0)
#define CAONCDHOEHP___INIT_OFFSET UNITYSDK_OFFSET(0x7EA160)

inline static constexpr unsigned int CAONCDHOEHP_TypeDefinitionIndex = 16893;

struct alignas(8) CAONCDHOEHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONCDHOEHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAONCDHOEHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CAONCDHOEHP LBBHJNLIACO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CAONCDHOEHP EIFONLCJOPG)
	{
		return ((::CAONCDHOEHP(*)(::FlatBuffers::ByteBuffer*, ::CAONCDHOEHP))((::PBYTE)hIl2Cpp + CAONCDHOEHP_LBBHJNLIACO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CAONCDHOEHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAONCDHOEHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAONCDHOEHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CAONCDHOEHP LBBHJNLIACO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAONCDHOEHP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAONCDHOEHP_LBBHJNLIACO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONCDHOEHP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IKNDOKMILAA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKNDOKMILAA&))((::PBYTE)hIl2Cpp + CAONCDHOEHP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAONCDHOEHP_PPOMNIFACOL_OFFSET))(this);
	}
};
