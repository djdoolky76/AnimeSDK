#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JOMDMOLJLOC_PFNCJCFJABI_BOMKMMKACCJ_OFFSET UNITYSDK_OFFSET(0x17B598B0)
#define JOMDMOLJLOC_PFNCJCFJABI__CTOR_OFFSET UNITYSDK_OFFSET(0x17B598A0)

inline static constexpr unsigned int JOMDMOLJLOC_PFNCJCFJABI_TypeDefinitionIndex = 77104;

class JOMDMOLJLOC_PFNCJCFJABI : public ::System::Object
{
public:
	::NPCCrowd::Ability::FTransformFragment EELBDADBHBJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_PFNCJCFJABI__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 BOMKMMKACCJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_PFNCJCFJABI_BOMKMMKACCJ_OFFSET))(this);
	}
};
