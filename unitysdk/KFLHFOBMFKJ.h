#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/KHNDKLFINDF.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KFLHFOBMFKJ_AAGEBNPPIEL_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define KFLHFOBMFKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFLHFOBMFKJ_CALCPNKDGMK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KFLHFOBMFKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFLHFOBMFKJ_HECOFOGEHAH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFLHFOBMFKJ_HHFBLFIMKEP_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KFLHFOBMFKJ_IFPBCEGIONC_OFFSET UNITYSDK_OFFSET(0x761000)
#define KFLHFOBMFKJ_KHKGLHFGHPO_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define KFLHFOBMFKJ_NMCEOAHLFOG_OFFSET UNITYSDK_OFFSET(0x7607D0)
#define KFLHFOBMFKJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DE5810)
#define KFLHFOBMFKJ_PFHHHDFDLOE_OFFSET UNITYSDK_OFFSET(0x760F60)
#define KFLHFOBMFKJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFLHFOBMFKJ_TypeDefinitionIndex = 15957;

struct alignas(4) KFLHFOBMFKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PFHHHDFDLOE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_PFHHHDFDLOE_OFFSET))(this);
	}

	::System::String* IFPBCEGIONC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_IFPBCEGIONC_OFFSET))(this);
	}

	::System::Int32 NMCEOAHLFOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_NMCEOAHLFOG_OFFSET))(this);
	}

	/*
	::KFLHFOBMFKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFLHFOBMFKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CALCPNKDGMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_CALCPNKDGMK_OFFSET))(this);
	}

	/*
	static ::KFLHFOBMFKJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFLHFOBMFKJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HECOFOGEHAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_HECOFOGEHAH_OFFSET))(this);
	}

	::KHNDKLFINDF AAGEBNPPIEL()
	{
		return ((::KHNDKLFINDF(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_AAGEBNPPIEL_OFFSET))(this);
	}

	::System::Boolean KHKGLHFGHPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_KHKGLHFGHPO_OFFSET))(this);
	}

	::System::String* HHFBLFIMKEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLHFOBMFKJ_HHFBLFIMKEP_OFFSET))(this);
	}
};
