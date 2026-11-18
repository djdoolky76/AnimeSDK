#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGEBOFOHDCI;
namespace System { class Action; }

#define JGEBOFOHDCI_GFFIBJJABCF_AKNPNHLJCCG_OFFSET UNITYSDK_OFFSET(0x138413C0)
#define JGEBOFOHDCI_GFFIBJJABCF__CTOR_OFFSET UNITYSDK_OFFSET(0x138413B0)

inline static constexpr unsigned int JGEBOFOHDCI_GFFIBJJABCF_TypeDefinitionIndex = 70275;

class JGEBOFOHDCI_GFFIBJJABCF : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::System::Action* DIOMMCOEAMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_GFFIBJJABCF__CTOR_OFFSET))(this);
	}

	::System::Void AKNPNHLJCCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_GFFIBJJABCF_AKNPNHLJCCG_OFFSET))(this);
	}
};
