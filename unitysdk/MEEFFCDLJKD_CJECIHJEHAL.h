#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MEEFFCDLJKD_CJECIHJEHAL_FEFMIKCAKFH_OFFSET UNITYSDK_OFFSET(0x1F03F300)
#define MEEFFCDLJKD_CJECIHJEHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F03CDC0)

inline static constexpr unsigned int MEEFFCDLJKD_CJECIHJEHAL_TypeDefinitionIndex = 96607;

class MEEFFCDLJKD_CJECIHJEHAL : public ::System::Object
{
public:
	::UnityEngine::GameObject* JMDHBJMNBCP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_CJECIHJEHAL__CTOR_OFFSET))(this);
	}

	::System::Void FEFMIKCAKFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_CJECIHJEHAL_FEFMIKCAKFH_OFFSET))(this);
	}
};
