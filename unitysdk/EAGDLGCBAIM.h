#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBDCAGEKHAJ;
namespace MoleMole { class MonoSteer; }

#define EAGDLGCBAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE3270)

inline static constexpr unsigned int EAGDLGCBAIM_TypeDefinitionIndex = 75555;

class EAGDLGCBAIM : public ::System::Object
{
public:
	::MoleMole::MonoSteer* HLBPNEAKGBE; // 0x10
	::BBDCAGEKHAJ* MKIGHGFHEJO; // 0x18

	::System::Void _ctor(::BBDCAGEKHAJ* MKIGHGFHEJO, ::MoleMole::MonoSteer* HLBPNEAKGBE)
	{
		return ((::System::Void(*)(::PVOID, ::BBDCAGEKHAJ*, ::MoleMole::MonoSteer*))((::PBYTE)hIl2Cpp + EAGDLGCBAIM__CTOR_OFFSET))(this, MKIGHGFHEJO, HLBPNEAKGBE);
	}
};
