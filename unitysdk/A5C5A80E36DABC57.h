#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F265825378816B20;
namespace UnityEngine { class SphereCollider; }

#define A5C5A80E36DABC57_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x387DC90)

inline static constexpr unsigned int A5C5A80E36DABC57_TypeDefinitionIndex = 18046;

class A5C5A80E36DABC57 : public ::System::Object
{
public:
	static ::F265825378816B20* F29687675C2F4BB9(::UnityEngine::SphereCollider* BD8273AB04C4B760)
	{
		return ((::F265825378816B20*(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + A5C5A80E36DABC57_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
