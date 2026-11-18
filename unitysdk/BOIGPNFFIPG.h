#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOIGPNFFIPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4ED0)
#define BOIGPNFFIPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOIGPNFFIPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOIGPNFFIPG_KMFJHCKNHJD_1_OFFSET UNITYSDK_OFFSET(0x1A170EF0)
#define BOIGPNFFIPG_KMFJHCKNHJD_OFFSET UNITYSDK_OFFSET(0x1A170E80)
#define BOIGPNFFIPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4F10)
#define BOIGPNFFIPG___INIT_OFFSET UNITYSDK_OFFSET(0x7F4EB0)

inline static constexpr unsigned int BOIGPNFFIPG_TypeDefinitionIndex = 14146;

struct alignas(8) BOIGPNFFIPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOIGPNFFIPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BOIGPNFFIPG KMFJHCKNHJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOIGPNFFIPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_KMFJHCKNHJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BOIGPNFFIPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOIGPNFFIPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BOIGPNFFIPG KMFJHCKNHJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOIGPNFFIPG EIFONLCJOPG)
	{
		return ((::BOIGPNFFIPG(*)(::FlatBuffers::ByteBuffer*, ::BOIGPNFFIPG))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_KMFJHCKNHJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGPNFFIPG_PPOMNIFACOL_OFFSET))(this);
	}
};
