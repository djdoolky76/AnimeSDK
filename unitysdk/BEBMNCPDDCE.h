#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEPGEKDCID_IHEHDAFHNJN.h"
#include "unitysdk/System/Object.h"

class OMIOAJGHCAM;

#define BEBMNCPDDCE__CTOR_OFFSET UNITYSDK_OFFSET(0x170211A0)

inline static constexpr unsigned int BEBMNCPDDCE_TypeDefinitionIndex = 88441;

class BEBMNCPDDCE : public ::System::Object
{
public:
	::OMIOAJGHCAM* AJHNAOOPALC; // 0x10
	::System::Boolean NBGFFLPCIAJ; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 KGGLCDNPFCG; // 0x1C
	::EDEPGEKDCID_IHEHDAFHNJN JKBLDFBGBPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBMNCPDDCE__CTOR_OFFSET))(this);
	}
};
