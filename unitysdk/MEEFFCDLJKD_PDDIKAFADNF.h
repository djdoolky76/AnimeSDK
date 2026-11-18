#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MEEFFCDLJKD_PDDIKAFADNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFFF310)

inline static constexpr unsigned int MEEFFCDLJKD_PDDIKAFADNF_TypeDefinitionIndex = 96615;

class MEEFFCDLJKD_PDDIKAFADNF : public ::System::Object
{
public:
	::UnityEngine::GameObject* OPDIDCBAPGP; // 0x10
	::System::Boolean HGICHFPDFNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_PDDIKAFADNF__CTOR_OFFSET))(this);
	}
};
