#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BMHOICGHFPC_ACOBLMFFICN_OFFSET UNITYSDK_OFFSET(0x761240)
#define BMHOICGHFPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMHOICGHFPC_BKLGHKDOLIJ_OFFSET UNITYSDK_OFFSET(0x757330)
#define BMHOICGHFPC_DEFBCFPGMEA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BMHOICGHFPC_DIAAMGBOCNL_OFFSET UNITYSDK_OFFSET(0x757C60)
#define BMHOICGHFPC_EGMOPPKFGGO_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define BMHOICGHFPC_FAPOHAMAAJB_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define BMHOICGHFPC_FHDPJDOLDGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BMHOICGHFPC_FLPEKLGANDI_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define BMHOICGHFPC_FMLCFJJBKOH_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define BMHOICGHFPC_GCAMIKHKOOL_OFFSET UNITYSDK_OFFSET(0x755790)
#define BMHOICGHFPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMHOICGHFPC_GPIBFJOCBNB_OFFSET UNITYSDK_OFFSET(0x77AC70)
#define BMHOICGHFPC_HPKMJHJHBBK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BMHOICGHFPC_IBOMPNDJEFF_OFFSET UNITYSDK_OFFSET(0x755890)
#define BMHOICGHFPC_IFGOBPMGBNB_OFFSET UNITYSDK_OFFSET(0x755190)
#define BMHOICGHFPC_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x757290)
#define BMHOICGHFPC_KCLBMAAOMEM_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define BMHOICGHFPC_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMHOICGHFPC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B993330)
#define BMHOICGHFPC_OCJMJAIIFCJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define BMHOICGHFPC_PJDMKHEPIOI_OFFSET UNITYSDK_OFFSET(0x763920)
#define BMHOICGHFPC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMHOICGHFPC_TypeDefinitionIndex = 14455;

struct alignas(4) BMHOICGHFPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMHOICGHFPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IFGOBPMGBNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_IFGOBPMGBNB_OFFSET))(this);
	}

	::System::String* DEFBCFPGMEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_DEFBCFPGMEA_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 HPKMJHJHBBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_HPKMJHJHBBK_OFFSET))(this);
	}

	::System::Int32 FMLCFJJBKOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_FMLCFJJBKOH_OFFSET))(this);
	}

	::System::Single FLPEKLGANDI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_FLPEKLGANDI_OFFSET))(this);
	}

	::System::Int32 GCAMIKHKOOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_GCAMIKHKOOL_OFFSET))(this);
	}

	/*
	static ::BMHOICGHFPC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BMHOICGHFPC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BMHOICGHFPC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OCJMJAIIFCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_OCJMJAIIFCJ_OFFSET))(this);
	}

	::System::Int32 FHDPJDOLDGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_FHDPJDOLDGH_OFFSET))(this);
	}

	/*
	::BMHOICGHFPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMHOICGHFPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMHOICGHFPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EGMOPPKFGGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_EGMOPPKFGGO_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_IOIENACFPEP_OFFSET))(this);
	}

	::System::Int32 IBOMPNDJEFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_IBOMPNDJEFF_OFFSET))(this);
	}

	::System::Boolean GPIBFJOCBNB(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + BMHOICGHFPC_GPIBFJOCBNB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KCLBMAAOMEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_KCLBMAAOMEM_OFFSET))(this);
	}

	::System::Boolean DIAAMGBOCNL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BMHOICGHFPC_DIAAMGBOCNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean FAPOHAMAAJB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BMHOICGHFPC_FAPOHAMAAJB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BKLGHKDOLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_BKLGHKDOLIJ_OFFSET))(this);
	}

	::System::Boolean PJDMKHEPIOI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BMHOICGHFPC_PJDMKHEPIOI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOBLMFFICN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHOICGHFPC_ACOBLMFFICN_OFFSET))(this);
	}
};
