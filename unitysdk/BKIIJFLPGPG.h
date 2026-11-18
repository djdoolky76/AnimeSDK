#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIDNBGKHBAI;

#define BKIIJFLPGPG_HHGIIPANAPB_OFFSET UNITYSDK_OFFSET(0x113EEB00)
#define BKIIJFLPGPG_JKHEAAJFGIE_OFFSET UNITYSDK_OFFSET(0x113EEAF0)
#define BKIIJFLPGPG_LABOLDLBLCC_OFFSET UNITYSDK_OFFSET(0x113EEB10)
#define BKIIJFLPGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x113EEAA0)

inline static constexpr unsigned int BKIIJFLPGPG_TypeDefinitionIndex = 67212;

class BKIIJFLPGPG : public ::System::Object
{
public:
	::DIDNBGKHBAI* AHMFPFACACD; // 0x10
	::System::Int32 _NKCGNDFPAJE_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 BKBAHLBNEEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKIIJFLPGPG__CTOR_OFFSET))(this, BKBAHLBNEEM);
	}

	::System::Boolean JKHEAAJFGIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIIJFLPGPG_JKHEAAJFGIE_OFFSET))(this);
	}

	::System::Boolean HHGIIPANAPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIIJFLPGPG_HHGIIPANAPB_OFFSET))(this);
	}

	::System::Int32 LABOLDLBLCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIIJFLPGPG_LABOLDLBLCC_OFFSET))(this);
	}
};
