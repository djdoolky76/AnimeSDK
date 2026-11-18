#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define JOBGPOKPNHO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1C3733A0)
#define JOBGPOKPNHO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C3733E0)
#define JOBGPOKPNHO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C373270)
#define JOBGPOKPNHO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1C373300)
#define JOBGPOKPNHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C3730F0)
#define JOBGPOKPNHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C373170)
#define JOBGPOKPNHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3731F0)
#define JOBGPOKPNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373260)

inline static constexpr unsigned int JOBGPOKPNHO_TypeDefinitionIndex = 70520;

class JOBGPOKPNHO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC0; // 0x0
	::System::Boolean ECEBDPJEKNN; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOBGPOKPNHO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBGPOKPNHO_FIGPAOKNJLN_OFFSET))(this);
	}
};
