#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEPGEKDCID_IHEHDAFHNJN.h"
#include "unitysdk/System/Object.h"

#define FMPMKNAMGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x13229FC0)

inline static constexpr unsigned int FMPMKNAMGAL_TypeDefinitionIndex = 92473;

class FMPMKNAMGAL : public ::System::Object
{
public:
	::EDEPGEKDCID_IHEHDAFHNJN JKBLDFBGBPK; // 0x10
	::System::Boolean NBGFFLPCIAJ; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 KGGLCDNPFCG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPMKNAMGAL__CTOR_OFFSET))(this);
	}
};
