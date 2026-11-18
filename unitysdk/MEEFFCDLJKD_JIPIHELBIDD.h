#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MEEFFCDLJKD_JIPIHELBIDD_OLFIBGPONPL_OFFSET UNITYSDK_OFFSET(0x20072510)
#define MEEFFCDLJKD_JIPIHELBIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x20072500)

inline static constexpr unsigned int MEEFFCDLJKD_JIPIHELBIDD_TypeDefinitionIndex = 96613;

class MEEFFCDLJKD_JIPIHELBIDD : public ::System::Object
{
public:
	::UnityEngine::GameObject* EIFONLCJOPG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_JIPIHELBIDD__CTOR_OFFSET))(this);
	}

	::System::Void OLFIBGPONPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_JIPIHELBIDD_OLFIBGPONPL_OFFSET))(this);
	}
};
