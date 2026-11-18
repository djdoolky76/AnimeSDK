#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENAPGGCGJGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNHCNBBEGJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNHCNBBEGJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810120)
#define KNHCNBBEGJB_COAFPPIFGHC_1_OFFSET UNITYSDK_OFFSET(0x1B644EB0)
#define KNHCNBBEGJB_COAFPPIFGHC_OFFSET UNITYSDK_OFFSET(0x1B644DF0)
#define KNHCNBBEGJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNHCNBBEGJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNHCNBBEGJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810160)
#define KNHCNBBEGJB___INIT_OFFSET UNITYSDK_OFFSET(0x810100)

inline static constexpr unsigned int KNHCNBBEGJB_TypeDefinitionIndex = 11803;

struct alignas(8) KNHCNBBEGJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNHCNBBEGJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KNHCNBBEGJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNHCNBBEGJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KNHCNBBEGJB COAFPPIFGHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNHCNBBEGJB EIFONLCJOPG)
	{
		return ((::KNHCNBBEGJB(*)(::FlatBuffers::ByteBuffer*, ::KNHCNBBEGJB))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_COAFPPIFGHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KNHCNBBEGJB COAFPPIFGHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNHCNBBEGJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_COAFPPIFGHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENAPGGCGJGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENAPGGCGJGD&))((::PBYTE)hIl2Cpp + KNHCNBBEGJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
