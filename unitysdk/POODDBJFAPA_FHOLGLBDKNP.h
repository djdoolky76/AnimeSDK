#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOIPGIDEIPO;

#define POODDBJFAPA_FHOLGLBDKNP_DHAEFAPNEFA_OFFSET UNITYSDK_OFFSET(0x1C671A00)
#define POODDBJFAPA_FHOLGLBDKNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6719F0)

inline static constexpr unsigned int POODDBJFAPA_FHOLGLBDKNP_TypeDefinitionIndex = 90259;

class POODDBJFAPA_FHOLGLBDKNP : public ::System::Object
{
public:
	::LOIPGIDEIPO* GDINHGLCODO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_FHOLGLBDKNP__CTOR_OFFSET))(this);
	}

	::System::Boolean DHAEFAPNEFA(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POODDBJFAPA_FHOLGLBDKNP_DHAEFAPNEFA_OFFSET))(this, HAAEBCOBKFF);
	}
};
