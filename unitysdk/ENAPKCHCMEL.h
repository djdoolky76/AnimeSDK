#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ENAPKCHCMEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ENAPKCHCMEL_CFLJONLJGHD_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define ENAPKCHCMEL_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x758320)
#define ENAPKCHCMEL_EJJCIFHNLJE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ENAPKCHCMEL_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x756440)
#define ENAPKCHCMEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENAPKCHCMEL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define ENAPKCHCMEL_MGKAEFEIGAM_OFFSET UNITYSDK_OFFSET(0x754970)
#define ENAPKCHCMEL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A59F950)
#define ENAPKCHCMEL_OLFCIFHIFEK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define ENAPKCHCMEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ENAPKCHCMEL_TypeDefinitionIndex = 11406;

struct alignas(4) ENAPKCHCMEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENAPKCHCMEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::ENAPKCHCMEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENAPKCHCMEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OLFCIFHIFEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_OLFCIFHIFEK_OFFSET))(this);
	}

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_EPBDFBNKOCD_OFFSET))(this);
	}

	/*
	static ::ENAPKCHCMEL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ENAPKCHCMEL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CFLJONLJGHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_CFLJONLJGHD_OFFSET))(this);
	}

	::System::Int32 EJJCIFHNLJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_EJJCIFHNLJE_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::Int32 MGKAEFEIGAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPKCHCMEL_MGKAEFEIGAM_OFFSET))(this);
	}
};
