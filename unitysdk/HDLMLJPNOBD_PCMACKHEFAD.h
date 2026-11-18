#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDLMLJPNOBD_LJMLAKNJJOC;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UISummerTideTreasureSellingBuffRowWidgetController; }

#define HDLMLJPNOBD_PCMACKHEFAD_CDGJJCOCOHK_OFFSET UNITYSDK_OFFSET(0x13D87BC0)
#define HDLMLJPNOBD_PCMACKHEFAD_ELJELLPCNFG_OFFSET UNITYSDK_OFFSET(0x13D87A60)
#define HDLMLJPNOBD_PCMACKHEFAD_FFEGKEMMBOC_OFFSET UNITYSDK_OFFSET(0x13D87A50)
#define HDLMLJPNOBD_PCMACKHEFAD_GJGJKHLGPGA_OFFSET UNITYSDK_OFFSET(0x13D879E0)
#define HDLMLJPNOBD_PCMACKHEFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13D879D0)

inline static constexpr unsigned int HDLMLJPNOBD_PCMACKHEFAD_TypeDefinitionIndex = 38703;

class HDLMLJPNOBD_PCMACKHEFAD : public ::System::Object
{
public:
	::HDLMLJPNOBD_LJMLAKNJJOC* FGBNBFHOKAA; // 0x10
	::DG::Tweening::Tween* FKLGCKPKCJJ; // 0x18
	::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController* EPIDDDEJJDE; // 0x20
	::System::Boolean NIPCLLGIPME; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single IMLLDOHDCNC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PCMACKHEFAD__CTOR_OFFSET))(this);
	}

	::System::Void GJGJKHLGPGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PCMACKHEFAD_GJGJKHLGPGA_OFFSET))(this);
	}

	::System::Boolean FFEGKEMMBOC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PCMACKHEFAD_FFEGKEMMBOC_OFFSET))(this);
	}

	::System::Void ELJELLPCNFG(::System::Single FOOBONOEPGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PCMACKHEFAD_ELJELLPCNFG_OFFSET))(this, FOOBONOEPGD);
	}

	::System::Single CDGJJCOCOHK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMLJPNOBD_PCMACKHEFAD_CDGJJCOCOHK_OFFSET))(this);
	}
};
