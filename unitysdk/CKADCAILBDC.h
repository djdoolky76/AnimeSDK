#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

namespace MoleMole { class EventRange; }

#define CKADCAILBDC_DKLCIPCOJKO_OFFSET UNITYSDK_OFFSET(0x18DDAEF0)
#define CKADCAILBDC_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x18DDAFD0)
#define CKADCAILBDC_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x18DDAF40)
#define CKADCAILBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDAF00)

inline static constexpr unsigned int CKADCAILBDC_TypeDefinitionIndex = 54019;

class CKADCAILBDC : public ::KHAIBHJAFEP
{
public:
	::System::Int32 FABPGLLCEHC; // 0x38

	::System::Void _ctor(::MoleMole::EventRange* HICLHPFMJEN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + CKADCAILBDC__CTOR_OFFSET))(this, HICLHPFMJEN);
	}

	::System::Boolean DKLCIPCOJKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKADCAILBDC_DKLCIPCOJKO_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKADCAILBDC_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void NEJABFNFKIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKADCAILBDC_NEJABFNFKIN_OFFSET))(this);
	}
};
