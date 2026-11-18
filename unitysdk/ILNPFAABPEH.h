#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ILNPFAABPEH_AHLMBMPGMMH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ILNPFAABPEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ILNPFAABPEH_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x760820)
#define ILNPFAABPEH_ECHFFICBOLK_OFFSET UNITYSDK_OFFSET(0x761790)
#define ILNPFAABPEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILNPFAABPEH_IHFBAKIIHFD_OFFSET UNITYSDK_OFFSET(0x761000)
#define ILNPFAABPEH_JOCEHLCANBE_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define ILNPFAABPEH_LKALLJOBJPG_1_OFFSET UNITYSDK_OFFSET(0x1B7D0780)
#define ILNPFAABPEH_LKALLJOBJPG_OFFSET UNITYSDK_OFFSET(0x1B7D0720)
#define ILNPFAABPEH_NHGJPFDKKDJ_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define ILNPFAABPEH_OOLGDILKHDG_OFFSET UNITYSDK_OFFSET(0x756140)
#define ILNPFAABPEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ILNPFAABPEH_TypeDefinitionIndex = 9789;

struct alignas(4) ILNPFAABPEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILNPFAABPEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* NHGJPFDKKDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_NHGJPFDKKDJ_OFFSET))(this);
	}

	/*
	::ILNPFAABPEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILNPFAABPEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILNPFAABPEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IHFBAKIIHFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_IHFBAKIIHFD_OFFSET))(this);
	}

	::System::Boolean OOLGDILKHDG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ILNPFAABPEH_OOLGDILKHDG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AHLMBMPGMMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_AHLMBMPGMMH_OFFSET))(this);
	}

	::System::Int32 JOCEHLCANBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_JOCEHLCANBE_OFFSET))(this);
	}

	/*
	static ::ILNPFAABPEH LKALLJOBJPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILNPFAABPEH EIFONLCJOPG)
	{
		return ((::ILNPFAABPEH(*)(::FlatBuffers::ByteBuffer*, ::ILNPFAABPEH))((::PBYTE)hIl2Cpp + ILNPFAABPEH_LKALLJOBJPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ILNPFAABPEH LKALLJOBJPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILNPFAABPEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILNPFAABPEH_LKALLJOBJPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 ECHFFICBOLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPFAABPEH_ECHFFICBOLK_OFFSET))(this);
	}
};
