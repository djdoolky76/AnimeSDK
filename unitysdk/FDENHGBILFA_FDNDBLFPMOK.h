#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDENHGBILFA;
namespace System { class String; }

#define FDENHGBILFA_FDNDBLFPMOK_CAAOOIMGLAH_OFFSET UNITYSDK_OFFSET(0x1ED8BC80)
#define FDENHGBILFA_FDNDBLFPMOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8BC70)

inline static constexpr unsigned int FDENHGBILFA_FDNDBLFPMOK_TypeDefinitionIndex = 94967;

class FDENHGBILFA_FDNDBLFPMOK : public ::System::Object
{
public:
	::FDENHGBILFA* KLHPEBKNIFB; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDENHGBILFA_FDNDBLFPMOK__CTOR_OFFSET))(this);
	}

	::System::Void CAAOOIMGLAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDENHGBILFA_FDNDBLFPMOK_CAAOOIMGLAH_OFFSET))(this);
	}
};
