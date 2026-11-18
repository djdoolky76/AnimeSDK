#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DACCMMPOFCH;
class EJHHPFFPFOJ;
namespace System { class Action; }

#define DACCMMPOFCH_HOIBJPKHINI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x13E25A60)
#define DACCMMPOFCH_HOIBJPKHINI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E25A50)

inline static constexpr unsigned int DACCMMPOFCH_HOIBJPKHINI_TypeDefinitionIndex = 42814;

class DACCMMPOFCH_HOIBJPKHINI : public ::System::Object
{
public:
	::DACCMMPOFCH* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::EJHHPFFPFOJ* BNPEPKJEILE; // 0x20
	::System::Int32 DKBLHCCCLGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCMMPOFCH_HOIBJPKHINI__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCMMPOFCH_HOIBJPKHINI_AAHMACBDCPN_OFFSET))(this);
	}
};
