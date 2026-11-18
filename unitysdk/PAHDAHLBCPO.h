#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAHDAHLBCPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4D30)
#define PAHDAHLBCPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAHDAHLBCPO_GGEAMKMPNCI_1_OFFSET UNITYSDK_OFFSET(0x17FE5430)
#define PAHDAHLBCPO_GGEAMKMPNCI_OFFSET UNITYSDK_OFFSET(0x17FE53C0)
#define PAHDAHLBCPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PAHDAHLBCPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4D20)
#define PAHDAHLBCPO___INIT_OFFSET UNITYSDK_OFFSET(0x7C4D00)

inline static constexpr unsigned int PAHDAHLBCPO_TypeDefinitionIndex = 16721;

struct alignas(8) PAHDAHLBCPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAHDAHLBCPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PAHDAHLBCPO GGEAMKMPNCI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAHDAHLBCPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_GGEAMKMPNCI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PAHDAHLBCPO GGEAMKMPNCI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PAHDAHLBCPO EIFONLCJOPG)
	{
		return ((::PAHDAHLBCPO(*)(::FlatBuffers::ByteBuffer*, ::PAHDAHLBCPO))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_GGEAMKMPNCI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PAHDAHLBCPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAHDAHLBCPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAHDAHLBCPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
