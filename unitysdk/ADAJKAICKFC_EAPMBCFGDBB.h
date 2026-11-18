#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class ADAJKAICKFC;
class FMHDMLBDIJC;

#define ADAJKAICKFC_EAPMBCFGDBB_OJAIANCBJKE_OFFSET UNITYSDK_OFFSET(0x14343B40)
#define ADAJKAICKFC_EAPMBCFGDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1433FB40)

inline static constexpr unsigned int ADAJKAICKFC_EAPMBCFGDBB_TypeDefinitionIndex = 72384;

class ADAJKAICKFC_EAPMBCFGDBB : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::ADAJKAICKFC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJKAICKFC_EAPMBCFGDBB__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> OJAIANCBJKE(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADAJKAICKFC_EAPMBCFGDBB_OJAIANCBJKE_OFFSET))(this, JNDDJMAHNAI);
	}
};
