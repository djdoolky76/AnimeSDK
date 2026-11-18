#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JBJJIMOJKLC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBGAANMJOMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FBGAANMJOMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2D00)
#define FBGAANMJOMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBGAANMJOMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBGAANMJOMI_HHOJHGPHAJF_1_OFFSET UNITYSDK_OFFSET(0x17AAE980)
#define FBGAANMJOMI_HHOJHGPHAJF_OFFSET UNITYSDK_OFFSET(0x17AAE920)
#define FBGAANMJOMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2CF0)
#define FBGAANMJOMI___INIT_OFFSET UNITYSDK_OFFSET(0x7B2CD0)

inline static constexpr unsigned int FBGAANMJOMI_TypeDefinitionIndex = 17572;

struct alignas(8) FBGAANMJOMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAANMJOMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGAANMJOMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JBJJIMOJKLC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBJJIMOJKLC&))((::PBYTE)hIl2Cpp + FBGAANMJOMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAANMJOMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FBGAANMJOMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBGAANMJOMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGAANMJOMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBGAANMJOMI HHOJHGPHAJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBGAANMJOMI EIFONLCJOPG)
	{
		return ((::FBGAANMJOMI(*)(::FlatBuffers::ByteBuffer*, ::FBGAANMJOMI))((::PBYTE)hIl2Cpp + FBGAANMJOMI_HHOJHGPHAJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FBGAANMJOMI HHOJHGPHAJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBGAANMJOMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBGAANMJOMI_HHOJHGPHAJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAANMJOMI_GHKKNCCLPAN_OFFSET))(this);
	}
};
