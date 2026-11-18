#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LICNBLHOLKF;
namespace UnityEngine { class Collider; }

#define LICNBLHOLKF_POEEEBGPFFC_EAPNFDLHBNL_OFFSET UNITYSDK_OFFSET(0x184F9F90)
#define LICNBLHOLKF_POEEEBGPFFC__CTOR_OFFSET UNITYSDK_OFFSET(0x184F9F80)

inline static constexpr unsigned int LICNBLHOLKF_POEEEBGPFFC_TypeDefinitionIndex = 73682;

class LICNBLHOLKF_POEEEBGPFFC : public ::System::Object
{
public:
	::UnityEngine::Collider* HODAIDNDKHD; // 0x10
	::LICNBLHOLKF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_POEEEBGPFFC__CTOR_OFFSET))(this);
	}

	::System::Void EAPNFDLHBNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICNBLHOLKF_POEEEBGPFFC_EAPNFDLHBNL_OFFSET))(this);
	}
};
