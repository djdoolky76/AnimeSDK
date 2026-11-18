#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBJNDMPNDLA;
namespace System { class Action; }

#define EBJNDMPNDLA_OFMCGEDBEOI_MHIFFDCGMAJ_OFFSET UNITYSDK_OFFSET(0x1FE15550)
#define EBJNDMPNDLA_OFMCGEDBEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE15540)

inline static constexpr unsigned int EBJNDMPNDLA_OFMCGEDBEOI_TypeDefinitionIndex = 96464;

class EBJNDMPNDLA_OFMCGEDBEOI : public ::System::Object
{
public:
	::EBJNDMPNDLA* KLHPEBKNIFB; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Boolean PAKOBHFGLEE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_OFMCGEDBEOI__CTOR_OFFSET))(this);
	}

	::System::Void MHIFFDCGMAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_OFMCGEDBEOI_MHIFFDCGMAJ_OFFSET))(this);
	}
};
