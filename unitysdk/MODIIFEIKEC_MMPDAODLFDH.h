#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MODIIFEIKEC;
namespace System { class Action; }

#define MODIIFEIKEC_MMPDAODLFDH_PFFNJOOABBH_OFFSET UNITYSDK_OFFSET(0x174B4D70)
#define MODIIFEIKEC_MMPDAODLFDH__CTOR_OFFSET UNITYSDK_OFFSET(0x174B4D60)

inline static constexpr unsigned int MODIIFEIKEC_MMPDAODLFDH_TypeDefinitionIndex = 39748;

class MODIIFEIKEC_MMPDAODLFDH : public ::System::Object
{
public:
	::System::Action* IFDOFACEODK; // 0x10
	::MODIIFEIKEC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIIFEIKEC_MMPDAODLFDH__CTOR_OFFSET))(this);
	}

	::System::Void PFFNJOOABBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIIFEIKEC_MMPDAODLFDH_PFFNJOOABBH_OFFSET))(this);
	}
};
