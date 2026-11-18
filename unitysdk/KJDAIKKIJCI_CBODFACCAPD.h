#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJDAIKKIJCI;
namespace System { class Action; }

#define KJDAIKKIJCI_CBODFACCAPD_DEKACAPGGFG_OFFSET UNITYSDK_OFFSET(0x1862E290)
#define KJDAIKKIJCI_CBODFACCAPD_IBFGKAELBNP_OFFSET UNITYSDK_OFFSET(0x1862E270)
#define KJDAIKKIJCI_CBODFACCAPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1862DDF0)

inline static constexpr unsigned int KJDAIKKIJCI_CBODFACCAPD_TypeDefinitionIndex = 85204;

class KJDAIKKIJCI_CBODFACCAPD : public ::System::Object
{
public:
	::KJDAIKKIJCI* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_CBODFACCAPD__CTOR_OFFSET))(this);
	}

	::System::Void IBFGKAELBNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_CBODFACCAPD_IBFGKAELBNP_OFFSET))(this);
	}

	::System::Void DEKACAPGGFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_CBODFACCAPD_DEKACAPGGFG_OFFSET))(this);
	}
};
