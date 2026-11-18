#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IGLOKEAKOFK_FAJOABBELCI_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x12EB0140)
#define IGLOKEAKOFK_FAJOABBELCI_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x12EB0150)
#define IGLOKEAKOFK_FAJOABBELCI__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB0130)

inline static constexpr unsigned int IGLOKEAKOFK_FAJOABBELCI_TypeDefinitionIndex = 70806;

class IGLOKEAKOFK_FAJOABBELCI : public ::System::Object
{
public:
	::System::Action* KCNFHMFDOHI; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_FAJOABBELCI__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_FAJOABBELCI_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLOKEAKOFK_FAJOABBELCI_KBAFCIJONFJ_OFFSET))(this);
	}
};
