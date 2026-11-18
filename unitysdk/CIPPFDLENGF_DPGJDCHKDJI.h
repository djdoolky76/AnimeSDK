#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIPPFDLENGF;
class JFPAMINKIMK;
namespace MoleMole { class UIInterKnotPostDialogPopContext; }
namespace System { class Action; }

#define CIPPFDLENGF_DPGJDCHKDJI_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x159DD2B0)
#define CIPPFDLENGF_DPGJDCHKDJI_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x159DD420)
#define CIPPFDLENGF_DPGJDCHKDJI__CTOR_OFFSET UNITYSDK_OFFSET(0x159DD2A0)

inline static constexpr unsigned int CIPPFDLENGF_DPGJDCHKDJI_TypeDefinitionIndex = 61930;

class CIPPFDLENGF_DPGJDCHKDJI : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::MoleMole::UIInterKnotPostDialogPopContext* HDMIPFHLOLL; // 0x18
	::JFPAMINKIMK* ODPCBNPDOPK; // 0x20
	::CIPPFDLENGF* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPPFDLENGF_DPGJDCHKDJI__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPPFDLENGF_DPGJDCHKDJI_MJMKFFANPBL_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPPFDLENGF_DPGJDCHKDJI_PEJFEPJJDMI_OFFSET))(this);
	}
};
