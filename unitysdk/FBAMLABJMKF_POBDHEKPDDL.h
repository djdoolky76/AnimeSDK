#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBAMLABJMKF_FEELNPOFJKH;
class PNJDGHBEMLK;

#define FBAMLABJMKF_POBDHEKPDDL_JBJGJCCFBPM_OFFSET UNITYSDK_OFFSET(0x1418ED20)
#define FBAMLABJMKF_POBDHEKPDDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1418ED10)

inline static constexpr unsigned int FBAMLABJMKF_POBDHEKPDDL_TypeDefinitionIndex = 78154;

class FBAMLABJMKF_POBDHEKPDDL : public ::System::Object
{
public:
	::FBAMLABJMKF_FEELNPOFJKH* FGBNBFHOKAA; // 0x10
	::UnityEngine::Vector3 LPOIBLLILAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_POBDHEKPDDL__CTOR_OFFSET))(this);
	}

	::System::Boolean JBJGJCCFBPM(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_POBDHEKPDDL_JBJGJCCFBPM_OFFSET))(this, CDKCJAKODPN);
	}
};
