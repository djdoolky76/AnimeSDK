#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPMGMDOHJKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJFNGKBIFPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JJFNGKBIFPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C250)
#define JJFNGKBIFPE_BPGGAMKJHOG_1_OFFSET UNITYSDK_OFFSET(0x1BAFB110)
#define JJFNGKBIFPE_BPGGAMKJHOG_OFFSET UNITYSDK_OFFSET(0x1BAFAFD0)
#define JJFNGKBIFPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJFNGKBIFPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JJFNGKBIFPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C290)
#define JJFNGKBIFPE___INIT_OFFSET UNITYSDK_OFFSET(0x81C230)

inline static constexpr unsigned int JJFNGKBIFPE_TypeDefinitionIndex = 13919;

struct alignas(8) JJFNGKBIFPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJFNGKBIFPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JJFNGKBIFPE BPGGAMKJHOG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JJFNGKBIFPE EIFONLCJOPG)
	{
		return ((::JJFNGKBIFPE(*)(::FlatBuffers::ByteBuffer*, ::JJFNGKBIFPE))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_BPGGAMKJHOG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JJFNGKBIFPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJFNGKBIFPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPMGMDOHJKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPMGMDOHJKF&))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JJFNGKBIFPE BPGGAMKJHOG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJFNGKBIFPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_BPGGAMKJHOG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFNGKBIFPE_GHKKNCCLPAN_OFFSET))(this);
	}
};
