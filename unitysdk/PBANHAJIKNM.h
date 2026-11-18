#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PBANHAJIKNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PBANHAJIKNM_BKIFDEKEHOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PBANHAJIKNM_CHLELMFANEL_OFFSET UNITYSDK_OFFSET(0x761240)
#define PBANHAJIKNM_EGGCACEKBEE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PBANHAJIKNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBANHAJIKNM_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PBANHAJIKNM_JKNCDEBINBM_OFFSET UNITYSDK_OFFSET(0x757190)
#define PBANHAJIKNM_KKPCMMCJPMB_OFFSET UNITYSDK_OFFSET(0x757290)
#define PBANHAJIKNM_MMKNAOHKDLD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PBANHAJIKNM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD95890)
#define PBANHAJIKNM_PKPDKJJADFG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PBANHAJIKNM_PNBHJLJFLPB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PBANHAJIKNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PBANHAJIKNM_TypeDefinitionIndex = 14747;

struct alignas(4) PBANHAJIKNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBANHAJIKNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PKPDKJJADFG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PBANHAJIKNM_PKPDKJJADFG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CHLELMFANEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_CHLELMFANEL_OFFSET))(this);
	}

	::System::String* KKPCMMCJPMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_KKPCMMCJPMB_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::PBANHAJIKNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBANHAJIKNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBANHAJIKNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PNBHJLJFLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_PNBHJLJFLPB_OFFSET))(this);
	}

	::System::String* JKNCDEBINBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_JKNCDEBINBM_OFFSET))(this);
	}

	::System::Int32 EGGCACEKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_EGGCACEKBEE_OFFSET))(this);
	}

	::System::Int32 BKIFDEKEHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_BKIFDEKEHOH_OFFSET))(this);
	}

	::System::String* MMKNAOHKDLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANHAJIKNM_MMKNAOHKDLD_OFFSET))(this);
	}

	/*
	static ::PBANHAJIKNM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PBANHAJIKNM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PBANHAJIKNM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
