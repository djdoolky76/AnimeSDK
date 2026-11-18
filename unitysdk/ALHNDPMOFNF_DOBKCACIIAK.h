#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
namespace UnityEngine { class GameObject; }

#define ALHNDPMOFNF_DOBKCACIIAK_MMDOAIJEOKB_OFFSET UNITYSDK_OFFSET(0x145146A0)
#define ALHNDPMOFNF_DOBKCACIIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1450DDF0)

inline static constexpr unsigned int ALHNDPMOFNF_DOBKCACIIAK_TypeDefinitionIndex = 86735;

class ALHNDPMOFNF_DOBKCACIIAK : public ::System::Object
{
public:
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x10
	::System::Int32 CCKIIKOLMIA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_DOBKCACIIAK__CTOR_OFFSET))(this);
	}

	::System::Void MMDOAIJEOKB(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_DOBKCACIIAK_MMDOAIJEOKB_OFFSET))(this, NJOAJLDJCCJ);
	}
};
