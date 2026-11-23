#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EED8D43B78D10406;
namespace System { class Action; }

#define EED8D43B78D10406_ECE3B52607BEA360_A485CF14DD98980F_OFFSET UNITYSDK_OFFSET(0x1B2B4B0)
#define EED8D43B78D10406_ECE3B52607BEA360__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EED8D43B78D10406_ECE3B52607BEA360_TypeDefinitionIndex = 2070;

class EED8D43B78D10406_ECE3B52607BEA360 : public ::System::Object
{
public:
	::System::Action* B8553DC7C901A1F1; // 0x10
	::EED8D43B78D10406* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EED8D43B78D10406_ECE3B52607BEA360__CTOR_OFFSET))(this);
	}

	::System::Void A485CF14DD98980F(::System::Boolean B9071C2364AEB939)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EED8D43B78D10406_ECE3B52607BEA360_A485CF14DD98980F_OFFSET))(this, B9071C2364AEB939);
	}
};
