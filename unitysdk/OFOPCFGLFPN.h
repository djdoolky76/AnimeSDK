#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OFOPCFGLFPN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFOPCFGLFPN_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OFOPCFGLFPN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFOPCFGLFPN_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFOPCFGLFPN_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OFOPCFGLFPN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195C3C60)
#define OFOPCFGLFPN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFOPCFGLFPN_TypeDefinitionIndex = 15413;

struct alignas(4) OFOPCFGLFPN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFOPCFGLFPN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::OFOPCFGLFPN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFOPCFGLFPN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::OFOPCFGLFPN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFOPCFGLFPN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFOPCFGLFPN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
