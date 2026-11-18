#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLDCCFDJDBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDFNDLGLNIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDFNDLGLNIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8154A0)
#define KDFNDLGLNIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDFNDLGLNIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDFNDLGLNIO_PLAKMCHPNHL_1_OFFSET UNITYSDK_OFFSET(0x1B8A1CB0)
#define KDFNDLGLNIO_PLAKMCHPNHL_OFFSET UNITYSDK_OFFSET(0x1B8A1BF0)
#define KDFNDLGLNIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8154E0)
#define KDFNDLGLNIO___INIT_OFFSET UNITYSDK_OFFSET(0x815480)

inline static constexpr unsigned int KDFNDLGLNIO_TypeDefinitionIndex = 12032;

struct alignas(8) KDFNDLGLNIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFNDLGLNIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLDCCFDJDBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLDCCFDJDBH&))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KDFNDLGLNIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDFNDLGLNIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDFNDLGLNIO PLAKMCHPNHL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDFNDLGLNIO EIFONLCJOPG)
	{
		return ((::KDFNDLGLNIO(*)(::FlatBuffers::ByteBuffer*, ::KDFNDLGLNIO))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_PLAKMCHPNHL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KDFNDLGLNIO PLAKMCHPNHL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDFNDLGLNIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFNDLGLNIO_PLAKMCHPNHL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
