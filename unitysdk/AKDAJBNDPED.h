#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKDAJBNDPED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763EA0)
#define AKDAJBNDPED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKDAJBNDPED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKDAJBNDPED_PCGFLCBGONH_1_OFFSET UNITYSDK_OFFSET(0x15772DD0)
#define AKDAJBNDPED_PCGFLCBGONH_OFFSET UNITYSDK_OFFSET(0x15772D10)
#define AKDAJBNDPED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x763EE0)
#define AKDAJBNDPED___INIT_OFFSET UNITYSDK_OFFSET(0x763E80)

inline static constexpr unsigned int AKDAJBNDPED_TypeDefinitionIndex = 15019;

struct alignas(8) AKDAJBNDPED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDAJBNDPED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDAJBNDPED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AKDAJBNDPED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKDAJBNDPED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDAJBNDPED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AKDAJBNDPED PCGFLCBGONH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKDAJBNDPED EIFONLCJOPG)
	{
		return ((::AKDAJBNDPED(*)(::FlatBuffers::ByteBuffer*, ::AKDAJBNDPED))((::PBYTE)hIl2Cpp + AKDAJBNDPED_PCGFLCBGONH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDAJBNDPED_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDAJBNDPED_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AKDAJBNDPED PCGFLCBGONH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKDAJBNDPED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKDAJBNDPED_PCGFLCBGONH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
