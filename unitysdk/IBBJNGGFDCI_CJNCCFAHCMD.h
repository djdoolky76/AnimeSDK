#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBBJNGGFDCI;
namespace System { class Action; }

#define IBBJNGGFDCI_CJNCCFAHCMD_ADNFMCJNDNM_OFFSET UNITYSDK_OFFSET(0x141B09D0)
#define IBBJNGGFDCI_CJNCCFAHCMD_AMMMMBFKBNO_OFFSET UNITYSDK_OFFSET(0x141B0AE0)
#define IBBJNGGFDCI_CJNCCFAHCMD_CKOEKBCMHDO_OFFSET UNITYSDK_OFFSET(0x141B0AA0)
#define IBBJNGGFDCI_CJNCCFAHCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x141B09C0)

inline static constexpr unsigned int IBBJNGGFDCI_CJNCCFAHCMD_TypeDefinitionIndex = 44362;

class IBBJNGGFDCI_CJNCCFAHCMD : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Action* PABLEDCGDGM; // 0x20
	::IBBJNGGFDCI* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_CJNCCFAHCMD__CTOR_OFFSET))(this);
	}

	::System::Void ADNFMCJNDNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_CJNCCFAHCMD_ADNFMCJNDNM_OFFSET))(this);
	}

	::System::Void CKOEKBCMHDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_CJNCCFAHCMD_CKOEKBCMHDO_OFFSET))(this);
	}

	::System::Void AMMMMBFKBNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_CJNCCFAHCMD_AMMMMBFKBNO_OFFSET))(this);
	}
};
