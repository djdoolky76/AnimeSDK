#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class String; }

#define JODJCPEIIHG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13CD2D80)
#define JODJCPEIIHG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x13CD2E90)
#define JODJCPEIIHG_EMCNACFPNAF_OFFSET UNITYSDK_OFFSET(0x13CD2E00)
#define JODJCPEIIHG_HBAAIPKBFJI_OFFSET UNITYSDK_OFFSET(0x13CD2D30)
#define JODJCPEIIHG_OFPOEMKLHAP_OFFSET UNITYSDK_OFFSET(0x13CD2ED0)
#define JODJCPEIIHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13CD2C50)
#define JODJCPEIIHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13CD2B60)
#define JODJCPEIIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD2C40)

inline static constexpr unsigned int JODJCPEIIHG_TypeDefinitionIndex = 50360;

class JODJCPEIIHG : public ::System::Object
{
public:
	::MoleMole::Config::ConfigTriggerCache* DFMKILICPFB; // 0x10
	::System::Int32 FAIJJCBEKHJ; // 0x18
	::System::Int32 PIDJFCMMCAO; // 0x1C
	::System::Boolean IGBLHDALGIJ; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single LFFOIAPJECO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG_TOSTRING_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigTriggerCache* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCache*))((::PBYTE)hIl2Cpp + JODJCPEIIHG_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void HBAAIPKBFJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG_HBAAIPKBFJI_OFFSET))(this);
	}

	::System::Int32 EMCNACFPNAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG_EMCNACFPNAF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODJCPEIIHG_DPIHOJBBGLA_OFFSET))(this);
	}

	static ::JODJCPEIIHG* OFPOEMKLHAP(::MoleMole::Config::ConfigTriggerCache* DFMKILICPFB)
	{
		return ((::JODJCPEIIHG*(*)(::MoleMole::Config::ConfigTriggerCache*))((::PBYTE)hIl2Cpp + JODJCPEIIHG_OFPOEMKLHAP_OFFSET))(DFMKILICPFB);
	}
};
