#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MFCKNAKJJKA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MFCKNAKJJKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MFCKNAKJJKA_BKBDOJILENP_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define MFCKNAKJJKA_CALCPNKDGMK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MFCKNAKJJKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFCKNAKJJKA_HFDCDPMCNMM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MFCKNAKJJKA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MFCKNAKJJKA_KHANGHKBBEB_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define MFCKNAKJJKA_MGDBJENBCAK_OFFSET UNITYSDK_OFFSET(0x758200)
#define MFCKNAKJJKA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB08C50)
#define MFCKNAKJJKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MFCKNAKJJKA_TypeDefinitionIndex = 13094;

struct alignas(4) MFCKNAKJJKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFCKNAKJJKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HFDCDPMCNMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_HFDCDPMCNMM_OFFSET))(this);
	}

	::System::Int32 CALCPNKDGMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_CALCPNKDGMK_OFFSET))(this);
	}

	/*
	static ::MFCKNAKJJKA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MFCKNAKJJKA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KHANGHKBBEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_KHANGHKBBEB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::MFCKNAKJJKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFCKNAKJJKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 BKBDOJILENP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_BKBDOJILENP_OFFSET))(this);
	}

	::System::Boolean MGDBJENBCAK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MFCKNAKJJKA_MGDBJENBCAK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
