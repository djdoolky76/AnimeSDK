#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOLAOMGCHOM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOLAOMGCHOM_AMNAKJEAHBK_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define JOLAOMGCHOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOLAOMGCHOM_BIEAPFPEIMC_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JOLAOMGCHOM_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define JOLAOMGCHOM_DKFHCIMLHLG_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define JOLAOMGCHOM_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JOLAOMGCHOM_GDODICDEMIL_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JOLAOMGCHOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOLAOMGCHOM_GFLDKICPJNK_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define JOLAOMGCHOM_JDACBPPKJNL_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JOLAOMGCHOM_KHIOLBBOLFA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JOLAOMGCHOM_KNNGBGKOBHP_OFFSET UNITYSDK_OFFSET(0x761240)
#define JOLAOMGCHOM_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x754D50)
#define JOLAOMGCHOM_MHJGDDBMBIB_OFFSET UNITYSDK_OFFSET(0x755190)
#define JOLAOMGCHOM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B89EBA0)
#define JOLAOMGCHOM_OOKEEBBPFIF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JOLAOMGCHOM_POGDKJNPPOM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JOLAOMGCHOM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOLAOMGCHOM_TypeDefinitionIndex = 14973;

struct alignas(4) JOLAOMGCHOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOLAOMGCHOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GDODICDEMIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_GDODICDEMIL_OFFSET))(this);
	}

	::System::Int32 AMNAKJEAHBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_AMNAKJEAHBK_OFFSET))(this);
	}

	::System::Boolean JDACBPPKJNL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_JDACBPPKJNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* POGDKJNPPOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_POGDKJNPPOM_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 KNNGBGKOBHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_KNNGBGKOBHP_OFFSET))(this);
	}

	/*
	::JOLAOMGCHOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOLAOMGCHOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MHJGDDBMBIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_MHJGDDBMBIB_OFFSET))(this);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::Boolean DKFHCIMLHLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_DKFHCIMLHLG_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JOLAOMGCHOM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOLAOMGCHOM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BIEAPFPEIMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_BIEAPFPEIMC_OFFSET))(this);
	}

	::System::Boolean GFLDKICPJNK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_GFLDKICPJNK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* OOKEEBBPFIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_OOKEEBBPFIF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* KHIOLBBOLFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOMGCHOM_KHIOLBBOLFA_OFFSET))(this);
	}
};
