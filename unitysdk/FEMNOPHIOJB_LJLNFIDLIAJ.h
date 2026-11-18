#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEMNOPHIOJB;

#define FEMNOPHIOJB_LJLNFIDLIAJ_LOBGBAPECMF_OFFSET UNITYSDK_OFFSET(0x1419C5C0)
#define FEMNOPHIOJB_LJLNFIDLIAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1419C5B0)

inline static constexpr unsigned int FEMNOPHIOJB_LJLNFIDLIAJ_TypeDefinitionIndex = 50219;

class FEMNOPHIOJB_LJLNFIDLIAJ : public ::System::Object
{
public:
	::FEMNOPHIOJB* KLHPEBKNIFB; // 0x10
	::System::Int32 INEPJABHIIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMNOPHIOJB_LJLNFIDLIAJ__CTOR_OFFSET))(this);
	}

	::System::Void LOBGBAPECMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMNOPHIOJB_LJLNFIDLIAJ_LOBGBAPECMF_OFFSET))(this);
	}
};
