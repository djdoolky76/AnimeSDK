#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IJFBJFFMNIA;
namespace System { class Action; }

#define DHOBHFNDAAO__CTOR_OFFSET UNITYSDK_OFFSET(0x12081700)

inline static constexpr unsigned int DHOBHFNDAAO_TypeDefinitionIndex = 70257;

class DHOBHFNDAAO : public ::System::Object
{
public:
	::System::Action* HNPMFAKLDAH; // 0x10
	::IJFBJFFMNIA* NILJKIHKOJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOBHFNDAAO__CTOR_OFFSET))(this);
	}
};
