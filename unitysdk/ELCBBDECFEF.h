#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ELCBBDECFEF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ELCBBDECFEF_AFMDKMKOGFL_OFFSET UNITYSDK_OFFSET(0x757190)
#define ELCBBDECFEF_AKOACLEPNAE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ELCBBDECFEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ELCBBDECFEF_BODHAHLECAL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ELCBBDECFEF_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ELCBBDECFEF_FFGIOBFACHI_OFFSET UNITYSDK_OFFSET(0x758320)
#define ELCBBDECFEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELCBBDECFEF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define ELCBBDECFEF_LGDGKLNNDBN_OFFSET UNITYSDK_OFFSET(0x755190)
#define ELCBBDECFEF_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define ELCBBDECFEF_NHAOAOCDLFN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ELCBBDECFEF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9BABB0)
#define ELCBBDECFEF_OBHAAPLHIBB_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define ELCBBDECFEF_PGLFDLIPGHK_OFFSET UNITYSDK_OFFSET(0x761710)
#define ELCBBDECFEF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ELCBBDECFEF_TypeDefinitionIndex = 14460;

struct alignas(4) ELCBBDECFEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELCBBDECFEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ELCBBDECFEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELCBBDECFEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELCBBDECFEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PGLFDLIPGHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_PGLFDLIPGHK_OFFSET))(this);
	}

	::System::String* AFMDKMKOGFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_AFMDKMKOGFL_OFFSET))(this);
	}

	::System::String* FFGIOBFACHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_FFGIOBFACHI_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::ELCBBDECFEF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ELCBBDECFEF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ELCBBDECFEF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* AKOACLEPNAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_AKOACLEPNAE_OFFSET))(this);
	}

	::System::Int32 LGDGKLNNDBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_LGDGKLNNDBN_OFFSET))(this);
	}

	::System::String* BODHAHLECAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_BODHAHLECAL_OFFSET))(this);
	}

	::System::String* NHAOAOCDLFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_NHAOAOCDLFN_OFFSET))(this);
	}

	::System::Boolean OBHAAPLHIBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCBBDECFEF_OBHAAPLHIBB_OFFSET))(this);
	}
};
